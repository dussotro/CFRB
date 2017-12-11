import numpy as np
import matplotlib.pyplot as plt


Lb = 0.2
gamma = 0.12

def f(x, alpha, beta, gamma):

    return(alpha*x**2 + beta*x + gamma)


for L in np.arange(0.5, 1.3, 0.1):
    plt.figure("L = {}".format(L))

    x = np.arange(0,2*L,0.005)

    boite = [ [L, L], [0, 0.4] ]
    boitefond = [ [L+0.4 , L+0.4], [0, 0.6]]
    plt.plot(boite[0], boite[1], 'k', linewidth = 3)
    plt.plot(boitefond[0], boitefond[1], 'k', linewidth = 3)
    alpha = -0.5/(L*Lb) - gamma/((L+Lb)*Lb)
    print(alpha)
    #beta = -(L+Lb)*alpha
    beta = np.tan(75 * np.pi/180)
    print(beta)
    plt.plot(x, f(x, alpha, beta, gamma), 'r', label='{}'.format( np.arctan(beta) * 180/np.pi))
    plt.xlim([0, 1.6])
    plt.ylim([0, 1.5])
    plt.legend()



plt.show()

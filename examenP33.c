#include <stdio.h>
#include <string.h>


#define PASS 2208
#define PASS2 1122
#define PASS3 2504
int main(void){
    int intentos = 0;
    int password, password2, password3, opcion, opcionP, opcionS;
    float asientosDisponibles = 20;
    float totalEntradas, entrada, descuento, porcentaje;
    float entradasVendidas = 0;
    float ventas = 0;
    char user[20];
    char user2[20];
    char user3[20];
    char userEstatico[20]= "ashleesoledispa";
    char userEstatico2[20]= "leninarevalo1";
    char userEstatico3[20]= "gabriel_bustos";
do 
{
    printf("Bienvenido al servicio movil del festival de cine 2023 \n");
    printf("Ingrese su nombre de usuario \n");
    scanf("%s", user);
    printf("Ingrese su clave de 4 digitos \n");
    scanf("%d", &password);

    if(strcmp(userEstatico,user) == 0
        && PASS == password){
            printf("Ha ingresado de forma exitosa \n");
            

            do
            {
                printf("Seleccione una opcion \n");
                printf("Escriba 1 para Venta de entradas \n");
                printf("Escriba 2 para ver Estadistica de ventas\n");
                printf("Escriba 3 para Salir \n");
                scanf("%d", &opcion);

                switch (opcion)
                {
                case 1:
                    printf("Ha escogido venta de entradas \n");
                    printf("Seleccione que pelicula desea ver \n");
                    printf("Escriba 1 para ver Barbie \n");
                    printf("Escriba 2 para ver Spiderman \n");
                    scanf("%d", &opcionP);

                    switch (opcionP)
                    {
                    case 1:
                        printf("Ha escogido Barbie \n");
                        printf("Seleccione el tipo de sala\n");
                        printf("Escriba 1 para sala Normal \n");
                        printf("Escriba 2 para sala VIP \n");
                        printf("Escriba 3 para sala 3D \n");
                        scanf("%d", &opcionS);

                        switch (opcionS)
                        {
                        case 1:
                            printf("Cuantas entradas desea comprar \n");
                            scanf("%f", &entrada);
                            totalEntradas= totalEntradas + entrada;
                            if (entrada > asientosDisponibles) {
                               printf("Ya no hay esa cantidad de asientos disponibles \n"); 
                            }
                            else {
                                totalEntradas= (entrada * 8);
                                if (totalEntradas < 40){
                                    printf("El total a pagar es de %2.f dolares \n", totalEntradas); 
                                }
                                else {
                                    if (totalEntradas >= 40 && totalEntradas <= 80) {
                                    porcentaje = 0;
                                    porcentaje = (totalEntradas*5)/100;
                                    descuento = totalEntradas - porcentaje;
                                    printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                    }
                                    else {
                                        if (totalEntradas >= 80 && totalEntradas <= 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*10)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        else {
                                            if (totalEntradas > 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*15)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        }
                                    }
                                }
                            }
                            ventas = ventas + porcentaje;
                            break;
                        case 2:
                            printf("Cuantas entradas desea comprar \n");
                            scanf("%f", &entrada);
                            totalEntradas= totalEntradas + entrada;
                            if (entrada > asientosDisponibles) {
                               printf("Ya no hay esa cantidad de asientos disponibles \n"); 
                            }
                            else {
                                totalEntradas= (entrada * 15);
                                if (totalEntradas < 40){
                                    printf("El total a pagar es de %2.f dolares \n", totalEntradas); 
                                }
                                else {
                                    if (totalEntradas >= 40 && totalEntradas <= 80) {
                                    porcentaje = 0;
                                    porcentaje = (totalEntradas*5)/100;
                                    descuento = totalEntradas - porcentaje;
                                    printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                    }
                                    else {
                                        if (totalEntradas >= 80 && totalEntradas <= 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*10)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        else {
                                            if (totalEntradas > 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*15)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        }
                                    }
                                }
                            }
                            ventas = ventas + porcentaje;
                            break;
                        case 3:
                            printf("Cuantas entradas desea comprar \n");
                            scanf("%f", &entrada);
                            totalEntradas= totalEntradas + entrada;
                            if (entrada > asientosDisponibles) {
                               printf("Ya no hay esa cantidad de asientos disponibles \n"); 
                            }
                            else {
                                totalEntradas= (entrada * 12);
                                if (totalEntradas < 40){
                                    printf("El total a pagar es de %2.f dolares \n", totalEntradas); 
                                }
                                else {
                                    if (totalEntradas >= 40 && totalEntradas <= 80) {
                                    porcentaje = 0;
                                    porcentaje = (totalEntradas*5)/100;
                                    descuento = totalEntradas - porcentaje;
                                    printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                    }
                                    else {
                                        if (totalEntradas >= 80 && totalEntradas <= 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*10)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        else {
                                            if (totalEntradas > 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*15)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        }
                                    }
                                } 
                            }
                            ventas = ventas + porcentaje;
                            break;
                        default:
                        printf("Esta opcion no es valida \n");
                            break;
                        }
                        break;
                    case 2:
                        printf("Ha escogido Spiderman \n");
                        printf("Seleccione el tipo de sala\n");
                        printf("Escriba 1 para sala Normal \n");
                        printf("Escriba 2 para sala VIP \n");
                        printf("Escriba 3 para sala 3D \n");
                        scanf("%f", &opcionS);

                        switch (opcionS)
                        {
                        case 1:
                            printf("Cuantas entradas desea comprar \n");
                            scanf("%d", &entrada);
                            totalEntradas= totalEntradas + entrada;
                            if (entrada > asientosDisponibles) {
                               printf("Ya no hay esa cantidad de asientos disponibles \n"); 
                            }
                            else {
                                totalEntradas= (entrada * 8);
                                if (totalEntradas < 40){
                                    printf("El total a pagar es de %2.f dolares \n", totalEntradas); 
                                }
                                else {
                                    if (totalEntradas >= 40 && totalEntradas <= 80) {
                                    porcentaje = 0;
                                    porcentaje = (totalEntradas*5)/100;
                                    descuento = totalEntradas - porcentaje;
                                    printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                    }
                                    else {
                                        if (totalEntradas >= 80 && totalEntradas <= 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*10)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        else {
                                            if (totalEntradas > 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*15)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        }
                                    }
                                } 
                            }
                            ventas = ventas + porcentaje;
                            break;
                        case 2:
                            printf("Cuantas entradas desea comprar \n");
                            scanf("%f", &entrada);
                            totalEntradas= totalEntradas + entrada;
                            if (entrada > asientosDisponibles) {
                               printf("Ya no hay esa cantidad de asientos disponibles \n"); 
                            }
                            else {
                                totalEntradas= (entrada * 15);
                                if (totalEntradas < 40){
                                    printf("El total a pagar es de %2.f dolares \n", totalEntradas); 
                                }
                                else {
                                    if (totalEntradas >= 40 && totalEntradas <= 80) {
                                    porcentaje = 0;
                                    porcentaje = (totalEntradas*5)/100;
                                    descuento = totalEntradas - porcentaje;
                                    printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                    }
                                    else {
                                        if (totalEntradas >= 80 && totalEntradas <= 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*10)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        else {
                                            if (totalEntradas > 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*15)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        }
                                    }
                                }
                            }  
                            ventas = ventas + porcentaje;
                            break;
                        case 3:
                            printf("Cuantas entradas desea comprar \n");
                            scanf("%f", &entrada);
                            totalEntradas= totalEntradas + entrada;
                            if (entrada > asientosDisponibles) {
                               printf("Ya no hay esa cantidad de asientos disponibles \n"); 
                            }
                            else {
                                totalEntradas= (entrada * 12);
                                if (totalEntradas < 40){
                                    printf("El total a pagar es de %2.f dolares \n", totalEntradas); 
                                }
                                else {
                                    if (totalEntradas >= 40 && totalEntradas <= 80) {
                                    porcentaje = 0;
                                    porcentaje = (totalEntradas*5)/100;
                                    descuento = totalEntradas - porcentaje;
                                    printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                    }
                                    else {
                                        if (totalEntradas >= 80 && totalEntradas <= 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*10)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        else {
                                            if (totalEntradas > 120) {
                                        porcentaje = 0;
                                        porcentaje = (totalEntradas*15)/100;
                                        descuento = totalEntradas - porcentaje;
                                        printf("El total a pagar es de %2.f dolares \n", porcentaje); 
                                        }
                                        }
                                    }
                                }
                            }
                            ventas = ventas + porcentaje;
                            break;
                        default:
                        printf("Esta opcion no es valida \n");
                            break;
                        }
                        break;

                    default:
                    printf("Esta opcion no es valida \n");
                        break;
                    }
                    break;
                case 2:
                printf("Estadisticas \n");
                printf("Se han vendido %2.f \n", entradasVendidas);
                printf("Las ganancias son %2.f \n", ventas);

                    break;
                    
                case 3:
                    printf("Gracias por usar nuestro servicio \n");
                    break;
                
                default:
                printf("Esta opcion no es valida \n");
                    break;
                }
            } while (opcion != 3);
            
    } 
    else {
        if(strcmp(userEstatico2,user2) == 0
        && PASS2 == password2){
            printf("Ha ingresado de forma exitosa \n");
            }
        else {
            if(strcmp(userEstatico3,user3) == 0
            && PASS3 == password3) {
            printf("Ha ingresado de forma exitosa \n");
            }
            else {
                printf("Usuario o contraseña incorrectos, intento #%d \n", intentos);
                intentos += 1;
            }
            }

    }
if (intentos > 3) {
    printf("Ha superado el numero de intentos \n");
}

} while (intentos <= 3);
    return 0;
}
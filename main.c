if ( genero == 0) {
    if ( idade <= 20) debug_printf("o seguro a ser pago é R$2000,00 \n");
    else if ( idade <= 26) debug_printf("o seguro a ser pago é R$1700,00 \n");
    else debug_printf("o seguro a ser pago é R$1500,00 \n");
} else if ( genero == 1) {
    if ( idade <= 20) debug_printf("o seguro a ser pago é R$2500,00 \n");
    else if ( idade <= 30) debug_printf("o seguro a ser pago é R$1800,00 \n");
    else debug_printf("o seguro a ser pago é R$1600,00 \n");
}

if ( genero == 0 && idade <= 20) {
    debug_printf("o seguro a ser pago é R$2000,00 \n");
}
else if ( genero == 1 && idade <= 20) {
    debug_printf("o seguro a ser pago é R$2500,00 \n");
}
else if ( genero == 0 && idade <= 26) {
    debug_printf("o seguro a ser pago é R$1700,00 \n");
}
else if ( genero == 1 && idade <= 30) {
    debug_printf("o seguro a ser pago é R$1800,00 \n");
}
else if ( genero == 0 && idade >= 45) {
    debug_printf("o seguro a ser pago é R$1500,00 \n");
}
else if (genero == 1 && idade >= 50) {
    debug_printf("o seguro a ser pago é R$1600,00 \n");
}
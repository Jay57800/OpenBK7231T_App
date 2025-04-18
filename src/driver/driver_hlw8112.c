void RegisterDriver_hlw8112() {
   // Code d'init ici
   ADD_DRIVERS_FUNCTION(DRIVER_INIT, hlw8112_Init, 0);
   ADD_DRIVERS_FUNCTION(DRIVER_TICK, hlw8112_Tick, 0);
}


Comment ( K type Pullman Kitchen First )

Comment ( ******************** General Information ********************
            Included in this section - Type, Shape, Size, Mass, etc
          ************************************************************* )

Mass ( 43t-uk ) Comment ( * Tare 41 t-uk * )
WheelRadius ( 21.75in )
NumWheels ( 4 )

Comment ( ************************* Coupler Information ************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
         ********************************************************************** )

Coupling (
Type ( automatic )
Spring (
Stiffness ( 1e6N/m 5e6N/m )
Break ( 750kN 750kN )
r0 ( -5cm 0cm )))

Comment ( ******************************* Brakes *******************************
          Included in this section - Type, Force, Reservoir, Application, Release. etc
          *********************************************************************** )

BrakeEquipmentType ( "Vacuum_brake, Auxilary_reservoir" )
BrakeSystemType ( "Vacuum_single_pipe" )
MaxBrakeForce( 87kN ) Comment ( * Braked approx 70% tare mass * )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
ORTSBrakeCylinderSize ( 21in )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )
Brakepipevolume ( 1.51ft^3 )
MaxReleaseRate ( 5.0 )
MaxApplicationRate ( 5.0 )
ORTSDirectAdmissionValve ( 0 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( **************** Resistance & SuperElevation ****************
               Included in this section - Wheelbase, gauge, etc
          *************************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 574 )
ORTSDavis_B ( 15.4 )
ORTSDavis_C ( 0.90 )

ORTSWagonFrontalArea ( 90ft^2 )
ORTSDavisDragConstant ( 0.0005 )

CentreOfGravity ( 0m 1.0m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 10ft 6in )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
          *********************************************************************** )

Sound ("UK-bogiecoach-11.sms")

Comment ( **************************** Wagon Heating (If used) ****************************
          Included in this section - Car Temperature set point, heating pipe dimensions, etc
          ********************************************************************************* )

ORTSHeatingCompartmentTemperatureSet ( 17 )
ORTSHeatingCompartmentPipeAreaFactor ( 2.00 )
ORTSHeatingWindowDeratingFactor ( 0.20 )
ORTSHeatingTrainPipeOuterDiameter (  2.875in  )
ORTSHeatingTrainPipeInnerDiameter ( 1.75in )
ORTSHeatingConnectingHoseOuterDiameter ( 2.05in )
ORTSHeatingConnectingHoseInnerDiameter ( 1.75in )

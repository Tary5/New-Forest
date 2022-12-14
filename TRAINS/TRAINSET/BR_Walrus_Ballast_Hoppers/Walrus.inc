
Comment ( LSWR/SR/BR 40t bogie ballast wagon 8ft bogies - Walrus - YG500C, YG500F )

Comment ( ******************** General Information **********************
              Included in this section - Type, Shape, Size, Mass, etc
       *************************************************************** )

WheelRadius ( 18.75in )
ORTSNumberAxles ( 4 )
MaxVelocity ( 50mph ) Comment ( earlier 60 mph see ReadMe )

Include ( ..\\Common_Wagons\\InstanterCoupling.inc )

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir, Handbrake )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 22kN ) Comment ( * brake force 9t, coefficient of friction 0.24 * )
MaxHandBrakeForce ( 10kN ) Comment ( * hand lever * )

ORTSNumberBrakeCylinders ( 2 )
ORTSBrakeCylinderSize ( 18in )
ORTSAuxilaryResCapacity ( 6.48ft^3 )

MaxReleaseRate ( 5.0InHg/s )
MaxApplicationRate ( 2.5InHg/s )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 21InHg )
BrakePipeVolume ( 0.87ft^3 )

ORTSBrakeShoeFriction ( 0 0.24 1 0.23 2 0.22 3 0.21 4 0.20 5 0.19 8 0.18 9 0.17 12 0.16 17 0.15 20 0.14 24 0.13  34 0.12 40 0.11  55 0.10  66 0.09 115 0.08 160 0.08 ) 
Comment ( cast iron brake - single shoe )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 0in )
ORTSRigidWheelbase ( 5ft 6in )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "genfreightwag1.sms" )

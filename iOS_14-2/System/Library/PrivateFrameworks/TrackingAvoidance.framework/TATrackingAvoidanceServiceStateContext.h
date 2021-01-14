/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TATrackingAvoidanceServiceStateContext : NSObject {

	BOOL _serviceEnabled;
	BOOL _highThermalState;
	BOOL _airplaneMode;
	BOOL _batterySaverMode;
	BOOL _locationServicesEnabled;
	BOOL _restartRequired;
	BOOL _locationSimulationInProgress;
	BOOL _allowSimulatedEvents;
	BOOL _deviceUnlockedSinceBoot;
	BOOL _hasKoreaCountryCode;
	BOOL _userLocationInsideKorea;

}

@property (assign) BOOL serviceEnabled;                            //@synthesize serviceEnabled=_serviceEnabled - In the implementation block
@property (assign) BOOL highThermalState;                          //@synthesize highThermalState=_highThermalState - In the implementation block
@property (assign) BOOL airplaneMode;                              //@synthesize airplaneMode=_airplaneMode - In the implementation block
@property (assign) BOOL batterySaverMode;                          //@synthesize batterySaverMode=_batterySaverMode - In the implementation block
@property (assign) BOOL locationServicesEnabled;                   //@synthesize locationServicesEnabled=_locationServicesEnabled - In the implementation block
@property (assign) BOOL restartRequired;                           //@synthesize restartRequired=_restartRequired - In the implementation block
@property (assign) BOOL locationSimulationInProgress;              //@synthesize locationSimulationInProgress=_locationSimulationInProgress - In the implementation block
@property (assign) BOOL allowSimulatedEvents;                      //@synthesize allowSimulatedEvents=_allowSimulatedEvents - In the implementation block
@property (assign) BOOL deviceUnlockedSinceBoot;                   //@synthesize deviceUnlockedSinceBoot=_deviceUnlockedSinceBoot - In the implementation block
@property (assign) BOOL hasKoreaCountryCode;                       //@synthesize hasKoreaCountryCode=_hasKoreaCountryCode - In the implementation block
@property (assign) BOOL userLocationInsideKorea;                   //@synthesize userLocationInsideKorea=_userLocationInsideKorea - In the implementation block
-(BOOL)airplaneMode;
-(id)init;
-(BOOL)restartRequired;
-(void)setLocationServicesEnabled:(BOOL)arg1 ;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(BOOL)deviceUnlockedSinceBoot;
-(BOOL)locationServicesEnabled;
-(void)setServiceEnabled:(BOOL)arg1 ;
-(BOOL)serviceEnabled;
-(BOOL)highThermalState;
-(void)setHighThermalState:(BOOL)arg1 ;
-(BOOL)batterySaverMode;
-(void)setBatterySaverMode:(BOOL)arg1 ;
-(void)setRestartRequired:(BOOL)arg1 ;
-(BOOL)locationSimulationInProgress;
-(void)setLocationSimulationInProgress:(BOOL)arg1 ;
-(BOOL)allowSimulatedEvents;
-(void)setAllowSimulatedEvents:(BOOL)arg1 ;
-(void)setDeviceUnlockedSinceBoot:(BOOL)arg1 ;
-(BOOL)hasKoreaCountryCode;
-(void)setHasKoreaCountryCode:(BOOL)arg1 ;
-(BOOL)userLocationInsideKorea;
-(void)setUserLocationInsideKorea:(BOOL)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Celestial/Celestial-Structs.h>
@class NSObject;

@interface FigCaptureSystemPressureMonitor : NSObject {

	/*^block*/id _systemPressureLevelChangedHandler;
	NSObject*<OS_dispatch_queue> _systemPressureLevelChangedHandlerQueue;
	int _thermalPressureNotificationToken;
	int _systemPressureLevelByThermalPressureLevel[5];
	int _currentSystemPressureFromThermalPressure;
	int _peakPowerNotificationToken;
	int _systemPressureLevelByPeakPowerLevel[5];
	int _currentSystemPressureFromPeakPower;
	SCD_Struct_Fi40 _systemPressureLevelByProjectorTemperature[5];
	int _currentSystemPressureFromProjectorTemperature;
	NSObject*<OS_dispatch_source> _pearlPollTimer;
	SCD_Struct_BW2 _pollingTimerStopTime;

}

@property (copy) id systemPressureLevelChangedHandler; 
@property (readonly) int systemPressureLevelFromPearlProjector; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)_registerForThermalNotifications;
-(void)_registerForPeakPowerNotifications;
-(void)_releasePearlProjectorPollingResources;
-(void)_updateSystemPressureForThermalPressureAndCallChangeHandler:(BOOL)arg1 ;
-(void)_updateSystemPressureForPeakPowerAndCallChangeHandler:(BOOL)arg1 ;
-(void)_callChangeHandler;
-(void)_updateWithPearlProjectorTemperature:(float)arg1 ;
-(id)systemPressureLevelChangedHandler;
-(void)setSystemPressureLevelChangedHandler:(id)arg1 ;
-(void)callSystemPressureLevelChangedHandler;
-(int)systemPressureLevelFromPearlProjector;
-(void)updateWithPearlProjectorTemperature:(float)arg1 ;
-(void)startMonitoringPearlProjectorTemperatureUntilNominal;
@end


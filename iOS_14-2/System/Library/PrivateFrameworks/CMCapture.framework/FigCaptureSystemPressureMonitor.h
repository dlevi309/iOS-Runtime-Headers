/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CMCapture/CMCapture-Structs.h>
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
	SCD_Struct_BW52 _systemPressureLevelByProjectorTemperature[5];
	int _currentSystemPressureFromProjectorTemperature;
	NSObject*<OS_dispatch_source> _pearlPollTimer;
	SCD_Struct_BW8 _pollingTimerStopTime;

}

@property (copy) id systemPressureLevelChangedHandler; 
@property (readonly) int systemPressureLevelFromPearlProjector; 
+(void)initialize;
-(int)systemPressureLevelFromPearlProjector;
-(id)init;
-(void)_callChangeHandler;
-(void)_registerForThermalNotifications;
-(void)startMonitoringPearlProjectorTemperatureUntilNominal;
-(void)_updateSystemPressureForThermalPressureAndCallChangeHandler:(BOOL)arg1 ;
-(id)systemPressureLevelChangedHandler;
-(void)updateWithPearlProjectorTemperature:(float)arg1 ;
-(void)_registerForPeakPowerNotifications;
-(void)_updateSystemPressureForPeakPowerAndCallChangeHandler:(BOOL)arg1 ;
-(void)_updateWithPearlProjectorTemperature:(float)arg1 ;
-(void)callSystemPressureLevelChangedHandler;
-(void)setSystemPressureLevelChangedHandler:(id)arg1 ;
-(void)_releasePearlProjectorPollingResources;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, NSObject, FigCaptureAutoFocusPositionSensorCalibrationContext, FigCaptureAutoFocusCalibrationContext, FigCaptureAPSSphereInteractionCalibrationContext, FigCaptureSphereCalibrationContext, FigCaptureSphereEndStopCalibrationContext;

@interface FigCaptureCalibrationMonitor : NSObject {

	NSMutableArray* _streamCalibrationInformation;
	NSObject*<OS_dispatch_queue> _calibrationRunQueue;
	OpaqueFigSimpleMutexRef _calibrationPipelineMutex;
	BOOL _calibrationShouldAbort;
	os_unfair_lock_s _calibrationLock;
	SCD_Struct_Fi98 _coreMotionMagneticField;
	double _coreMotionMagneticFieldMagnitude;
	int _magneticFieldAttempt;
	int _magneticFieldAccuracyAttemptCount;
	SCD_Struct_Fi99 _magneticFieldMagnitudeTiers[1];
	FigCaptureAutoFocusPositionSensorCalibrationContext* _autoFocusPositionSensorCalibrationContext;
	FigCaptureAutoFocusCalibrationContext* _autoFocusCalibrationContext;
	FigCaptureAPSSphereInteractionCalibrationContext* _apsSphereInteractionCalibrationContext;
	FigCaptureSphereCalibrationContext* _sphereCalibrationContext;
	FigCaptureSphereEndStopCalibrationContext* _sphereEndStopCalibrationContext;

}
+(void)initialize;
+(id)sharedInstance;
+(void)initializeSharedInstance;
-(id)init;
-(void)_setupDuetTriggersAndScheduling;
-(void)_attemptToRunCalibrationForCalibrationContext:(id)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 disableHistoryChecking:(BOOL)arg4 resultsBlock:(/*^block*/id)arg5 ;
-(id)_createDefaultXPCSchedulingParametersWithInterval:(int)arg1 batteryLevel:(int)arg2 ;
-(void)_setupCalibrationForContext:(id)arg1 ;
-(void)_setupActivityAndTriggers:(const char*)arg1 interval:(int)arg2 batteryLevel:(int)arg3 calibrationBlock:(/*^block*/id)arg4 isRepeating:(BOOL)arg5 ;
-(void)_setCalibrationShouldAbort:(BOOL)arg1 ;
-(void)_notifyOfDeviceMotion;
-(double)_getMagneticThresholdFromAttempt;
-(id)_runAndCreateDictionaryForCalibrationContext:(id)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 errors:(unsigned*)arg4 ;
-(BOOL)_calibrationShouldAbort;
-(void)_setupRepeatingCalibrationScheduling:(id)arg1 withCalibrationBlock:(/*^block*/id)arg2 ;
-(id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)arg1 devicePosition:(int)arg2 ;
-(id)autoFocusPositionSensorCalibrationData;
-(id)autoFocusCalibrationData;
-(id)apsSphereInteractionCalibrationData;
-(id)sphereCalibrationData;
-(id)sphereEndStopCalibrationData;
@end


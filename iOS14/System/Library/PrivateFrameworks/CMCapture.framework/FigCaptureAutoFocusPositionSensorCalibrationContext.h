/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureCalibrationContext.h>

@class NSMutableDictionary, NSMutableArray;

@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext {

	BOOL _shouldDeleteOldVersion;
	NSMutableDictionary* _iStopZEstimateDeltaHistory;
	double _previousAngleDelta;
	double _currentAngleDelta;
	NSMutableArray* _calibrationDataHistoryQueue;
	int _maxHistoryBuffer;
	BOOL _lastSuccessfulCalibrationWasDiscarded;
	BOOL _disableHistoryChecking;
	BOOL _supportsHistoryChecking;
	int _maxIStopZEstimateDifference;
	int _minCompassHeadingChange;

}

@property (assign,nonatomic) BOOL disableHistoryChecking;              //@synthesize disableHistoryChecking=_disableHistoryChecking - In the implementation block
+(void)initialize;
+(void)printDebugInfoForRawStreamCalibrationData:(id)arg1 ;
+(unsigned)calibrationStatusFromRawStreamCalibrationData:(id)arg1 ;
+(id)calibrationDataStringForInternalLogging:(id)arg1 ;
+(id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1 ;
+(void)setStatusForCalibrationData:(id)arg1 status:(int)arg2 ;
-(id)calibrationDataHistory;
-(id)_initForUnitTestsSupportsHistoryChecking:(BOOL)arg1 ;
-(int)passingIStopZEstimateDeltaForPosition:(id)arg1 ;
-(int)previousIStopZEstimateDeltaForPosition:(id)arg1 ;
-(int)currentIStopZEstimateDeltaForPosition:(id)arg1 ;
-(double)previousAngleDelta;
-(BOOL)disableHistoryChecking;
-(void)setDisableHistoryChecking:(BOOL)arg1 ;
-(void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(BOOL)arg2 magneticFieldMagnitude:(double)arg3 ;
-(id)initWithSupportedDeviceNames:(id)arg1 ;
-(double)currentAngleDelta;
-(void)setLastSuccessfulCalibrationData:(id)arg1 ;
-(BOOL)_shouldRejectCalibrationData:(id)arg1 ;
-(void)_pushToCalibrationHistoryQueue:(id)arg1 ;
-(void)_updateIStopZEstimateDelta:(id)arg1 ;
-(void)_ensureIStopZEstimateDeltasForKey:(id)arg1 ;
-(BOOL)_calibrationDataIsWithinIStopZEstimateLimits:(id)arg1 basedOnCalibrationHistory:(id)arg2 ;
-(BOOL)_calibrationDataCompassHeadingHasMovedPastMinimum:(id)arg1 basedOnCalibrationHistory:(id)arg2 ;
-(void)pushCalibrationDataToHistory:(id)arg1 isRejected:(BOOL*)arg2 ;
@end


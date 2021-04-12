/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCaptureCalibrationContext.h>

@interface FigCaptureSphereEndStopCalibrationContext : FigCaptureCalibrationContext
+(void)initialize;
+(void)printDebugInfoForRawStreamCalibrationData:(id)arg1 ;
+(unsigned)calibrationStatusFromRawStreamCalibrationData:(id)arg1 ;
+(id)calibrationDataStringForInternalLogging:(id)arg1 ;
+(id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1 ;
-(void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(BOOL)arg2 magneticFieldMagnitude:(double)arg3 ;
-(id)initWithSupportedDeviceNames:(id)arg1 ;
@end


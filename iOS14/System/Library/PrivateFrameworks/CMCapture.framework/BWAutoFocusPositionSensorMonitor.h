/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, FigCaptureDisplayLayoutMonitor;

@interface BWAutoFocusPositionSensorMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _apsMonitorQueue;
	FigCaptureDisplayLayoutMonitor* _displayLayoutMonitor;

}
+(void)initialize;
+(void)logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
+(id)sharedInstance;
+(void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
+(void)clientHasBeenBackgrounded;
+(void)logStillImageAPSStatistics:(id)arg1 ;
-(void)logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(void)_processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(void)_reportStillImageAPSStatisticsToAggd:(id)arg1 ;
-(void)_logStillImageAPSStatistics:(id)arg1 ;
-(void)_reportVideoRecordingAPSStatisticsToAggd:(BWAPSStatistics*)arg1 ;
-(void)_logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(void)_postMagneticDetectionUserNotification;
-(void)_reportAPSOffsetEstimatorInfoToAggdAndCoreAnalytics:(id)arg1 portType:(id)arg2 ;
-(void)_logAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(id)_getLogFileHandle;
-(void)_appendApsMotionData:(id)arg1 sphereMotionData:(id)arg2 toDataString:(id)arg3 ;
-(void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(id)init;
-(void)clientHasBeenBackgrounded;
-(void)logStillImageAPSStatistics:(id)arg1 ;
-(void)dealloc;
@end


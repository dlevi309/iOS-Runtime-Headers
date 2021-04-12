/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject, FigCaptureDisplayLayoutMonitor;

@interface BWAutoFocusPositionSensorMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _apsMonitorQueue;
	FigCaptureDisplayLayoutMonitor* _displayLayoutMonitor;

}
+(void)initialize;
+(id)sharedInstance;
+(void)clientHasBeenBackgrounded;
+(void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
+(void)logStillImageAPSStatistics:(id)arg1 ;
+(void)logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)clientHasBeenBackgrounded;
-(void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(void)logStillImageAPSStatistics:(id)arg1 ;
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
@end


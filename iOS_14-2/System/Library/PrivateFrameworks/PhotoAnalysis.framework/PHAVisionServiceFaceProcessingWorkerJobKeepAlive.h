/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol OS_dispatch_queue;
@class NSObject, PHAWorkerJob;

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PHAWorkerJob* _job;
	BOOL _continueReporting;

}
-(void)start;
-(id)job;
-(void)stop;
-(id)initWithJob:(id)arg1 ;
-(void)_extendTimeoutAndDispatchAgainIfNecessary;
@end


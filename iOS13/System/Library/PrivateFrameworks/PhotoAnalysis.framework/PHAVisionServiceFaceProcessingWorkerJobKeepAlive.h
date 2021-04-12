/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol OS_dispatch_queue;
@class NSObject, PHAWorkerJob;

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PHAWorkerJob* _job;
	BOOL _continueReporting;

}
-(void)stop;
-(void)start;
-(id)initWithJob:(id)arg1 ;
-(id)job;
-(void)_extendTimeoutAndDispatchAgainIfNecessary;
@end

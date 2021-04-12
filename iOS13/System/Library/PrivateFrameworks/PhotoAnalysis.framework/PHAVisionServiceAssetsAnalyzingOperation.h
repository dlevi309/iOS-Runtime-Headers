/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <Foundation/NSOperation.h>

@protocol PHAVisionServiceAssetsAnalyzingOperationDelegate, OS_dispatch_semaphore;
@class PHAVisionServiceWorker, PHAAnalysisWorkerJob, NSObject;

@interface PHAVisionServiceAssetsAnalyzingOperation : NSOperation {

	PHAVisionServiceWorker* _visionServiceWorker;
	PHAAnalysisWorkerJob* _job;
	id<PHAVisionServiceAssetsAnalyzingOperationDelegate> _delegate;
	NSObject*<OS_dispatch_semaphore> _executionCompletionSemaphore;
	int _state;

}
+(id)operationForVisionServiceWorker:(id)arg1 job:(id)arg2 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)main;
-(id)job;
-(id)initWithVisionServiceWorker:(id)arg1 job:(id)arg2 ;
-(id)visionServiceWorker;
-(void)cancelAndWaitForCompletion;
@end


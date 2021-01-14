/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)job;
-(void)setDelegate:(id)arg1 ;
-(void)main;
-(id)initWithVisionServiceWorker:(id)arg1 job:(id)arg2 ;
-(id)visionServiceWorker;
-(void)cancelAndWaitForCompletion;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWInferenceSchedulerJobList, BWInferenceSchedulerGraph;

@interface BWInferenceSchedulerFramebuffer : NSObject {

	os_unfair_lock_s framebufferLock;
	Ai failedJobStatus;
	BWInferenceSchedulerJobList* _jobs;
	BWInferenceSchedulerGraph* _graph;

}

@property (nonatomic,readonly) BWInferenceSchedulerJobList * jobs;              //@synthesize jobs=_jobs - In the implementation block
@property (nonatomic,readonly) BWInferenceSchedulerGraph * graph;               //@synthesize graph=_graph - In the implementation block
-(BWInferenceSchedulerJobList *)jobs;
-(BWInferenceSchedulerGraph *)graph;
-(void)resetJobStatesWithPreventionBlock:(/*^block*/id)arg1 ;
-(id)initWithGraph:(id)arg1 jobList:(id)arg2 ;
-(void)dealloc;
@end


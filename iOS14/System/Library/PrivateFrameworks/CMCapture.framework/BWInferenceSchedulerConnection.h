/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class BWInferenceSchedulerResourceCoordinator, BWInferenceSchedulerFramebuffer, NSObject;

@interface BWInferenceSchedulerConnection : NSObject {

	unsigned long long _identifier;
	BWInferenceSchedulerResourceCoordinator* _coordinator;
	BWInferenceSchedulerFramebuffer* _framebuffer;
	NSObject*<OS_dispatch_queue> _inferenceQueue;
	NSObject*<OS_dispatch_queue> _scalingQueue;
	NSObject*<OS_dispatch_queue> _submissionQueue;
	NSObject*<OS_dispatch_group> _coordinationGroup;

}

@property (nonatomic,readonly) unsigned long long identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> inferenceQueue;                        //@synthesize inferenceQueue=_inferenceQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> scalingQueue;                          //@synthesize scalingQueue=_scalingQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> submissionQueue;                       //@synthesize submissionQueue=_submissionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> coordinationGroup;                     //@synthesize coordinationGroup=_coordinationGroup - In the implementation block
@property (nonatomic,readonly) BWInferenceSchedulerResourceCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) BWInferenceSchedulerFramebuffer * framebuffer;                        //@synthesize framebuffer=_framebuffer - In the implementation block
-(id)init;
-(void)setFramebuffer:(BWInferenceSchedulerFramebuffer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)inferenceQueue;
-(id)initWithInferenceTargetQueue:(id)arg1 scalingTargetQueue:(id)arg2 submissionTargetQueue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)scalingQueue;
-(NSObject*<OS_dispatch_group>)coordinationGroup;
-(NSObject*<OS_dispatch_queue>)submissionQueue;
-(unsigned long long)identifier;
-(BWInferenceSchedulerFramebuffer *)framebuffer;
-(void)dealloc;
-(BWInferenceSchedulerResourceCoordinator *)coordinator;
@end


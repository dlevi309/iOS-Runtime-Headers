/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@protocol WFWorkflowRunnerClientDelegate;
@class WFWorkflowRunRequest, WFWorkflowRunningContext;

@interface WFWorkflowRunnerClient : NSObject {

	id<WFWorkflowRunnerClientDelegate> _delegate;
	WFWorkflowRunRequest* _runRequest;
	WFWorkflowRunningContext* _context;
	id _progressSubscriber;

}

@property (nonatomic,readonly) WFWorkflowRunRequest * runRequest;                             //@synthesize runRequest=_runRequest - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id progressSubscriber;                                           //@synthesize progressSubscriber=_progressSubscriber - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowRunnerClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFWorkflowRunnerClientDelegate>)delegate;
-(void)start;
-(WFWorkflowRunningContext *)context;
-(void)stop;
-(void)setDelegate:(id<WFWorkflowRunnerClientDelegate>)arg1 ;
-(WFWorkflowRunRequest *)runRequest;
-(id)progressSubscriber;
-(void)setProgressSubscriber:(id)arg1 ;
-(id)initWithRunRequest:(id)arg1 ;
-(void)stopObservingRunProgress;
-(void)beginObservingProgressForWorkflowWithRunningContext:(id)arg1 ;
-(void)setContext:(WFWorkflowRunningContext *)arg1 ;
@end


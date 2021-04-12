/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/WFWorkflowRunCoordinatorObserver.h>

@protocol VCDatabaseProvider, VCTriggerEventRunnerDelegate;
@class WFWorkflowRunEvent, WFConfiguredTrigger, WFWorkflowRunningContext, WFWorkflowRunCoordinator, NSString;

@interface VCTriggerEventRunner : NSObject <WFWorkflowRunCoordinatorObserver> {

	id<VCDatabaseProvider> _databaseProvider;
	id<VCTriggerEventRunnerDelegate> _delegate;
	WFWorkflowRunEvent* _inProgressRunEvent;
	WFConfiguredTrigger* _inProgressTrigger;
	WFWorkflowRunningContext* _inProgressRunningContext;
	WFWorkflowRunCoordinator* _runCoordinator;

}

@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                        //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) id<VCTriggerEventRunnerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFWorkflowRunEvent * inProgressRunEvent;                          //@synthesize inProgressRunEvent=_inProgressRunEvent - In the implementation block
@property (nonatomic,retain) WFConfiguredTrigger * inProgressTrigger;                          //@synthesize inProgressTrigger=_inProgressTrigger - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * inProgressRunningContext;              //@synthesize inProgressRunningContext=_inProgressRunningContext - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunCoordinator * runCoordinator;                      //@synthesize runCoordinator=_runCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VCTriggerEventRunnerDelegate>)delegate;
-(void)runCoordinator:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 runningContext:(id)arg3 cancelled:(BOOL)arg4 ;
-(void)setInProgressRunEvent:(WFWorkflowRunEvent *)arg1 ;
-(BOOL)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3 ;
-(WFWorkflowRunEvent *)inProgressRunEvent;
-(id<VCDatabaseProvider>)databaseProvider;
-(id)initWithDatabaseProvider:(id)arg1 delegate:(id)arg2 runCoordinator:(id)arg3 ;
-(void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 ;
-(WFWorkflowRunCoordinator *)runCoordinator;
-(void)setInProgressRunningContext:(WFWorkflowRunningContext *)arg1 ;
-(WFWorkflowRunningContext *)inProgressRunningContext;
-(void)setInProgressTrigger:(WFConfiguredTrigger *)arg1 ;
-(BOOL)isRunningWorkflowWithIdentifier:(id)arg1 ;
-(WFConfiguredTrigger *)inProgressTrigger;
@end


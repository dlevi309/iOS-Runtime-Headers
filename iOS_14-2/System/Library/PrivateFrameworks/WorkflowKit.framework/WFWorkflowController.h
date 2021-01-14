/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFRemoteQuarantinePolicyEvaluatorDelegate.h>
#import <libobjc.A.dylib/WFVariableDataSource.h>
#import <libobjc.A.dylib/WFActionParameterInputProvider.h>

@protocol WFWorkflowControllerDelegate, OS_dispatch_queue;
@class WFWorkflow, WFContentCollection, NSProgress, WFWorkflowRunningContext, NSString, NSDictionary, NSObject, NSMapTable, WFWorkflowControllerState, WFRemoteQuarantinePolicyEvaluator, RBSAssertion, WFOutOfProcessWorkflowController, WFAction;

@interface WFWorkflowController : NSObject <WFRemoteQuarantinePolicyEvaluatorDelegate, WFVariableDataSource, WFActionParameterInputProvider> {

	WFWorkflowController* _strongSelf;
	BOOL _donateInteraction;
	BOOL _isAutomationSuggestion;
	BOOL _acquiresAssertionWhileRunning;
	BOOL _running;
	BOOL _stepping;
	BOOL _resumed;
	BOOL _actionDidRunRemotely;
	WFWorkflow* _workflow;
	WFContentCollection* _input;
	WFContentCollection* _output;
	id<WFWorkflowControllerDelegate> _delegate;
	NSProgress* _progress;
	WFWorkflowRunningContext* _runningContext;
	NSString* _runSource;
	NSString* _automationType;
	NSString* _automationTrialID;
	NSDictionary* _listenerEndpoints;
	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	unsigned long long _currentIndex;
	NSMapTable* _variableTable;
	WFWorkflowControllerState* _pendingState;
	NSDictionary* _pendingProcessedParameters;
	WFContentCollection* _pendingActionInput;
	WFRemoteQuarantinePolicyEvaluator* _policyEvaluator;
	RBSAssertion* _workflowRunAssertion;
	WFOutOfProcessWorkflowController* _outOfProcessController;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> executionQueue;                          //@synthesize executionQueue=_executionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                           //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                                        //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                                          //@synthesize running=_running - In the implementation block
@property (assign,getter=isStepping,nonatomic) BOOL stepping;                                        //@synthesize stepping=_stepping - In the implementation block
@property (assign,nonatomic) BOOL resumed;                                                           //@synthesize resumed=_resumed - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) WFContentCollection * output;                                           //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) NSMapTable * variableTable;                                             //@synthesize variableTable=_variableTable - In the implementation block
@property (nonatomic,retain) WFWorkflowControllerState * pendingState;                               //@synthesize pendingState=_pendingState - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingProcessedParameters;                              //@synthesize pendingProcessedParameters=_pendingProcessedParameters - In the implementation block
@property (nonatomic,retain) WFContentCollection * pendingActionInput;                               //@synthesize pendingActionInput=_pendingActionInput - In the implementation block
@property (nonatomic,retain) WFRemoteQuarantinePolicyEvaluator * policyEvaluator;                    //@synthesize policyEvaluator=_policyEvaluator - In the implementation block
@property (nonatomic,retain) RBSAssertion * workflowRunAssertion;                                    //@synthesize workflowRunAssertion=_workflowRunAssertion - In the implementation block
@property (nonatomic,retain) WFOutOfProcessWorkflowController * outOfProcessController;              //@synthesize outOfProcessController=_outOfProcessController - In the implementation block
@property (nonatomic,readonly) WFAction * currentAction; 
@property (assign,nonatomic) BOOL actionDidRunRemotely;                                              //@synthesize actionDidRunRemotely=_actionDidRunRemotely - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                                  //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFContentCollection * input;                                            //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) BOOL donateInteraction;                                                 //@synthesize donateInteraction=_donateInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFWorkflowControllerState * currentState; 
@property (nonatomic,retain) WFWorkflowRunningContext * runningContext;                              //@synthesize runningContext=_runningContext - In the implementation block
@property (nonatomic,copy) NSString * runSource;                                                     //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,copy) NSString * automationType;                                                //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) BOOL isAutomationSuggestion;                                            //@synthesize isAutomationSuggestion=_isAutomationSuggestion - In the implementation block
@property (nonatomic,copy) NSString * automationTrialID;                                             //@synthesize automationTrialID=_automationTrialID - In the implementation block
@property (nonatomic,copy) NSDictionary * listenerEndpoints;                                         //@synthesize listenerEndpoints=_listenerEndpoints - In the implementation block
@property (assign,nonatomic) BOOL acquiresAssertionWhileRunning;                                     //@synthesize acquiresAssertionWhileRunning=_acquiresAssertionWhileRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(unsigned long long)currentIndex;
-(void)setCurrentState:(WFWorkflowControllerState *)arg1 ;
-(void)_run;
-(void)setRunning:(BOOL)arg1 ;
-(void)run;
-(NSProgress *)progress;
-(id)init;
-(WFContentCollection *)input;
-(WFWorkflowControllerState *)currentState;
-(id<WFWorkflowControllerDelegate>)delegate;
-(void)_step;
-(WFContentCollection *)output;
-(WFRemoteQuarantinePolicyEvaluator *)policyEvaluator;
-(void)setInput:(WFContentCollection *)arg1 ;
-(void)stop;
-(void)stopWithError:(id)arg1 ;
-(void)setDelegate:(id<WFWorkflowControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(BOOL)resumed;
-(BOOL)canRun;
-(void)setUpProgress;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setOutput:(WFContentCollection *)arg1 ;
-(BOOL)isRunning;
-(void)reset;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(NSString *)runSource;
-(void)setResumed:(BOOL)arg1 ;
-(WFAction *)currentAction;
-(void)setRunSource:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(BOOL)isAutomationSuggestion;
-(NSDictionary *)listenerEndpoints;
-(void)setIsAutomationSuggestion:(BOOL)arg1 ;
-(void)setListenerEndpoints:(NSDictionary *)arg1 ;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)dealloc;
-(BOOL)donateInteraction;
-(WFWorkflowRunningContext *)runningContext;
-(void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)action:(id)arg1 canProvideInputForParameter:(id)arg2 ;
-(BOOL)setContent:(id)arg1 forVariableWithName:(id)arg2 ;
-(id)contentForVariableWithName:(id)arg1 ;
-(id)workflowInput;
-(id)listenerEndpointWithIdentifier:(id)arg1 ;
-(id)userInterfaceToPresentAlertForEvaluator:(id)arg1 ;
-(void)queue_setWorkflow:(id)arg1 ;
-(id)stateWithActionIndex:(unsigned long long)arg1 input:(id)arg2 processedParameters:(id)arg3 ;
-(void)publishRunningState:(long long)arg1 ;
-(void)_finishStepWithError:(id)arg1 ;
-(void)queue_stopWithError:(id)arg1 ;
-(void)setFinishedRunningWithSuccess:(BOOL)arg1 ;
-(void)queue_reset;
-(void)evaluateRemoteQuarantinePolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMapTable *)variableTable;
-(void)retainSelf;
-(void)autoreleaseSelf;
-(void)acquireAssertionIfNeeded;
-(void)invalidateAssertionIfNeeded;
-(void)logStartEvent;
-(void)logFinishRunEvent:(BOOL)arg1 ;
-(void)trackRunShortcutEventWithKey:(id)arg1 completed:(BOOL)arg2 ;
-(void)logStartActionEventWithAction:(id)arg1 ;
-(void)logFinishActionEventWithAction:(id)arg1 completed:(BOOL)arg2 ;
-(void)trackRunActionEventWithKey:(id)arg1 action:(id)arg2 completed:(BOOL)arg3 ;
-(void)didFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)prepareToRunAction:(id)arg1 withInput:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)runAction:(id)arg1 withInput:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)didRunAction:(id)arg1 ;
-(id)parameterInputProviderForAction:(id)arg1 ;
-(id)userInterfaceForAction:(id)arg1 ;
-(void)handleError:(id)arg1 fromAction:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleActionCompletion:(id)arg1 actionGroupSkipped:(BOOL)arg2 ;
-(void)restorePendingStateIfNecessary;
-(void)setUpRunState;
-(void)resetEvaluationCriteriaForControlFlowActions;
-(void)quarantineWorkflow;
-(id)errorByAddingActionIndex:(long long)arg1 toError:(id)arg2 ;
-(void)setDonateInteraction:(BOOL)arg1 ;
-(void)setRunningContext:(WFWorkflowRunningContext *)arg1 ;
-(NSString *)automationTrialID;
-(void)setAutomationTrialID:(NSString *)arg1 ;
-(BOOL)acquiresAssertionWhileRunning;
-(void)setAcquiresAssertionWhileRunning:(BOOL)arg1 ;
-(BOOL)isStepping;
-(void)setStepping:(BOOL)arg1 ;
-(void)setVariableTable:(NSMapTable *)arg1 ;
-(WFWorkflowControllerState *)pendingState;
-(void)setPendingState:(WFWorkflowControllerState *)arg1 ;
-(NSDictionary *)pendingProcessedParameters;
-(void)setPendingProcessedParameters:(NSDictionary *)arg1 ;
-(WFContentCollection *)pendingActionInput;
-(void)setPendingActionInput:(WFContentCollection *)arg1 ;
-(void)setPolicyEvaluator:(WFRemoteQuarantinePolicyEvaluator *)arg1 ;
-(RBSAssertion *)workflowRunAssertion;
-(void)setWorkflowRunAssertion:(RBSAssertion *)arg1 ;
-(WFOutOfProcessWorkflowController *)outOfProcessController;
-(void)setOutOfProcessController:(WFOutOfProcessWorkflowController *)arg1 ;
-(BOOL)actionDidRunRemotely;
-(void)setActionDidRunRemotely:(BOOL)arg1 ;
@end


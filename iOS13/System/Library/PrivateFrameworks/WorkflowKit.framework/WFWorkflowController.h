/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFRemoteQuarantinePolicyEvaluatorDelegate.h>
#import <libobjc.A.dylib/WFVariableDataSource.h>
#import <libobjc.A.dylib/WFActionParameterInputProvider.h>

@protocol WFWorkflowControllerDelegate;
@class WFWorkflow, WFContentCollection, NSProgress, NSString, NSMapTable, WFWorkflowControllerState, NSDictionary;

@interface WFWorkflowController : NSObject <WFRemoteQuarantinePolicyEvaluatorDelegate, WFVariableDataSource, WFActionParameterInputProvider> {

	WFWorkflowController* _strongSelf;
	BOOL _donateInteraction;
	BOOL _paused;
	BOOL _running;
	BOOL _stepping;
	WFWorkflow* _workflow;
	WFContentCollection* _input;
	WFContentCollection* _output;
	id<WFWorkflowControllerDelegate> _delegate;
	NSProgress* _progress;
	NSString* _runSource;
	NSString* _automationType;
	unsigned long long _currentIndex;
	NSMapTable* _variableTable;
	WFWorkflowControllerState* _pendingState;
	NSDictionary* _pendingProcessedParameters;

}

@property (assign,nonatomic) unsigned long long currentIndex;                               //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                                 //@synthesize running=_running - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                   //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isStepping,nonatomic) BOOL stepping;                               //@synthesize stepping=_stepping - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) WFContentCollection * output;                                  //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) NSMapTable * variableTable;                                    //@synthesize variableTable=_variableTable - In the implementation block
@property (nonatomic,retain) WFWorkflowControllerState * pendingState;                      //@synthesize pendingState=_pendingState - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingProcessedParameters;                     //@synthesize pendingProcessedParameters=_pendingProcessedParameters - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                         //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFContentCollection * input;                                   //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) BOOL donateInteraction;                                        //@synthesize donateInteraction=_donateInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFWorkflowControllerState * currentState; 
@property (nonatomic,copy) NSString * runSource;                                            //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,copy) NSString * automationType;                                       //@synthesize automationType=_automationType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)run;
-(id<WFWorkflowControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowControllerDelegate>)arg1 ;
-(void)stop;
-(NSProgress *)progress;
-(BOOL)isRunning;
-(void)reset;
-(WFContentCollection *)input;
-(BOOL)isPaused;
-(WFWorkflowControllerState *)currentState;
-(void)setInput:(WFContentCollection *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)currentAction;
-(void)setCurrentState:(WFWorkflowControllerState *)arg1 ;
-(unsigned long long)currentIndex;
-(void)setRunning:(BOOL)arg1 ;
-(WFContentCollection *)output;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)setOutput:(WFContentCollection *)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(id)contentForVariableWithName:(id)arg1 ;
-(BOOL)setContent:(id)arg1 forVariableWithName:(id)arg2 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
-(void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)action:(id)arg1 canProvideInputForParameter:(id)arg2 ;
-(id)workflowInput;
-(id)userInterfaceToPresentAlertForEvaluator:(id)arg1 ;
-(id)stateWithActionIndex:(unsigned long long)arg1 input:(id)arg2 processedParameters:(id)arg3 ;
-(void)_stepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFinishedRunningWithSuccess:(BOOL)arg1 ;
-(void)evaluateRemoteQuarantinePolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMapTable *)variableTable;
-(void)retainSelf;
-(void)autoreleaseSelf;
-(void)logRunEvent:(BOOL)arg1 ;
-(void)logStartEvent;
-(id)parameterInputProviderForAction:(id)arg1 ;
-(id)userInterfaceForAction:(id)arg1 ;
-(BOOL)donateInteraction;
-(void)setDonateInteraction:(BOOL)arg1 ;
-(BOOL)isStepping;
-(void)setStepping:(BOOL)arg1 ;
-(void)setVariableTable:(NSMapTable *)arg1 ;
-(WFWorkflowControllerState *)pendingState;
-(void)setPendingState:(WFWorkflowControllerState *)arg1 ;
-(NSDictionary *)pendingProcessedParameters;
-(void)setPendingProcessedParameters:(NSDictionary *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFParameterInputViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionParameterInputProvider.h>
#import <libobjc.A.dylib/WFWorkflowControllerDelegate.h>

@protocol WFLibraryRunCoordinatorDelegate;
@class WFWorkflowController, NSString, WFDatabase, NSHashTable, WFWorkflowReference, WFAction, WFParameterInputViewController, WFWorkflowRunEvent;

@interface WFLibraryRunCoordinator : NSObject <WFParameterInputViewControllerDelegate, WFActionParameterInputProvider, WFWorkflowControllerDelegate> {

	BOOL _handingOff;
	WFWorkflowController* _workflowController;
	id<WFLibraryRunCoordinatorDelegate> _delegate;
	NSString* _source;
	WFDatabase* _database;
	NSHashTable* _observers;
	WFWorkflowReference* _loadingWorkflow;
	WFAction* _currentlyRunningAction;
	/*^block*/id _parameterInputHandler;
	/*^block*/id _completionHandler;
	WFParameterInputViewController* _runningInputViewController;
	id<WFLibraryRunCoordinatorDelegate> _delegateOverride;
	WFWorkflowRunEvent* _runEvent;

}

@property (nonatomic,copy,readonly) NSString * source;                                                        //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) WFWorkflowController * workflowController;                                     //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                                                         //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) WFWorkflowReference * loadingWorkflow;                                           //@synthesize loadingWorkflow=_loadingWorkflow - In the implementation block
@property (nonatomic,retain) WFAction * currentlyRunningAction;                                               //@synthesize currentlyRunningAction=_currentlyRunningAction - In the implementation block
@property (nonatomic,copy) id parameterInputHandler;                                                          //@synthesize parameterInputHandler=_parameterInputHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) WFParameterInputViewController * runningInputViewController;              //@synthesize runningInputViewController=_runningInputViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFLibraryRunCoordinatorDelegate> delegateOverride;                     //@synthesize delegateOverride=_delegateOverride - In the implementation block
@property (nonatomic,retain) WFWorkflowRunEvent * runEvent;                                                   //@synthesize runEvent=_runEvent - In the implementation block
@property (assign,nonatomic) BOOL handingOff;                                                                 //@synthesize handingOff=_handingOff - In the implementation block
@property (assign,nonatomic,__weak) id<WFLibraryRunCoordinatorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) WFWorkflowReference * runningWorkflow; 
@property (nonatomic,readonly) id<WFLibraryRunCoordinatorDelegate> currentDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFLibraryRunCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<WFLibraryRunCoordinatorDelegate>)arg1 ;
-(NSString *)source;
-(void)stop;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(float)progress;
-(WFDatabase *)database;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)view;
-(NSHashTable *)observers;
-(id<WFLibraryRunCoordinatorDelegate>)delegateOverride;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(void)workflowController:(id)arg1 actionDidRequestWorkflowExit:(id)arg2 ;
-(BOOL)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2 ;
-(id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2 ;
-(void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)action:(id)arg1 canProvideInputForParameter:(id)arg2 ;
-(WFWorkflowController *)workflowController;
-(void)parameterInputViewControllerDidCancel:(id)arg1 ;
-(void)parameterInputViewControllerDidFinish:(id)arg1 withParameterStates:(id)arg2 ;
-(id)initWithSource:(id)arg1 database:(id)arg2 ;
-(id)initWithWorkflowController:(id)arg1 database:(id)arg2 source:(id)arg3 ;
-(void)startedLoadingInputForWorkflow:(id)arg1 ;
-(void)clearDelegateOverride;
-(void)resumeWorkflow:(id)arg1 fromSource:(id)arg2 withState:(id)arg3 ;
-(void)runWorkflowReference:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)runWorkflow:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)openWorkflowAndRun:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 delegate:(id)arg4 state:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)runWorkflow:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 delegate:(id)arg4 state:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)handOffWithState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handOffWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFWorkflowReference *)runningWorkflow;
-(void)didFinishRunningWorkflow:(id)arg1 withError:(id)arg2 ;
-(void)updateProgress:(double)arg1 forWorkflow:(id)arg2 ;
-(id<WFLibraryRunCoordinatorDelegate>)currentDelegate;
-(void)accessibilityAnnounce:(id)arg1 ;
-(WFWorkflowReference *)loadingWorkflow;
-(void)setLoadingWorkflow:(WFWorkflowReference *)arg1 ;
-(WFAction *)currentlyRunningAction;
-(void)setCurrentlyRunningAction:(WFAction *)arg1 ;
-(id)parameterInputHandler;
-(void)setParameterInputHandler:(id)arg1 ;
-(WFParameterInputViewController *)runningInputViewController;
-(void)setRunningInputViewController:(WFParameterInputViewController *)arg1 ;
-(void)setDelegateOverride:(id<WFLibraryRunCoordinatorDelegate>)arg1 ;
-(WFWorkflowRunEvent *)runEvent;
-(void)setRunEvent:(WFWorkflowRunEvent *)arg1 ;
-(BOOL)handingOff;
-(void)setHandingOff:(BOOL)arg1 ;
@end


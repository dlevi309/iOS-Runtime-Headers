/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFModuleModelProvider.h>
#import <libobjc.A.dylib/WFWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/WFParameterInputViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionParameterInputProvider.h>
#import <libobjc.A.dylib/WFModulesSupplementaryViewDataSource.h>
#import <libobjc.A.dylib/WFModulesQuickLookViewDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerPrivateDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <libobjc.A.dylib/WFRunWorkflowFooterViewDelegate.h>
#import <libobjc.A.dylib/WFRunWorkflowToolbarDelegate.h>

@protocol WFRunWorkflowViewControllerDelegate;
@class WFWorkflow, WFDatabase, WFWorkflowController, WFContentCollection, WFAction, WFModulesQuickLookView, WFRunWorkflowFooterView, NSIndexPath, WFWorkflowRunEvent, WFWorkflowViewController, WFRunWorkflowToolbar, NSString;

@interface WFRunWorkflowViewController : UIViewController <WFModuleModelProvider, WFWorkflowControllerDelegate, WFParameterInputViewControllerDelegate, WFActionParameterInputProvider, WFModulesSupplementaryViewDataSource, WFModulesQuickLookViewDelegate, QLPreviewControllerPrivateDelegate, UIScrollViewDelegate, UIDropInteractionDelegate, WFRunWorkflowFooterViewDelegate, WFRunWorkflowToolbarDelegate> {

	BOOL _clearsWorkflowSettings;
	BOOL _indicatesLoadingBeforeRunning;
	BOOL _runningFromOtherWorkflow;
	BOOL _droppingInputContent;
	id<WFRunWorkflowViewControllerDelegate> _delegate;
	WFWorkflow* _workflow;
	WFDatabase* _database;
	unsigned long long _editingState;
	WFWorkflowController* _workflowController;
	WFContentCollection* _workflowInput;
	/*^block*/id _completionHandler;
	/*^block*/id _parameterInputHandler;
	WFAction* _lastRunningAction;
	WFModulesQuickLookView* _quickLookView;
	WFRunWorkflowFooterView* _footerView;
	/*^block*/id _prepareToRunCompletion;
	NSIndexPath* _prepareToRunIndexPath;
	WFWorkflowRunEvent* _runEvent;
	WFAction* _currentlyRunningAction;
	WFWorkflowViewController* _workflowViewController;

}

@property (nonatomic,retain) WFWorkflowController * workflowController;                               //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,retain) WFContentCollection * workflowInput;                                     //@synthesize workflowInput=_workflowInput - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id parameterInputHandler;                                                  //@synthesize parameterInputHandler=_parameterInputHandler - In the implementation block
@property (nonatomic,retain) WFAction * lastRunningAction;                                            //@synthesize lastRunningAction=_lastRunningAction - In the implementation block
@property (assign,nonatomic) BOOL runningFromOtherWorkflow;                                           //@synthesize runningFromOtherWorkflow=_runningFromOtherWorkflow - In the implementation block
@property (assign,nonatomic,__weak) WFModulesQuickLookView * quickLookView;                           //@synthesize quickLookView=_quickLookView - In the implementation block
@property (assign,nonatomic,__weak) WFRunWorkflowFooterView * footerView;                             //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) BOOL droppingInputContent;                                               //@synthesize droppingInputContent=_droppingInputContent - In the implementation block
@property (nonatomic,copy) id prepareToRunCompletion;                                                 //@synthesize prepareToRunCompletion=_prepareToRunCompletion - In the implementation block
@property (nonatomic,retain) NSIndexPath * prepareToRunIndexPath;                                     //@synthesize prepareToRunIndexPath=_prepareToRunIndexPath - In the implementation block
@property (nonatomic,retain) WFWorkflowRunEvent * runEvent;                                           //@synthesize runEvent=_runEvent - In the implementation block
@property (nonatomic,retain) WFAction * currentlyRunningAction;                                       //@synthesize currentlyRunningAction=_currentlyRunningAction - In the implementation block
@property (nonatomic,__weak,readonly) WFWorkflowViewController * workflowViewController;              //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,__weak,readonly) WFRunWorkflowToolbar * toolbar; 
@property (assign,nonatomic,__weak) id<WFRunWorkflowViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                 //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                                                 //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) BOOL clearsWorkflowSettings;                                             //@synthesize clearsWorkflowSettings=_clearsWorkflowSettings - In the implementation block
@property (assign,nonatomic) BOOL indicatesLoadingBeforeRunning;                                      //@synthesize indicatesLoadingBeforeRunning=_indicatesLoadingBeforeRunning - In the implementation block
@property (nonatomic,readonly) unsigned long long editingState;                                       //@synthesize editingState=_editingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFRunWorkflowViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFRunWorkflowViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WFDatabase *)database;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)accessibilityPerformMagicTap;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(WFRunWorkflowToolbar *)toolbar;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)keyCommands;
-(WFRunWorkflowFooterView *)footerView;
-(void)setFooterView:(WFRunWorkflowFooterView *)arg1 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(WFWorkflow *)workflow;
-(BOOL)previewController:(id)arg1 canShareItem:(id)arg2 ;
-(void)updateContentInset;
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
-(WFContentCollection *)workflowInput;
-(WFWorkflowController *)workflowController;
-(void)setWorkflowController:(WFWorkflowController *)arg1 ;
-(unsigned long long)editingState;
-(WFWorkflowViewController *)workflowViewController;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 ;
-(id)createModelForAction:(id)arg1 ;
-(WFModulesQuickLookView *)quickLookView;
-(void)setEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)runWorkflowFromKeyPress;
-(void)stopWorkflow;
-(void)parameterInputViewControllerDidCancel:(id)arg1 ;
-(void)parameterInputViewControllerDidFinish:(id)arg1 withParameterStates:(id)arg2 ;
-(void)accessibilityAnnounce:(id)arg1 ;
-(WFAction *)currentlyRunningAction;
-(void)setCurrentlyRunningAction:(WFAction *)arg1 ;
-(id)parameterInputHandler;
-(void)setParameterInputHandler:(id)arg1 ;
-(WFWorkflowRunEvent *)runEvent;
-(void)setRunEvent:(WFWorkflowRunEvent *)arg1 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 cellConfigurationFunction:(/*function pointer*/void*)arg4 ;
-(void)runWorkflowFromSource:(id)arg1 ;
-(id)errorWithRecoveryOptionsFromError:(id)arg1 ;
-(void)runToolbarPlayTapped:(id)arg1 ;
-(void)runToolbarStopTapped:(id)arg1 ;
-(void)runWorkflowFooterViewDidSelectAddButton:(id)arg1 ;
-(void)quickLookViewWantsFullscreen:(id)arg1 ;
-(void)quickLookView:(id)arg1 clickedShare:(id)arg2 forContentItem:(id)arg3 ;
-(void)setDroppingInputContent:(BOOL)arg1 ;
-(void)dismissViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)indexPathForAction:(id)arg1 ;
-(void)runWorkflowFromSource:(id)arg1 withInput:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)finishWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)checkModulePreparationScrollState;
-(BOOL)shouldShowQuickLookView;
-(BOOL)shouldShowAddButton;
-(void)updateQuickLookWithCompletion:(/*^block*/id)arg1 ;
-(void)clearQuickLook;
-(void)scrollToQuickLook;
-(void)invalidateLayoutForFooterView;
-(BOOL)clearsWorkflowSettings;
-(void)setClearsWorkflowSettings:(BOOL)arg1 ;
-(BOOL)indicatesLoadingBeforeRunning;
-(void)setIndicatesLoadingBeforeRunning:(BOOL)arg1 ;
-(void)setWorkflowInput:(WFContentCollection *)arg1 ;
-(WFAction *)lastRunningAction;
-(void)setLastRunningAction:(WFAction *)arg1 ;
-(BOOL)runningFromOtherWorkflow;
-(void)setRunningFromOtherWorkflow:(BOOL)arg1 ;
-(void)setQuickLookView:(WFModulesQuickLookView *)arg1 ;
-(BOOL)droppingInputContent;
-(id)prepareToRunCompletion;
-(void)setPrepareToRunCompletion:(id)arg1 ;
-(NSIndexPath *)prepareToRunIndexPath;
-(void)setPrepareToRunIndexPath:(NSIndexPath *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFDragCoordinator.h>
#import <libobjc.A.dylib/WFVariableUIDelegate.h>
#import <libobjc.A.dylib/WFDrawerControllerDelegate.h>
#import <libobjc.A.dylib/WFComposeFlowControllerDelegate.h>
#import <libobjc.A.dylib/WFEditWorkflowViewControllerDelegate.h>

@protocol WFComposeViewControllerDelegate;
@class UIView, NSArray, WFEditWorkflowViewController, NSHashTable, UITraitCollection, WFComposeUserActivityManager, NSMutableArray, UINavigationController, WFRunWorkflowToolbar, NSLayoutConstraint, WFWorkflowSettingsLayoutMetrics, WFActionDrawerCoordinator, WFDrawerController, WFComposeFlowController, WFWorkflow, WFActionDrawerViewController, NSString;

@interface WFComposeViewController : UIViewController <WFDragCoordinator, WFVariableUIDelegate, WFDrawerControllerDelegate, WFComposeFlowControllerDelegate, WFEditWorkflowViewControllerDelegate> {

	BOOL _actionsHidden;
	BOOL _shouldProvideNavigationBar;
	BOOL _shouldShowShareButton;
	BOOL _observingSharingEnabledUserDefault;
	WFEditWorkflowViewController* _workflowViewController;
	double _bottomContentInset;
	id<WFComposeViewControllerDelegate> _delegate;
	UIView* _separatorView;
	NSHashTable* _movedDragControllers;
	UITraitCollection* _upcomingTraitCollection;
	WFComposeUserActivityManager* _userActivityManager;
	NSMutableArray* _editingStates;
	UINavigationController* _workflowNavigationController;
	WFRunWorkflowToolbar* _toolbar;
	NSLayoutConstraint* _toolbarBottomAnchor;
	WFWorkflowSettingsLayoutMetrics* _layoutMetrics;
	WFActionDrawerCoordinator* _drawerCoordinator;
	UINavigationController* _drawerNavigationController;
	WFDrawerController* _drawerController;
	unsigned long long _preHideVisibility;
	Class _actionsViewControllerClass;
	WFComposeFlowController* _flowController;

}

@property (nonatomic,__weak,readonly) UIView * separatorView;                                      //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) NSHashTable * movedDragControllers;                                 //@synthesize movedDragControllers=_movedDragControllers - In the implementation block
@property (nonatomic,retain) UITraitCollection * upcomingTraitCollection;                          //@synthesize upcomingTraitCollection=_upcomingTraitCollection - In the implementation block
@property (nonatomic,retain) WFComposeUserActivityManager * userActivityManager;                   //@synthesize userActivityManager=_userActivityManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * editingStates;                                     //@synthesize editingStates=_editingStates - In the implementation block
@property (nonatomic,readonly) BOOL actionsHidden;                                                 //@synthesize actionsHidden=_actionsHidden - In the implementation block
@property (nonatomic,retain) UINavigationController * workflowNavigationController;                //@synthesize workflowNavigationController=_workflowNavigationController - In the implementation block
@property (nonatomic,retain) WFRunWorkflowToolbar * toolbar;                                       //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolbarBottomAnchor;                             //@synthesize toolbarBottomAnchor=_toolbarBottomAnchor - In the implementation block
@property (assign,nonatomic) BOOL shouldProvideNavigationBar;                                      //@synthesize shouldProvideNavigationBar=_shouldProvideNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL shouldShowShareButton;                                           //@synthesize shouldShowShareButton=_shouldShowShareButton - In the implementation block
@property (assign,nonatomic) BOOL observingSharingEnabledUserDefault;                              //@synthesize observingSharingEnabledUserDefault=_observingSharingEnabledUserDefault - In the implementation block
@property (nonatomic,retain) WFWorkflowSettingsLayoutMetrics * layoutMetrics;                      //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,retain) WFActionDrawerCoordinator * drawerCoordinator;                        //@synthesize drawerCoordinator=_drawerCoordinator - In the implementation block
@property (nonatomic,retain) UINavigationController * drawerNavigationController;                  //@synthesize drawerNavigationController=_drawerNavigationController - In the implementation block
@property (nonatomic,retain) WFDrawerController * drawerController;                                //@synthesize drawerController=_drawerController - In the implementation block
@property (assign,nonatomic) unsigned long long preHideVisibility;                                 //@synthesize preHideVisibility=_preHideVisibility - In the implementation block
@property (nonatomic,retain) Class actionsViewControllerClass;                                     //@synthesize actionsViewControllerClass=_actionsViewControllerClass - In the implementation block
@property (nonatomic,retain) WFComposeFlowController * flowController;                             //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow; 
@property (nonatomic,readonly) WFActionDrawerViewController * actionsViewController; 
@property (nonatomic,readonly) WFEditWorkflowViewController * workflowViewController;              //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,readonly) double bottomContentInset;                                          //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (nonatomic,readonly) unsigned long long editingState; 
@property (assign,nonatomic,__weak) id<WFComposeViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) NSArray * participatingViewControllers; 
@property (nonatomic,readonly) NSArray * scrollViewsAffectingDrag; 
@property (nonatomic,readonly) id<WFModuleDelegate> moduleDelegate; 
-(void)beginEditing;
-(id<WFComposeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFComposeViewControllerDelegate>)arg1 ;
-(id)home;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(UIView *)containerView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)separatorView;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)cancelBarButtonItem;
-(WFRunWorkflowToolbar *)toolbar;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)setToolbar:(WFRunWorkflowToolbar *)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(id)keyCommands;
-(void)updateUserActivityState:(id)arg1 ;
-(WFActionDrawerViewController *)actionsViewController;
-(void)didTapDone;
-(WFWorkflow *)workflow;
-(double)bottomContentInset;
-(void)finishEditing;
-(WFComposeFlowController *)flowController;
-(void)setFlowController:(WFComposeFlowController *)arg1 ;
-(id)doneBarButtonItem;
-(unsigned long long)editingState;
-(void)workflowViewControllerRequestsActionDrawer:(id)arg1 ;
-(BOOL)isDrawerAvailableForWorkflowViewController:(id)arg1 ;
-(void)workflowViewControllerRequestsDismissal:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)workflowViewControllerWillRun:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
-(void)workflowViewControllerDidRun:(id)arg1 withOutput:(id)arg2 error:(id)arg3 cancelled:(BOOL)arg4 continueHandler:(/*^block*/id)arg5 ;
-(id)runWorkflowToolbarForWorkflowViewController:(id)arg1 ;
-(WFEditWorkflowViewController *)workflowViewController;
-(NSArray *)participatingViewControllers;
-(NSArray *)scrollViewsAffectingDrag;
-(id<WFModuleDelegate>)moduleDelegate;
-(WFWorkflowSettingsLayoutMetrics *)layoutMetrics;
-(void)setLayoutMetrics:(WFWorkflowSettingsLayoutMetrics *)arg1 ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(/*^block*/id)arg3 goBackHandler:(/*^block*/id)arg4 scrolledAwayHandler:(/*^block*/id)arg5 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 ;
-(void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2 ;
-(void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2 ;
-(void)workflowViewControllerRequestsTutorial:(id)arg1 ;
-(void)workflowViewControllerInvalidatedSuggestions:(id)arg1 ;
-(void)workflowViewControllerDidAddAction:(id)arg1 ;
-(void)workflowViewControllerDidRemoveAction:(id)arg1 ;
-(void)didTapNext;
-(void)updateShareButtonVisibility;
-(void)composeFlowControllerDidFinishEditing:(id)arg1 ;
-(id)dismissingScrollViewForDrawerController:(id)arg1 ;
-(void)drawerController:(id)arg1 willTransitionToVisibility:(unsigned long long)arg2 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 shouldProvideNavigationBar:(BOOL)arg3 shouldShowShareButton:(BOOL)arg4 actionsViewControllerClass:(Class)arg5 workflowViewControllerClass:(Class)arg6 ;
-(id)workflowSubViewController;
-(BOOL)shouldUseOverlaidDrawer;
-(void)updateBottomContentInsetForVisibility:(unsigned long long)arg1 ;
-(void)updateDrawerVisibility;
-(void)updateToolbarVisibility;
-(void)setupDrawerIfNeeded;
-(id)emptyStateString;
-(void)finishEditingAndDismissForTutorial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissForTutorial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didTapCancel:(id)arg1 ;
-(void)pushEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)popEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateEditingStateAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateNavigationBarStateAnimated:(BOOL)arg1 ;
-(void)adjustLargeTitleSize;
-(void)updateScrollsToTop;
-(void)setActionsHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)runWorkflowFromKeyPress;
-(void)stopWorkflow;
-(void)searchActions;
-(void)undoLastWorkflowEdit;
-(void)redoLastWorkflowEdit;
-(NSHashTable *)movedDragControllers;
-(UITraitCollection *)upcomingTraitCollection;
-(void)setUpcomingTraitCollection:(UITraitCollection *)arg1 ;
-(WFComposeUserActivityManager *)userActivityManager;
-(void)setUserActivityManager:(WFComposeUserActivityManager *)arg1 ;
-(NSMutableArray *)editingStates;
-(BOOL)actionsHidden;
-(UINavigationController *)workflowNavigationController;
-(void)setWorkflowNavigationController:(UINavigationController *)arg1 ;
-(NSLayoutConstraint *)toolbarBottomAnchor;
-(void)setToolbarBottomAnchor:(NSLayoutConstraint *)arg1 ;
-(BOOL)shouldProvideNavigationBar;
-(void)setShouldProvideNavigationBar:(BOOL)arg1 ;
-(BOOL)shouldShowShareButton;
-(void)setShouldShowShareButton:(BOOL)arg1 ;
-(BOOL)observingSharingEnabledUserDefault;
-(void)setObservingSharingEnabledUserDefault:(BOOL)arg1 ;
-(WFActionDrawerCoordinator *)drawerCoordinator;
-(void)setDrawerCoordinator:(WFActionDrawerCoordinator *)arg1 ;
-(UINavigationController *)drawerNavigationController;
-(void)setDrawerNavigationController:(UINavigationController *)arg1 ;
-(WFDrawerController *)drawerController;
-(void)setDrawerController:(WFDrawerController *)arg1 ;
-(unsigned long long)preHideVisibility;
-(void)setPreHideVisibility:(unsigned long long)arg1 ;
-(Class)actionsViewControllerClass;
-(void)setActionsViewControllerClass:(Class)arg1 ;
@end


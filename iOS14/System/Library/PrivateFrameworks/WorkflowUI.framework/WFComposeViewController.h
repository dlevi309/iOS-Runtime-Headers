/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFVariableUIDelegate.h>
#import <libobjc.A.dylib/WFDrawerControllerDelegate.h>
#import <libobjc.A.dylib/WFComposeFlowControllerDelegate.h>
#import <libobjc.A.dylib/WFWorkflowSettingsViewControllerDelegate.h>
#import <libobjc.A.dylib/WFContentClassesViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerCoordinatorDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <libobjc.A.dylib/WFEditWorkflowViewControllerDelegate.h>
#import <libobjc.A.dylib/WFDragCoordinator.h>

@protocol WFComposeViewControllerPresenter, WFComposeViewControllerDelegate;
@class WFWorkflow, WFEditWorkflowViewController, WFDatabase, UIButton, UIView, NSHashTable, UITraitCollection, WFComposeUserActivityManager, NSMutableArray, WFRunWorkflowToolbar, NSLayoutConstraint, WFWorkflowSettingsLayoutMetrics, WFActionDrawerCoordinator, UILabel, UINavigationController, WFComposeFlowController, WFEditorViewController, WFDrawerController, NSString, NSArray;

@interface WFComposeViewController : UIViewController <WFVariableUIDelegate, WFDrawerControllerDelegate, WFComposeFlowControllerDelegate, WFWorkflowSettingsViewControllerDelegate, WFContentClassesViewControllerDelegate, WFActionDrawerCoordinatorDelegate, UINavigationBarDelegate, WFEditWorkflowViewControllerDelegate, WFDragCoordinator> {

	BOOL _actionsHidden;
	BOOL _shouldShowShareButton;
	BOOL _observingSharingEnabledUserDefault;
	unsigned long long _visibleToolbarPlacement;
	WFWorkflow* _workflow;
	WFEditWorkflowViewController* _workflowViewController;
	double _bottomContentInset;
	id<WFComposeViewControllerPresenter> _presenter;
	id<WFComposeViewControllerDelegate> _delegate;
	WFDatabase* _database;
	UIButton* _settingsButton;
	UIView* _separatorView;
	NSHashTable* _movedDragControllers;
	UITraitCollection* _upcomingTraitCollection;
	WFComposeUserActivityManager* _userActivityManager;
	NSMutableArray* _editingStates;
	WFRunWorkflowToolbar* _toolbar;
	NSLayoutConstraint* _bottomToolbarBottomAnchor;
	WFWorkflowSettingsLayoutMetrics* _layoutMetrics;
	WFActionDrawerCoordinator* _drawerCoordinator;
	UILabel* _titleViewLabel;
	UIButton* _titleViewSettingsButton;
	UIButton* _titleAccessorySettingsButton;
	UINavigationController* _drawerNavigationController;
	unsigned long long _preHideVisibility;
	WFComposeFlowController* _flowController;
	WFEditorViewController* _editorViewController;
	WFDrawerController* _drawerController;

}

@property (nonatomic,readonly) WFDatabase * database;                                              //@synthesize database=_database - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * settingsButton;                                   //@synthesize settingsButton=_settingsButton - In the implementation block
@property (nonatomic,__weak,readonly) UIView * separatorView;                                      //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) NSHashTable * movedDragControllers;                                 //@synthesize movedDragControllers=_movedDragControllers - In the implementation block
@property (nonatomic,retain) UITraitCollection * upcomingTraitCollection;                          //@synthesize upcomingTraitCollection=_upcomingTraitCollection - In the implementation block
@property (nonatomic,retain) WFComposeUserActivityManager * userActivityManager;                   //@synthesize userActivityManager=_userActivityManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * editingStates;                                     //@synthesize editingStates=_editingStates - In the implementation block
@property (nonatomic,readonly) BOOL actionsHidden;                                                 //@synthesize actionsHidden=_actionsHidden - In the implementation block
@property (nonatomic,retain) WFRunWorkflowToolbar * toolbar;                                       //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic) unsigned long long visibleToolbarPlacement;                           //@synthesize visibleToolbarPlacement=_visibleToolbarPlacement - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomToolbarBottomAnchor;                       //@synthesize bottomToolbarBottomAnchor=_bottomToolbarBottomAnchor - In the implementation block
@property (assign,nonatomic) BOOL shouldShowShareButton;                                           //@synthesize shouldShowShareButton=_shouldShowShareButton - In the implementation block
@property (assign,nonatomic) BOOL observingSharingEnabledUserDefault;                              //@synthesize observingSharingEnabledUserDefault=_observingSharingEnabledUserDefault - In the implementation block
@property (nonatomic,retain) WFWorkflowSettingsLayoutMetrics * layoutMetrics;                      //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,retain) WFActionDrawerCoordinator * drawerCoordinator;                        //@synthesize drawerCoordinator=_drawerCoordinator - In the implementation block
@property (nonatomic,retain) UILabel * titleViewLabel;                                             //@synthesize titleViewLabel=_titleViewLabel - In the implementation block
@property (nonatomic,retain) UIButton * titleViewSettingsButton;                                   //@synthesize titleViewSettingsButton=_titleViewSettingsButton - In the implementation block
@property (nonatomic,retain) UIButton * titleAccessorySettingsButton;                              //@synthesize titleAccessorySettingsButton=_titleAccessorySettingsButton - In the implementation block
@property (nonatomic,retain) UINavigationController * drawerNavigationController;                  //@synthesize drawerNavigationController=_drawerNavigationController - In the implementation block
@property (assign,nonatomic) unsigned long long preHideVisibility;                                 //@synthesize preHideVisibility=_preHideVisibility - In the implementation block
@property (nonatomic,retain) WFComposeFlowController * flowController;                             //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,retain) WFEditorViewController * editorViewController;                        //@synthesize editorViewController=_editorViewController - In the implementation block
@property (nonatomic,retain) WFDrawerController * drawerController;                                //@synthesize drawerController=_drawerController - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) WFEditWorkflowViewController * workflowViewController;              //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,readonly) double bottomContentInset;                                          //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (nonatomic,readonly) unsigned long long navigationUpdateBehavior; 
@property (assign,nonatomic,__weak) id<WFComposeViewControllerPresenter> presenter;                //@synthesize presenter=_presenter - In the implementation block
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(WFWorkflowSettingsLayoutMetrics *)layoutMetrics;
-(void)viewWillLayoutSubviews;
-(double)bottomContentInset;
-(void)setPresenter:(id<WFComposeViewControllerPresenter>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIView *)separatorView;
-(WFRunWorkflowToolbar *)toolbar;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)keyCommands;
-(id<WFComposeViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)positionForBar:(id)arg1 ;
-(void)didTapDone;
-(void)finishEditing;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id<WFComposeViewControllerPresenter>)presenter;
-(id)doneBarButtonItem;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<WFComposeViewControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(void)setToolbar:(WFRunWorkflowToolbar *)arg1 ;
-(UIView *)containerView;
-(void)viewSafeAreaInsetsDidChange;
-(void)updateUserActivityState:(id)arg1 ;
-(BOOL)accessibilityPerformMagicTap;
-(void)setEditorViewController:(WFEditorViewController *)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(WFEditorViewController *)editorViewController;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didTapCancel:(id)arg1 ;
-(WFDatabase *)database;
-(void)loadView;
-(WFComposeFlowController *)flowController;
-(void)setFlowController:(WFComposeFlowController *)arg1 ;
-(id)cancelBarButtonItem;
-(void)traitCollectionDidChange:(id)arg1 ;
-(WFComposeUserActivityManager *)userActivityManager;
-(void)dealloc;
-(void)beginEditing;
-(id)home;
-(UIButton *)settingsButton;
-(unsigned long long)editingState;
-(void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(/*^block*/id)arg3 goBackHandler:(/*^block*/id)arg4 scrolledAwayHandler:(/*^block*/id)arg5 ;
-(void)updateShareButtonVisibility;
-(NSArray *)participatingViewControllers;
-(NSArray *)scrollViewsAffectingDrag;
-(id<WFModuleDelegate>)moduleDelegate;
-(WFEditWorkflowViewController *)workflowViewController;
-(void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2 ;
-(void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 ;
-(void)updateEditingStateAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scrollToAction:(id)arg1 ;
-(void)workflowViewControllerDidAddAction:(id)arg1 ;
-(void)workflowViewControllerInvalidatedSuggestions:(id)arg1 ;
-(void)workflowViewControllerDidRemoveAction:(id)arg1 ;
-(void)workflowViewControllerRequestsContentClassesEditor:(id)arg1 sender:(id)arg2 ;
-(void)workflowViewControllerRequestsTutorial:(id)arg1 ;
-(void)workflowViewControllerRequestsActionDrawer:(id)arg1 ;
-(void)workflowViewControllerRequestsShareWorkflow:(id)arg1 sender:(id)arg2 ;
-(void)workflowViewControllerRequestsDocumentation:(id)arg1 action:(id)arg2 sender:(id)arg3 ;
-(void)stopWorkflow;
-(void)presentSettingsViewController;
-(void)runWorkflowFromKeyPress;
-(BOOL)isDrawerAvailableForWorkflowViewController:(id)arg1 ;
-(void)workflowViewControllerDidRun:(id)arg1 withOutput:(id)arg2 error:(id)arg3 cancelled:(BOOL)arg4 continueHandler:(/*^block*/id)arg5 ;
-(id)workflowViewController:(id)arg1 displayableErrorForError:(id)arg2 ;
-(void)workflowViewControllerRequestsSettings:(id)arg1 ;
-(void)workflowViewControllerWillRun:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
-(id)runWorkflowToolbarForWorkflowViewController:(id)arg1 ;
-(void)workflowViewControllerRequestsDismissal:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setLayoutMetrics:(WFWorkflowSettingsLayoutMetrics *)arg1 ;
-(void)didTapNext;
-(void)settingsViewControllerWantsWorkflowReload:(id)arg1 ;
-(void)actionDrawerCoordinator:(id)arg1 didAppendAction:(id)arg2 ;
-(id)actionDrawerCoordinator:(id)arg1 replacementActionForDescriptionOfAction:(id)arg2 ;
-(void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2 ;
-(void)composeFlowControllerDidFinishEditing:(id)arg1 ;
-(id)dismissingScrollViewForDrawerController:(id)arg1 ;
-(void)drawerController:(id)arg1 willTransitionToVisibility:(unsigned long long)arg2 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 shouldShowShareButton:(BOOL)arg3 workflowViewControllerClass:(Class)arg4 ;
-(void)setUpToolbar;
-(id)settingsButtonWithConfiguration:(id)arg1 ;
-(unsigned long long)navigationUpdateBehavior;
-(void)updateTitleView:(id)arg1 ;
-(void)layoutTitleView;
-(UIButton *)titleAccessorySettingsButton;
-(void)updateTitleItemIfNeeded;
-(void)setVisibleToolbarPlacement:(unsigned long long)arg1 ;
-(unsigned long long)visibleToolbarPlacement;
-(id)workflowEditorViewController;
-(BOOL)shouldUseOverlaidDrawer;
-(void)updateBottomContentInsetForVisibility:(unsigned long long)arg1 ;
-(void)updateDrawerVisibility;
-(void)updateToolbarVisibility;
-(void)setupDrawerIfNeeded;
-(id)drawerViewController;
-(id)emptyStateString;
-(void)finishEditingAndDismissForTutorial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissForTutorial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pushEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)popEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateNavigationBarStateAnimated:(BOOL)arg1 ;
-(void)adjustLargeTitleSize;
-(id)myShortcutsBarButtonItem;
-(void)shareWorkflowWithSender:(id)arg1 ;
-(void)updateScrollsToTop;
-(void)setActionsHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)searchActions;
-(void)undoLastWorkflowEdit;
-(void)redoLastWorkflowEdit;
-(NSHashTable *)movedDragControllers;
-(UITraitCollection *)upcomingTraitCollection;
-(void)setUpcomingTraitCollection:(UITraitCollection *)arg1 ;
-(void)setUserActivityManager:(WFComposeUserActivityManager *)arg1 ;
-(NSMutableArray *)editingStates;
-(BOOL)actionsHidden;
-(NSLayoutConstraint *)bottomToolbarBottomAnchor;
-(void)setBottomToolbarBottomAnchor:(NSLayoutConstraint *)arg1 ;
-(BOOL)shouldShowShareButton;
-(void)setShouldShowShareButton:(BOOL)arg1 ;
-(BOOL)observingSharingEnabledUserDefault;
-(void)setObservingSharingEnabledUserDefault:(BOOL)arg1 ;
-(WFActionDrawerCoordinator *)drawerCoordinator;
-(void)setDrawerCoordinator:(WFActionDrawerCoordinator *)arg1 ;
-(UILabel *)titleViewLabel;
-(void)setTitleViewLabel:(UILabel *)arg1 ;
-(UIButton *)titleViewSettingsButton;
-(void)setTitleViewSettingsButton:(UIButton *)arg1 ;
-(void)setTitleAccessorySettingsButton:(UIButton *)arg1 ;
-(UINavigationController *)drawerNavigationController;
-(void)setDrawerNavigationController:(UINavigationController *)arg1 ;
-(unsigned long long)preHideVisibility;
-(void)setPreHideVisibility:(unsigned long long)arg1 ;
-(WFDrawerController *)drawerController;
-(void)setDrawerController:(WFDrawerController *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFRunWorkflowViewController.h>
#import <libobjc.A.dylib/WFDragControllerDelegate.h>
#import <libobjc.A.dylib/WFModulesCollectionViewDelegate.h>
#import <libobjc.A.dylib/WFWorkflowSettingsViewControllerDelegate.h>
#import <libobjc.A.dylib/WFWorkflowEmptyStateViewDelegate.h>
#import <libobjc.A.dylib/WFContentClassesToolbarDelegate.h>
#import <libobjc.A.dylib/WFContentClassesViewControllerDelegate.h>
#import <libobjc.A.dylib/WFModuleDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/WFWorkflowEditingDelegate.h>

@protocol WFVariableUIDelegate;
@class NSUndoManager, NSAttributedString, NSHashTable, WFWorkflowEmptyStateView, UIView, UIButton, WFActionDragFeedbackGenerator, UIResponder, NSLayoutConstraint, NSIndexPath, WFEditShortcutEvent, NSString;

@interface WFEditWorkflowViewController : WFRunWorkflowViewController <WFDragControllerDelegate, WFModulesCollectionViewDelegate, WFWorkflowSettingsViewControllerDelegate, WFWorkflowEmptyStateViewDelegate, WFContentClassesToolbarDelegate, WFContentClassesViewControllerDelegate, WFModuleDelegate, UIGestureRecognizerDelegate, WFWorkflowEditingDelegate> {

	NSUndoManager* _undoManager;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSAttributedString* _emptyStateInstructionText;
	NSHashTable* _currentDragControllers;
	NSHashTable* _moduleDragControllers;
	WFWorkflowEmptyStateView* _emptyStateView;
	UIView* _borderView;
	UIButton* _settingsButton;
	WFActionDragFeedbackGenerator* _dragFeedbackGenerator;
	UIResponder* _wf_firstResponder;
	UIView* _firstResponderHintView;
	NSLayoutConstraint* _hintBottomConstraint;
	long long _revealState;
	/*^block*/id _endRevealGoBackHandler;
	/*^block*/id _endRevealScrolledAwayHandler;
	UIButton* _endRevealButton;
	NSIndexPath* _actionRevealFromIndexPath;
	NSIndexPath* _actionRevealToIndexPath;
	WFEditShortcutEvent* _editShortcutEvent;
	CGPoint _actionRevealInitialOffset;

}

@property (nonatomic,readonly) NSHashTable * currentDragControllers;                                //@synthesize currentDragControllers=_currentDragControllers - In the implementation block
@property (nonatomic,readonly) NSHashTable * moduleDragControllers;                                 //@synthesize moduleDragControllers=_moduleDragControllers - In the implementation block
@property (nonatomic,__weak,readonly) WFWorkflowEmptyStateView * emptyStateView;                    //@synthesize emptyStateView=_emptyStateView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * borderView;                                          //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * settingsButton;                                    //@synthesize settingsButton=_settingsButton - In the implementation block
@property (nonatomic,readonly) NSUndoManager * undoManager;                                         //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,retain) WFActionDragFeedbackGenerator * dragFeedbackGenerator;                 //@synthesize dragFeedbackGenerator=_dragFeedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * wf_firstResponder;                                //@synthesize wf_firstResponder=_wf_firstResponder - In the implementation block
@property (assign,nonatomic,__weak) UIView * firstResponderHintView;                                //@synthesize firstResponderHintView=_firstResponderHintView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * hintBottomConstraint;                             //@synthesize hintBottomConstraint=_hintBottomConstraint - In the implementation block
@property (assign,nonatomic) long long revealState;                                                 //@synthesize revealState=_revealState - In the implementation block
@property (nonatomic,copy) id endRevealGoBackHandler;                                               //@synthesize endRevealGoBackHandler=_endRevealGoBackHandler - In the implementation block
@property (nonatomic,copy) id endRevealScrolledAwayHandler;                                         //@synthesize endRevealScrolledAwayHandler=_endRevealScrolledAwayHandler - In the implementation block
@property (nonatomic,retain) UIButton * endRevealButton;                                            //@synthesize endRevealButton=_endRevealButton - In the implementation block
@property (nonatomic,retain) NSIndexPath * actionRevealFromIndexPath;                               //@synthesize actionRevealFromIndexPath=_actionRevealFromIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * actionRevealToIndexPath;                                 //@synthesize actionRevealToIndexPath=_actionRevealToIndexPath - In the implementation block
@property (assign,nonatomic) CGPoint actionRevealInitialOffset;                                     //@synthesize actionRevealInitialOffset=_actionRevealInitialOffset - In the implementation block
@property (nonatomic,retain) WFEditShortcutEvent * editShortcutEvent;                               //@synthesize editShortcutEvent=_editShortcutEvent - In the implementation block
@property (assign,nonatomic,__weak) id<WFEditWorkflowViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                    //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (assign,nonatomic) BOOL scrollsToTop; 
@property (nonatomic,copy) NSAttributedString * emptyStateInstructionText;                          //@synthesize emptyStateInstructionText=_emptyStateInstructionText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)displaysEmptyView;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(id)keyCommands;
-(NSUndoManager *)undoManager;
-(long long)revealState;
-(BOOL)scrollsToTop;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(UIView *)borderView;
-(void)workflow:(id)arg1 reloadActions:(id)arg2 ;
-(void)workflow:(id)arg1 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg2 ;
-(void)workflow:(id)arg1 removeAction:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3 ;
-(void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3 ;
-(UIButton *)settingsButton;
-(void)setRevealState:(long long)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(BOOL)module:(id)arg1 setParameterState:(id)arg2 forParameter:(id)arg3 action:(id)arg4 ;
-(BOOL)module:(id)arg1 shouldAllowRemovingAction:(id)arg2 ;
-(void)removeActionPressedForModule:(id)arg1 withAction:(id)arg2 ;
-(unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2 ;
-(void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(/*^block*/id)arg3 goBackHandler:(/*^block*/id)arg4 scrolledAwayHandler:(/*^block*/id)arg5 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3 ;
-(id)createModelForAction:(id)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)dragControllerWillBeginDragging:(id)arg1 ;
-(void)dragController:(id)arg1 didEnterViewController:(id)arg2 ;
-(void)dragController:(id)arg1 didExitViewController:(id)arg2 ;
-(void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2 ;
-(BOOL)dragController:(id)arg1 shouldAcceptViewWithCompletion:(/*^block*/id)arg2 ;
-(void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2 ;
-(void)settingsViewControllerDidFinish:(id)arg1 ;
-(void)responderDidBeginEditing:(id)arg1 ;
-(void)responderDidEndEditing:(id)arg1 ;
-(UIResponder *)wf_firstResponder;
-(void)setWf_firstResponder:(UIResponder *)arg1 ;
-(UIView *)firstResponderHintView;
-(void)setFirstResponderHintView:(UIView *)arg1 ;
-(NSLayoutConstraint *)hintBottomConstraint;
-(void)setHintBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)settingsViewControllerWantsWorkflowReload:(id)arg1 ;
-(void)updateEditingStateAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2 ;
-(void)contentClassesToolbarTapped:(id)arg1 ;
-(void)emptyViewDidRequestActionDrawer:(id)arg1 ;
-(void)emptyViewDidRequestTutorial:(id)arg1 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 allowsActionDragAndDrop:(BOOL)arg4 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 cellConfigurationFunction:(/*function pointer*/void*)arg4 ;
-(void)updateEmptyStateViewVisibilityAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEmptyStateInstructionText:(NSAttributedString *)arg1 ;
-(void)runWorkflowFromSource:(id)arg1 ;
-(WFActionDragFeedbackGenerator *)dragFeedbackGenerator;
-(void)didFinishAnimatingReveal;
-(void)resetVisibleCellStylesForEndReveal;
-(void)didFinishAnimatingRevealGoBack;
-(void)didSelectEndRevealButton;
-(void)resetUIForRevealActionEnd;
-(void)cleanupAfterReveal;
-(void)cancelRevealAction;
-(void)runToolbarShareTapped:(id)arg1 ;
-(void)runToolbarUndoTapped:(id)arg1 ;
-(void)runToolbarRedoTapped:(id)arg1 ;
-(void)runToolbarAddTapped:(id)arg1 ;
-(void)presentSettingsViewController;
-(id)errorWithRecoveryOptionsFromError:(id)arg1 ;
-(void)updateBorderWidth;
-(id)initialIndexPathForDragController:(id)arg1 ;
-(BOOL)canMoveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 ;
-(void)commitInsertionOfActions:(id)arg1 atIndexes:(id)arg2 allowUndo:(BOOL)arg3 ;
-(void)commitMovingOfActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 allowUndo:(BOOL)arg3 ;
-(void)commitRemovalOfActions:(id)arg1 allowUndo:(BOOL)arg2 ;
-(void)appendAction:(id)arg1 ;
-(void)_appendActions:(id)arg1 ;
-(void)scrollViewToVisible:(id)arg1 ;
-(void)scrollFirstResponderToVisible;
-(void)updateContentInsetAnimated:(BOOL)arg1 ;
-(void)responderDidType:(id)arg1 ;
-(void)checkRevealActionScrollState;
-(void)shareWorkflow:(id)arg1 ;
-(void)updateEditEvent;
-(void)logEditEventIfNeccesary;
-(NSAttributedString *)emptyStateInstructionText;
-(NSHashTable *)currentDragControllers;
-(NSHashTable *)moduleDragControllers;
-(WFWorkflowEmptyStateView *)emptyStateView;
-(void)setDragFeedbackGenerator:(WFActionDragFeedbackGenerator *)arg1 ;
-(id)endRevealGoBackHandler;
-(void)setEndRevealGoBackHandler:(id)arg1 ;
-(id)endRevealScrolledAwayHandler;
-(void)setEndRevealScrolledAwayHandler:(id)arg1 ;
-(UIButton *)endRevealButton;
-(void)setEndRevealButton:(UIButton *)arg1 ;
-(NSIndexPath *)actionRevealFromIndexPath;
-(void)setActionRevealFromIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)actionRevealToIndexPath;
-(void)setActionRevealToIndexPath:(NSIndexPath *)arg1 ;
-(CGPoint)actionRevealInitialOffset;
-(void)setActionRevealInitialOffset:(CGPoint)arg1 ;
-(WFEditShortcutEvent *)editShortcutEvent;
-(void)setEditShortcutEvent:(WFEditShortcutEvent *)arg1 ;
@end


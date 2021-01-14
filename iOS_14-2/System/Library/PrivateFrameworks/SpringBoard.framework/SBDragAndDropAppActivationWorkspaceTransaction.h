/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/SBWorkspaceApplicationSceneTransitionContextDelegate.h>
#import <libobjc.A.dylib/SBSceneLayoutWorkspaceTransactionObserver.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>

@protocol SBDragAndDropAppActivationWorkspaceTransactionDelegate, SBAppPlatterDragSourceViewProviding, BSInvalidatable;
@class SBFluidSwitcherViewController, SBMainDisplaySceneLayoutViewController, SBMainDisplayLayoutState, SBApplicationDropSession, SBDeviceApplicationSceneHandle, SBMainWorkspaceTransitionRequest, SBToAppsWorkspaceTransaction, SBLayoutElement, SBApplicationSceneUpdateTransaction, CADisplayLink, UIViewFloatAnimatableProperty, NSMutableSet, SBAppPlatterDragPreview, UIView, SBTouchHistory, SBMedusaSettings, NSMutableDictionary, NSUUID, SBFluidSwitcherGesture, NSString;

@interface SBDragAndDropAppActivationWorkspaceTransaction : SBMainWorkspaceTransaction <SBWorkspaceApplicationSceneTransitionContextDelegate, SBSceneLayoutWorkspaceTransactionObserver, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private> {

	SBFluidSwitcherViewController* _mainSwitcherContentController;
	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;
	id<SBDragAndDropAppActivationWorkspaceTransactionDelegate> _delegate;
	SBMainDisplayLayoutState* _initialLayoutState;
	SBMainDisplayLayoutState* _currentLayoutState;
	SBMainDisplayLayoutState* _finalLayoutState;
	SBApplicationDropSession* _dropSession;
	unsigned long long _sessionState;
	SBDeviceApplicationSceneHandle* _draggingApplicationSceneHandle;
	BOOL _beganTrackingDropSession;
	SBMainWorkspaceTransitionRequest* _dropTransitionRequest;
	SBToAppsWorkspaceTransaction* _currentWorkspaceTransaction;
	long long _currentDropAction;
	SBMainDisplayLayoutState* _currentDropActionProposedLayoutState;
	BOOL _performedDrop;
	BOOL _dropAnimationCompleted;
	BOOL _layoutStateTransitionCompleted;
	BOOL _dragExitedDropZone;
	CGSize _cachedSizeForFloatingApplication;
	SBLayoutElement* _layoutElementForWindowDrag;
	BOOL _windowDragEnteredPlatterZone;
	BOOL _windowLiftAnimationCompleted;
	SBApplicationSceneUpdateTransaction* _sceneUpdateTransactionForWindowDrag;
	CADisplayLink* _displayLinkForWindowDrag;
	long long _windowDragPauseCounter;
	unsigned long long _blurState;
	long long _blurringElementViewControllers;
	long long _resizingElementViewControllers;
	UIViewFloatAnimatableProperty* _resizeAnimatableProperty;
	NSMutableSet* _pendingSceneUpdatesTransactions;
	SBAppPlatterDragPreview* _activePlatterPreview;
	id<SBAppPlatterDragSourceViewProviding> _activeSourceViewProvider;
	unsigned long long _numberOfAttemptsRequestingVisibleItems;
	UIView* _contentDragPreview;
	long long _animatingPlatterPreview;
	id<BSInvalidatable> _deferOrientationUpdatesForDragAndDropAssertion;
	SBTouchHistory* _touchHistory;
	SBMedusaSettings* _medusaSettings;
	NSMutableDictionary* _statusBarAssertions;
	NSUUID* _gestureID;
	SBFluidSwitcherGesture* _dragAndDropGesture;
	id<BSInvalidatable> _stateCaptureInvalidatable;

}

@property (getter=isDragging,nonatomic,readonly) BOOL dragging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldTrackLocationOfDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2 ;
+(BOOL)shouldTrackLocationOfDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2 isCurrentlyTracking:(BOOL)arg3 ;
+(BOOL)isDragOverFullscreenRegionAtLocation:(CGPoint)arg1 inBounds:(CGRect)arg2 ;
+(BOOL)isDragOverSideGutterRegionsAtLocation:(CGPoint)arg1 inBounds:(CGRect)arg2 totalContentDragGutterWidth:(double)arg3 ;
+(double)prototypeSettingsContentDraggingSideActivationWidth;
+(double)prototypeSettingsContentDraggingFloatingActivationWidth;
+(double)prototypeSettingsContentDraggingCommandeerWidth;
+(double)prototypeSettingsWindowTearOffDraggingSideActivationWidth;
+(double)prototypeSettingsWindowTearOffDraggingFloatingActivationWidth;
+(CGRect)sourceSceneInterfaceOrientedBoundsForDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2 ;
+(CGSize)prototypeSettingsFullscreenActivationRegionSize;
+(double)prototypeSettingsSideActivationGutterSize;
-(id)layoutStateForApplicationTransitionContext:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2 ;
-(BOOL)_canBeInterrupted;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)_begin;
-(id)_dragInteraction:(id)arg1 customSpringAnimationBehaviorForCancellingItem:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)_didComplete;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(BOOL)_shouldComplete;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(void)_invalidateStatusBarAssertions;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(CGRect)applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2 ;
-(id)_dropInteraction:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)isDragging;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1 ;
-(void)dealloc;
-(long long)_gestureType;
-(id)_currentGestureEventForGesture:(id)arg1 ;
-(void)_addChildWorkspaceTransaction:(id)arg1 ;
-(double)_platterScale;
-(void)_willInterruptForTransitionRequest:(id)arg1 ;
-(BOOL)matchesUIDragDropSession:(id)arg1 ;
-(BOOL)matchesApplicationDropSession:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 mainSwitcherContentController:(id)arg2 sceneLayoutViewController:(id)arg3 dropSession:(id)arg4 delegate:(id)arg5 ;
-(void)_setupPlatterPreviewForContentDrag;
-(id)_createPlatterPreviewForApplication:(id)arg1 withSourceView:(id)arg2 dropSession:(id)arg3 ;
-(void)_configurePlatterPreview:(id)arg1 forSceneHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateActiveSourceViewProviderWithDragState:(unsigned long long)arg1 ;
-(void)_updateAnchorPointForPlatterPreview:(id)arg1 dragPreview:(id)arg2 withSourceViewBounds:(CGRect)arg3 location:(CGPoint)arg4 ;
-(void)_updatePlatterPreviewForSetDown:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_handleSessionDidUpdate:(id)arg1 ;
-(void)_handleSessionDidPerformDrop:(id)arg1 ;
-(void)_handleSessionDidEnd:(id)arg1 ;
-(long long)_layoutRoleForDropAction:(long long)arg1 ;
-(id)_dragPreviewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(void)_handleWillAnimateDropWithAnimator:(id)arg1 ;
-(void)_updateCurrentDropActionProposedLayoutState;
-(void)_cleanUpAndCompleteTransactionIfNecessary;
-(void)_interruptForDragExitedDropZoneIfNecessary;
-(void)_updateForWindowDragForSession:(id)arg1 ;
-(void)_updateCurrentDropActionForSession:(id)arg1 ;
-(void)_updateLayoutElementViewControllersWithCompletion:(/*^block*/id)arg1 ;
-(id)_transitionRequestForDropAction:(long long)arg1 ;
-(BOOL)_shouldFailLayoutStateTransitionForWindowDrag;
-(void)_fadeOutPreviousLayoutElementViewControllersIfNecessary;
-(void)_runFinalLayoutStateTransaction;
-(void)_updateLayoutElementViewControllerForDropCompletion;
-(void)_uncommandeerContentDrag;
-(id)resizeUIAnimationFactory;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(BOOL)_shouldPushInSceneLayoutViewControllerForDropAction:(long long)arg1 ;
-(void)_setStatusBarsHidden:(BOOL)arg1 ;
-(void)_updateLayoutElementViewControllerDarkeningWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateLayoutElementViewControllerCornerRadiusWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateLayoutElementViewControllerBlurringWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateLayoutElementViewControllerStatusBars;
-(void)_updateSeparatorViewWithCompletion:(/*^block*/id)arg1 ;
-(id)_primaryApplicationLayoutElementViewController;
-(id)_sideApplicationLayoutElementViewController;
-(BOOL)_showResizeUI;
-(BOOL)_areLayoutElementViewControllersCorrectlySizedForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 ;
-(void)_setupResizeAnimatableProperty;
-(void)_beginRequiringSceneViewMatchMoveAnimation;
-(void)_updateLayoutElementViewControllerFrames;
-(void)_endRequiringSceneViewMatchMoveAnimation;
-(id)_primaryLayoutElementViewController;
-(id)_sideLayoutElementViewController;
-(void)_getPrimaryLayoutElementViewFrame:(CGRect*)arg1 sideLayoutElementViewFrame:(CGRect*)arg2 separatorViewFrame:(CGRect*)arg3 forDropAction:(long long)arg4 proposedDropLayoutState:(id)arg5 state:(unsigned long long)arg6 ;
-(void)_getPrimaryLayoutElementViewFrame:(CGRect*)arg1 sideLayoutElementViewFrame:(CGRect*)arg2 separatorViewFrame:(CGRect*)arg3 forDropAction:(long long)arg4 proposedDropLayoutState:(id)arg5 state:(unsigned long long)arg6 spaceConfiguration:(long long)arg7 ;
-(CGSize)_sizeForFloatingApplication;
-(CGSize)_platterSizeForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(BOOL)arg3 ;
-(id)_cornerRadiusConfigurationForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(BOOL)arg3 mode:(unsigned long long)arg4 ;
-(void)_getPlatterDiffuseShadowParameters:(SBDragPreviewShadowParameters*)arg1 rimShadowParameters:(SBDragPreviewShadowParameters*)arg2 diffuseFilters:(id*)arg3 rimFilters:(id*)arg4 forDropAction:(long long)arg5 setDown:(BOOL)arg6 mode:(unsigned long long)arg7 userInterfaceStyle:(long long)arg8 ;
-(void)_endDragAndDropFluidGesture;
-(void)_acquireStatusBarAssertions;
-(void)_updatePlatterPreviewWithUpdatedSourceView;
-(CGRect)_platterFrameInSwitcherView;
-(BOOL)_canInterruptForCurrentDropAction;
-(BOOL)_areLayoutElementViewControllersBlurred;
-(unsigned long long)_gestureModifierPhaseForGestureState:(long long)arg1 ;
@end


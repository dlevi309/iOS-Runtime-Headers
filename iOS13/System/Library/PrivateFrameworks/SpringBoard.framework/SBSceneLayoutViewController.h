/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBSceneViewPresentationConfiguring.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionSceneEntityFrameProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBDisplayLayoutContext.h>

@protocol SBSceneLayoutViewControllerDelegate;
@class FBSDisplayIdentity, SBLayoutState, FBDisplayLayoutElement, FBDisplayLayoutTransition, NSMutableDictionary, NSMutableSet, SBWorkspaceApplicationSceneTransitionContext, SBSceneManager, UIView, NSArray, NSString;

@interface SBSceneLayoutViewController : UIViewController <SBSceneViewPresentationConfiguring, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, BSDescriptionProviding, SBDisplayLayoutContext> {

	FBDisplayLayoutElement* _homescreenLayoutElement;
	FBDisplayLayoutTransition* _displayLayoutTransition;
	NSMutableDictionary* _layoutElementControllersByRole;
	NSMutableDictionary* _previousLayoutElementControllersByRole;
	NSMutableDictionary* _reusableLayoutElementControllers;
	NSMutableSet* _elementViewControllerUpdatesSuspensionReasons;
	BOOL _userResizing;
	BOOL _elementViewControllerUpdatesSuspended;
	SBLayoutState* _transitioningFromLayoutState;
	SBLayoutState* _transitioningToLayoutState;
	SBWorkspaceApplicationSceneTransitionContext* _transitionContext;
	SBWorkspaceApplicationSceneTransitionContext* _previousSuccessfulTransitionContext;
	SBSceneManager* _sceneManager;
	id<SBSceneLayoutViewControllerDelegate> _delegate;
	UIView* _sceneContainerView;

}

@property (nonatomic,__weak,readonly) SBSceneManager * sceneManager;                                                                                                                     //@synthesize sceneManager=_sceneManager - In the implementation block
@property (assign,nonatomic,__weak) id<SBSceneLayoutViewControllerDelegate> delegate;                                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isUserResizing,nonatomic) BOOL userResizing;                                                                                                                    //@synthesize userResizing=_userResizing - In the implementation block
@property (assign,setter=_setElementViewControllerUpdatesSuspended:,getter=_areElementViewControllerUpdatesSuspended,nonatomic) BOOL elementViewControllerUpdatesSuspended;              //@synthesize elementViewControllerUpdatesSuspended=_elementViewControllerUpdatesSuspended - In the implementation block
@property (nonatomic,readonly) UIView * sceneContainerView;                                                                                                                              //@synthesize sceneContainerView=_sceneContainerView - In the implementation block
@property (nonatomic,readonly) SBLayoutState * _transitioningFromLayoutState;                                                                                                            //@synthesize transitioningFromLayoutState=_transitioningFromLayoutState - In the implementation block
@property (nonatomic,readonly) SBLayoutState * _transitioningToLayoutState;                                                                                                              //@synthesize transitioningToLayoutState=_transitioningToLayoutState - In the implementation block
@property (nonatomic,readonly) SBWorkspaceApplicationSceneTransitionContext * _transitionContext;                                                                                        //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) SBWorkspaceApplicationSceneTransitionContext * _previousSuccessfulTransitionContext;                                                                      //@synthesize previousSuccessfulTransitionContext=_previousSuccessfulTransitionContext - In the implementation block
@property (getter=_isCurrentlyTransitioning,nonatomic,readonly) BOOL _currentlyTransitioning; 
@property (nonatomic,copy,readonly) NSArray * _transitioningLayoutElementControllers; 
@property (nonatomic,copy,readonly) NSArray * _transitioningAppViewControllers; 
@property (nonatomic,readonly) long long _layoutOrientation; 
@property (nonatomic,readonly) long long _transitioningFromLayoutOrientation; 
@property (nonatomic,readonly) long long _transitioningToLayoutOrientation; 
@property (getter=_isCurrentlyRotating,nonatomic,readonly) BOOL _currentlyRotating; 
@property (nonatomic,readonly) NSArray * layoutElementControllers; 
@property (nonatomic,readonly) NSArray * appViewControllers; 
@property (nonatomic,readonly) BOOL hasVisibleElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) SBLayoutState * layoutState; 
+(id)mainDisplaySceneLayoutViewController;
+(id)sceneLayoutViewControllerForDisplayIdentity:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)_invalidate;
-(id)initWithCoder:(id)arg1 ;
-(id<SBSceneLayoutViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBSceneLayoutViewControllerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)_layoutOrientation;
-(void)loadView;
-(id)coordinateSpace;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(SBWorkspaceApplicationSceneTransitionContext *)_transitionContext;
-(SBLayoutState *)layoutState;
-(FBSDisplayIdentity *)displayIdentity;
-(id)_displayConfiguration;
-(UIView *)sceneContainerView;
-(SBSceneManager *)sceneManager;
-(long long)sceneViewPresentationPriority:(id)arg1 ;
-(id)sceneViewPresentationIdentifier:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 maskDisplayCorners:(BOOL)arg4 ;
-(id)initWithSceneManager:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(id)coordinateSpaceForInterfaceOrientation:(long long)arg1 ;
-(id)_animationWrapperViewForElement:(id)arg1 entity:(id)arg2 layoutState:(id)arg3 ;
-(BOOL)_isCurrentlyRotating;
-(id)animationControllerForRotatingWithTransitionRequest:(id)arg1 ;
-(NSArray *)layoutElementControllers;
-(id)_layoutElementControllerForLayoutRole:(long long)arg1 ;
-(BOOL)_isCurrentlyTransitioning;
-(id)_transitioningFromLayoutElementControllerForLayoutRole:(long long)arg1 ;
-(SBLayoutState *)_transitioningToLayoutState;
-(CGRect)referenceFrameForUniqueIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(BOOL)isUserResizing;
-(SBLayoutState *)_transitioningFromLayoutState;
-(void)_setElementViewControllerUpdatesSuspended:(BOOL)arg1 ;
-(NSArray *)_transitioningLayoutElementControllers;
-(NSArray *)appViewControllers;
-(BOOL)hasVisibleElements;
-(CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(void)_enqueueLayoutViewControllerForReuse:(id)arg1 ;
-(id)appViewForWorkspaceEntity:(id)arg1 inLayoutRole:(long long)arg2 withLayoutState:(id)arg3 hostRequester:(id)arg4 ;
-(id)coordinateSpaceForLayoutState:(id)arg1 ;
-(BOOL)_areElementViewControllerUpdatesSuspended;
-(id)_previousLayoutElementControllerWithElementIdentifier:(id)arg1 ;
-(id)_dequeueLayoutElementControllerForReuseOfClass:(Class)arg1 ;
-(void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3 ;
-(BOOL)_isLayoutElementViewControllerOccluded:(id)arg1 ;
-(void)_updateAuxiliaryViews;
-(void)_configureVisibilityForCurrentLayoutState;
-(BOOL)_shouldConsiderHomeScreenAsActive;
-(void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(BOOL)arg1 ;
-(void)_cleanupDisappearedLayoutElementController:(id)arg1 ;
-(BOOL)_shouldRepositionViewAfterTransition;
-(void)_verifyLayoutElementControllersAreValidForCurrentLayoutState;
-(long long)_transitioningFromLayoutOrientation;
-(long long)_transitioningToLayoutOrientation;
-(void)_beginLayoutStateTransitionWithTransitionContext:(id)arg1 ;
-(void)_willEndLayoutStateTransition;
-(void)_endLayoutStateTransitionForFailure;
-(void)_endLayoutStateTransitionWithInterruption:(BOOL)arg1 ;
-(CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(NSArray *)_transitioningAppViewControllers;
-(id)appViewForWorkspaceEntity:(id)arg1 inLayoutRole:(long long)arg2 withLayoutState:(id)arg3 ;
-(id)coordinateSpaceForLayoutElement:(id)arg1 layoutState:(id)arg2 ;
-(CGPoint)convertPointToInterfaceOrientationCoordinateSpace:(CGPoint)arg1 ;
-(CGRect)convertRectToInterfaceOrientationCoordinateSpace:(CGRect)arg1 ;
-(CGPoint)convertPointFromInterfaceOrientationCoordinateSpace:(CGPoint)arg1 ;
-(CGRect)convertRectFromInterfaceOrientationCoordinateSpace:(CGRect)arg1 ;
-(BOOL)_shouldAdjustViewAffordancesAfterTransition;
-(long long)_overrideWindowActiveInterfaceOrientation;
-(BOOL)_shouldRotateToLayoutOrientation:(long long)arg1 ;
-(SBWorkspaceApplicationSceneTransitionContext *)_previousSuccessfulTransitionContext;
-(void)setUserResizing:(BOOL)arg1 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 ;
@end


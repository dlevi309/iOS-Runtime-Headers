/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)convertPointFromInterfaceOrientationCoordinateSpace:(CGPoint)arg1 ;
-(void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3 ;
-(CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(NSArray *)appViewControllers;
-(SBLayoutState *)_transitioningFromLayoutState;
-(id)appViewForWorkspaceEntity:(id)arg1 inLayoutRole:(long long)arg2 withLayoutState:(id)arg3 ;
-(id)coordinateSpaceForLayoutState:(id)arg1 ;
-(id)_previousLayoutElementControllerWithElementIdentifier:(id)arg1 ;
-(void)_verifyLayoutElementControllersAreValidForCurrentLayoutState;
-(void)_beginLayoutStateTransitionWithTransitionContext:(id)arg1 ;
-(long long)_transitioningFromLayoutOrientation;
-(SBWorkspaceApplicationSceneTransitionContext *)_transitionContext;
-(id)appViewForWorkspaceEntity:(id)arg1 inLayoutRole:(long long)arg2 withLayoutState:(id)arg3 hostRequester:(id)arg4 ;
-(void)_endLayoutStateTransitionForFailure;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 ;
-(BOOL)isUserResizing;
-(BOOL)_isLayoutElementViewControllerOccluded:(id)arg1 ;
-(SBWorkspaceApplicationSceneTransitionContext *)_previousSuccessfulTransitionContext;
-(BOOL)_shouldRepositionViewAfterTransition;
-(id)coordinateSpaceForInterfaceOrientation:(long long)arg1 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 maskDisplayCorners:(BOOL)arg4 ;
-(void)_setElementViewControllerUpdatesSuspended:(BOOL)arg1 ;
-(long long)_transitioningToLayoutOrientation;
-(void)_endLayoutStateTransitionWithInterruption:(BOOL)arg1 ;
-(CGRect)referenceFrameForUniqueIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(long long)sceneViewPresentationPriority:(id)arg1 ;
-(BOOL)_areElementViewControllerUpdatesSuspended;
-(long long)_overrideWindowActiveInterfaceOrientation;
-(long long)_layoutOrientation;
-(void)_configureVisibilityForCurrentLayoutState;
-(id)initWithSceneManager:(id)arg1 ;
-(NSArray *)layoutElementControllers;
-(BOOL)_shouldRotateToLayoutOrientation:(long long)arg1 ;
-(id)succinctDescription;
-(CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(CGPoint)convertPointToInterfaceOrientationCoordinateSpace:(CGPoint)arg1 ;
-(void)_enqueueLayoutViewControllerForReuse:(id)arg1 ;
-(BOOL)_isCurrentlyRotating;
-(CGRect)convertRectToInterfaceOrientationCoordinateSpace:(CGRect)arg1 ;
-(UIView *)sceneContainerView;
-(SBLayoutState *)_transitioningToLayoutState;
-(id)_transitioningFromLayoutElementControllerForLayoutRole:(long long)arg1 ;
-(BOOL)hasVisibleElements;
-(void)setUserResizing:(BOOL)arg1 ;
-(void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(BOOL)arg1 ;
-(NSArray *)_transitioningAppViewControllers;
-(BOOL)_isCurrentlyTransitioning;
-(BOOL)_shouldAdjustViewAffordancesAfterTransition;
-(void)_cleanupDisappearedLayoutElementController:(id)arg1 ;
-(id)_animationWrapperViewForElement:(id)arg1 entity:(id)arg2 layoutState:(id)arg3 ;
-(id)_layoutElementControllerForLayoutRole:(long long)arg1 ;
-(void)_invalidate;
-(void)_updateAuxiliaryViews;
-(BOOL)_shouldConsiderHomeScreenAsActive;
-(NSArray *)_transitioningLayoutElementControllers;
-(id)_displayConfiguration;
-(SBSceneManager *)sceneManager;
-(void)_willEndLayoutStateTransition;
-(id)coordinateSpaceForLayoutElement:(id)arg1 layoutState:(id)arg2 ;
-(id)_dequeueLayoutElementControllerForReuseOfClass:(Class)arg1 ;
-(id)sceneViewPresentationIdentifier:(id)arg1 ;
-(CGRect)convertRectFromInterfaceOrientationCoordinateSpace:(CGRect)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(id)init;
-(id)coordinateSpace;
-(id<SBSceneLayoutViewControllerDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<SBSceneLayoutViewControllerDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)shouldAutorotate;
-(id)animationControllerForRotatingWithTransitionRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SBLayoutState *)layoutState;
-(void)loadView;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
@end


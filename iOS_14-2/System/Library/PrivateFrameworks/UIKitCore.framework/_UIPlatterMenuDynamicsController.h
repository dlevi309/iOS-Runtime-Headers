/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPlatterMenuPanningTransformerDelegate.h>

@protocol _UIPlatterMenuDynamicsControllerDelegate, UIDynamicItem;
@class UIView, _UIPlatterMenuPanningTransformer, UIDynamicAnimator, UIDynamicItemBehavior, UIAttachmentBehavior, _UIPlatterMenuSnapBehavior, UICollisionBehavior, _UIDynamicItemObservingBehavior, _UIStatesFeedbackGenerator, NSString;

@interface _UIPlatterMenuDynamicsController : NSObject <_UIPlatterMenuPanningTransformerDelegate> {

	BOOL _leadingSwipeActionViewSelected;
	BOOL _trailingSwipeActionViewSelected;
	BOOL _isCurrentlyUnderDirectManipulation;
	id<_UIPlatterMenuDynamicsControllerDelegate> _delegate;
	UIView* _containerView;
	UIView* _platterView;
	UIView* _menuView;
	id<UIDynamicItem> _platterItem;
	_UIPlatterMenuPanningTransformer* _panningLockTransformer;
	long long _state;
	double _leadingSwipeEdgeMultiplier;
	double _trailingSwipeEdgeMultiplier;
	UIDynamicAnimator* _animator;
	UIDynamicItemBehavior* _menuItemBehavior;
	UIDynamicItemBehavior* _platterItemBehavior;
	UIAttachmentBehavior* _platterMenuSlidingAttachmentBehavior;
	UIAttachmentBehavior* _platterMenuAttachmentBehavior;
	UIAttachmentBehavior* _gestureAttachmentBehavior;
	_UIPlatterMenuSnapBehavior* _platterSnapBehavior;
	_UIPlatterMenuSnapBehavior* _menuPresentedSnapBehavior;
	_UIPlatterMenuSnapBehavior* _menuDismissedSnapBehavior;
	UIDynamicItemBehavior* _noRotationBehavior;
	UIAttachmentBehavior* _menuVerticalLockAttachment;
	UICollisionBehavior* _platterMenuCollisionBounds;
	_UIDynamicItemObservingBehavior* _observingBehavior;
	long long _didPresentCount;
	_UIStatesFeedbackGenerator* _swipeFeedbackGenerator;
	CGPoint _initialTouchPoint;

}

@property (assign,nonatomic,__weak) id<_UIPlatterMenuDynamicsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                             //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * platterView;                                               //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) UIView * menuView;                                                  //@synthesize menuView=_menuView - In the implementation block
@property (assign,nonatomic,__weak) id<UIDynamicItem> platterItem;                                      //@synthesize platterItem=_platterItem - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuPanningTransformer * panningLockTransformer;                 //@synthesize panningLockTransformer=_panningLockTransformer - In the implementation block
@property (assign,nonatomic) long long state;                                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchPoint;                                                 //@synthesize initialTouchPoint=_initialTouchPoint - In the implementation block
@property (assign,nonatomic) double leadingSwipeEdgeMultiplier;                                         //@synthesize leadingSwipeEdgeMultiplier=_leadingSwipeEdgeMultiplier - In the implementation block
@property (assign,nonatomic) double trailingSwipeEdgeMultiplier;                                        //@synthesize trailingSwipeEdgeMultiplier=_trailingSwipeEdgeMultiplier - In the implementation block
@property (assign,nonatomic) BOOL isCurrentlyUnderDirectManipulation;                                   //@synthesize isCurrentlyUnderDirectManipulation=_isCurrentlyUnderDirectManipulation - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * animator;                                              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) UIDynamicItemBehavior * menuItemBehavior;                                  //@synthesize menuItemBehavior=_menuItemBehavior - In the implementation block
@property (nonatomic,retain) UIDynamicItemBehavior * platterItemBehavior;                               //@synthesize platterItemBehavior=_platterItemBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * platterMenuSlidingAttachmentBehavior;               //@synthesize platterMenuSlidingAttachmentBehavior=_platterMenuSlidingAttachmentBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * platterMenuAttachmentBehavior;                      //@synthesize platterMenuAttachmentBehavior=_platterMenuAttachmentBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * gestureAttachmentBehavior;                          //@synthesize gestureAttachmentBehavior=_gestureAttachmentBehavior - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuSnapBehavior * platterSnapBehavior;                          //@synthesize platterSnapBehavior=_platterSnapBehavior - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuSnapBehavior * menuPresentedSnapBehavior;                    //@synthesize menuPresentedSnapBehavior=_menuPresentedSnapBehavior - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuSnapBehavior * menuDismissedSnapBehavior;                    //@synthesize menuDismissedSnapBehavior=_menuDismissedSnapBehavior - In the implementation block
@property (nonatomic,retain) UIDynamicItemBehavior * noRotationBehavior;                                //@synthesize noRotationBehavior=_noRotationBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * menuVerticalLockAttachment;                         //@synthesize menuVerticalLockAttachment=_menuVerticalLockAttachment - In the implementation block
@property (nonatomic,retain) UICollisionBehavior * platterMenuCollisionBounds;                          //@synthesize platterMenuCollisionBounds=_platterMenuCollisionBounds - In the implementation block
@property (nonatomic,retain) _UIDynamicItemObservingBehavior * observingBehavior;                       //@synthesize observingBehavior=_observingBehavior - In the implementation block
@property (assign,nonatomic) long long didPresentCount;                                                 //@synthesize didPresentCount=_didPresentCount - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * swipeFeedbackGenerator;                       //@synthesize swipeFeedbackGenerator=_swipeFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) CGVector currentTranslation; 
@property (nonatomic,readonly) CGVector currentVelocity; 
@property (assign,nonatomic) BOOL leadingSwipeActionViewSelected;                                       //@synthesize leadingSwipeActionViewSelected=_leadingSwipeActionViewSelected - In the implementation block
@property (assign,nonatomic) BOOL trailingSwipeActionViewSelected;                                      //@synthesize trailingSwipeActionViewSelected=_trailingSwipeActionViewSelected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIDynamicAnimator *)animator;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(void)panningTransformer:(id)arg1 didPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 touchPosition:(CGPoint)arg4 velocity:(CGVector)arg5 didChangeAxis:(BOOL)arg6 axisLock:(unsigned long long)arg7 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 velocity:(CGVector)arg4 ;
-(UIView *)platterView;
-(void)beginTransitionWithAnimatorUsingBehaviors:(id)arg1 observedItems:(id)arg2 stateIfCompleted:(long long)arg3 ;
-(void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(BOOL)arg1 finalSelectionState:(BOOL)arg2 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(id<_UIPlatterMenuDynamicsControllerDelegate>)delegate;
-(UIView *)menuView;
-(void)lockIntoYAxis;
-(void)resetAnimator;
-(void)setDelegate:(id<_UIPlatterMenuDynamicsControllerDelegate>)arg1 ;
-(UIDynamicItemBehavior *)menuItemBehavior;
-(void)setPlatterItem:(id<UIDynamicItem>)arg1 ;
-(void)didPanWithPoint:(CGPoint)arg1 ;
-(CGPoint)menuCenter;
-(long long)didPresentCount;
-(void)_configureAnimator;
-(_UIStatesFeedbackGenerator *)swipeFeedbackGenerator;
-(UIView *)containerView;
-(id<UIDynamicItem>)platterItem;
-(void)_configureFeedbackGenerator;
-(_UIPlatterMenuPanningTransformer *)panningLockTransformer;
-(void)_activateFeedbackIfNeeded;
-(void)setInitialTouchPoint:(CGPoint)arg1 ;
-(void)setIsCurrentlyUnderDirectManipulation:(BOOL)arg1 ;
-(void)_deactivateFeedbackIfNeeded;
-(void)_updateSwipeEdgeMultipliersIfNeededForTouchPosition:(CGPoint)arg1 ;
-(BOOL)platterPanned;
-(void)performActionsAndEnterState:(long long)arg1 velocity:(CGVector)arg2 underDirectManipulation:(BOOL)arg3 ;
-(void)resetAnimatorToDefaultBehaviors;
-(UIAttachmentBehavior *)gestureAttachmentBehavior;
-(void)addBehaviorIfNotPresent:(id)arg1 ;
-(void)performActionsAndEnterState:(long long)arg1 ;
-(void)setMenuView:(UIView *)arg1 ;
-(CGVector)modifiedOffsetForPosition:(CGPoint)arg1 offset:(CGVector)arg2 touchPosition:(CGPoint)arg3 axisLock:(unsigned long long)arg4 ;
-(CGPoint)centerForMenuPresentedRelativeToCurrentPlatter;
-(UIDynamicItemBehavior *)platterItemBehavior;
-(_UIPlatterMenuSnapBehavior *)menuPresentedSnapBehavior;
-(void)setMenuItemBehavior:(UIDynamicItemBehavior *)arg1 ;
-(UIAttachmentBehavior *)platterMenuSlidingAttachmentBehavior;
-(void)setPlatterItemBehavior:(UIDynamicItemBehavior *)arg1 ;
-(void)_positionSwipeActionViewsForCurrentPlatterViewPosition;
-(long long)_stateForPosition:(CGPoint)arg1 offset:(CGVector)arg2 velocity:(CGVector)arg3 ;
-(UIAttachmentBehavior *)platterMenuAttachmentBehavior;
-(void)setPlatterMenuAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(void)setGestureAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(void)setPlatterSnapBehavior:(_UIPlatterMenuSnapBehavior *)arg1 ;
-(void)setMenuPresentedSnapBehavior:(_UIPlatterMenuSnapBehavior *)arg1 ;
-(void)setMenuDismissedSnapBehavior:(_UIPlatterMenuSnapBehavior *)arg1 ;
-(_UIPlatterMenuSnapBehavior *)menuDismissedSnapBehavior;
-(void)setNoRotationBehavior:(UIDynamicItemBehavior *)arg1 ;
-(UIDynamicItemBehavior *)noRotationBehavior;
-(_UIDynamicItemObservingBehavior *)observingBehavior;
-(void)setMenuVerticalLockAttachment:(UIAttachmentBehavior *)arg1 ;
-(void)setPlatterMenuCollisionBounds:(UICollisionBehavior *)arg1 ;
-(void)setPlatterMenuSlidingAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(void)setObservingBehavior:(_UIDynamicItemObservingBehavior *)arg1 ;
-(UIAttachmentBehavior *)menuVerticalLockAttachment;
-(UICollisionBehavior *)platterMenuCollisionBounds;
-(BOOL)_isPlatterInYLockedPosition;
-(CGVector)currentVelocity;
-(_UIPlatterMenuSnapBehavior *)platterSnapBehavior;
-(void)setDidPresentCount:(long long)arg1 ;
-(void)stopObservingBehavior;
-(BOOL)isCurrentlyUnderDirectManipulation;
-(double)leadingSwipeEdgeMultiplier;
-(BOOL)isMenuPresented;
-(double)trailingSwipeEdgeMultiplier;
-(CGPoint)centerForCurrentPlatterPosition;
-(void)setSwipeFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(BOOL)isDefaultAnimatorBehavior:(id)arg1 ;
-(void)didBeginPanningWithPoint:(CGPoint)arg1 ;
-(CGVector)currentTranslation;
-(void)setLeadingSwipeEdgeMultiplier:(double)arg1 ;
-(void)setTrailingSwipeEdgeMultiplier:(double)arg1 ;
-(void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(CGPoint)arg2 ;
-(CGPoint)platterCenter;
-(void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(CGPoint)arg2 ;
-(id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3 delegate:(id)arg4 ;
-(void)didEndPanningWithPoint:(CGPoint)arg1 ;
-(void)toggleAnimatorDebugState;
-(BOOL)isMenuPresenting;
-(BOOL)isSelectingSwipeAction;
-(void)_beginInYLockedStatePresented;
-(void)_animateToPlatterPresentedWithVelocity:(CGVector)arg1 ;
-(BOOL)hasBeenPresented;
-(void)_animateToPlatterDismissedWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLeadingSwipeActionViewSelected:(BOOL)arg1 ;
-(BOOL)trailingSwipeActionViewSelected;
-(void)setTrailingSwipeActionViewSelected:(BOOL)arg1 ;
-(BOOL)leadingSwipeActionViewSelected;
-(void)setPanningLockTransformer:(_UIPlatterMenuPanningTransformer *)arg1 ;
-(CGPoint)initialTouchPoint;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)dealloc;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol UIViewControllerContextTransitioning;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIViewPropertyAnimator, PUPhotoPinchGestureRecognizer, PXPinchTracker, UIPanGestureRecognizer, PXSwipeDownTracker, NSArray, PUImportOneUpTransitionItem;

@interface PUImportOneUpModalTransition : NSObject {

	UIViewPropertyAnimator* _transitionAnimator;
	PUPhotoPinchGestureRecognizer* _pinchGestureRecognizer;
	PXPinchTracker* _pinchTracker;
	UIPanGestureRecognizer* _panGestureRecognizer;
	PXSwipeDownTracker* _swipeDownTracker;
	long long _activeGesture;
	long long _operation;
	UIViewPropertyAnimator* _floatingItemsAnimator;
	id<UIViewControllerContextTransitioning> _context;
	NSArray* _floatingItems;
	PUImportOneUpTransitionItem* _manipulatedFloatingItem;
	double _startingAnimationProgress;

}

@property (nonatomic,readonly) PUPhotoPinchGestureRecognizer * pinchGestureRecognizer;              //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) PXPinchTracker * pinchTracker;                                       //@synthesize pinchTracker=_pinchTracker - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                       //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) PXSwipeDownTracker * swipeDownTracker;                               //@synthesize swipeDownTracker=_swipeDownTracker - In the implementation block
@property (assign,nonatomic) long long activeGesture;                                               //@synthesize activeGesture=_activeGesture - In the implementation block
@property (nonatomic,readonly) long long operation;                                                 //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * transitionAnimator;                           //@synthesize transitionAnimator=_transitionAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * floatingItemsAnimator;                        //@synthesize floatingItemsAnimator=_floatingItemsAnimator - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * floatingItems;                                               //@synthesize floatingItems=_floatingItems - In the implementation block
@property (nonatomic,retain) PUImportOneUpTransitionItem * manipulatedFloatingItem;                 //@synthesize manipulatedFloatingItem=_manipulatedFloatingItem - In the implementation block
@property (assign,nonatomic) double startingAnimationProgress;                                      //@synthesize startingAnimationProgress=_startingAnimationProgress - In the implementation block
+(CGSize)scaledSizeForTargetSize:(CGSize)arg1 aspectFillingIntoSize:(CGSize)arg2 ;
+(id)propertyAnimatorWithInitialVelocity:(CGVector)arg1 forOperation:(long long)arg2 inDirection:(long long)arg3 ;
+(id)transitioningObjectInViewController:(id)arg1 ;
+(double)defaultAnimationDurationForOperation:(long long)arg1 ;
-(void)pauseAnimation;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(long long)operation;
-(long long)activeGesture;
-(id<UIViewControllerContextTransitioning>)context;
-(PUPhotoPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)handleTransitionComplete:(long long)arg1 ;
-(void)prepareFloatingItemsForAnimation;
-(void)animateToPosition:(long long)arg1 ;
-(id)initWithOperation:(long long)arg1 transitionContext:(id)arg2 pinchGestureRecognizer:(id)arg3 panGestureRecognizer:(id)arg4 startsInteractive:(BOOL)arg5 ;
-(void)configureFloatingItemForInteractiveTracking;
-(void)updateTransitionWithPinchGestureRecognizer:(id)arg1 ;
-(void)endInteraction;
-(void)updateTransitionWithPanGestureRecognizer:(id)arg1 ;
-(void)handleTapHoldGesture:(id)arg1 ;
-(double)currentProgressForFloatingItem:(id)arg1 atSize:(CGSize)arg2 inDirection:(long long)arg3 ;
-(CGVector)unitVelocityForDisplayVelocity:(PXDisplayVelocity)arg1 ;
-(long long)animatingPositionForPinchTracker:(id)arg1 ;
-(UIViewPropertyAnimator *)transitionAnimator;
-(long long)animatingPositionForSwipeDownTracker:(id)arg1 ;
-(BOOL)continuousGestureRecognizerIsActive:(id)arg1 ;
-(void)setTransitionAnimator:(UIViewPropertyAnimator *)arg1 ;
-(PXPinchTracker *)pinchTracker;
-(PXSwipeDownTracker *)swipeDownTracker;
-(UIViewPropertyAnimator *)floatingItemsAnimator;
-(void)setFloatingItemsAnimator:(UIViewPropertyAnimator *)arg1 ;
-(NSArray *)floatingItems;
-(void)setFloatingItems:(NSArray *)arg1 ;
-(PUImportOneUpTransitionItem *)manipulatedFloatingItem;
-(void)setManipulatedFloatingItem:(PUImportOneUpTransitionItem *)arg1 ;
-(double)startingAnimationProgress;
-(void)setStartingAnimationProgress:(double)arg1 ;
-(void)startTransition;
-(void)setActiveGesture:(long long)arg1 ;
-(void)setContext:(id<UIViewControllerContextTransitioning>)arg1 ;
@end


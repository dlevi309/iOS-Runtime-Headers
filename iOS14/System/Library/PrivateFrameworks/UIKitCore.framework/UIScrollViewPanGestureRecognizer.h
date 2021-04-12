/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIScrollView, UIScrollViewDirectionalPressGestureRecognizer;

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	CGPoint _reconsideredLockingLocation;
	unsigned _lastLockingAxis : 2;
	unsigned _lockingAxis : 2;
	unsigned _hasParentScrollView : 1;
	unsigned _caughtDeceleratingScrollView : 1;
	unsigned _directionalLockEnabled : 1;
	unsigned _transfersTrackingFromParentScrollView : 1;
	unsigned _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered : 1;
	long long _modifierFlags;
	long long _indirectScrollingState;
	BOOL _scrollViewCanScrubWithTouch;
	BOOL _activeEventIsDiscrete;
	double _translationScaleFactor;
	UIScrollViewDirectionalPressGestureRecognizer* _directionalPressGestureRecognizer;
	double _discreteFastScrollMultiplier;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) BOOL directionalLockEnabled; 
@property (getter=_caughtDeceleratingScrollView,nonatomic,readonly) BOOL caughtDeceleratingScrollView; 
@property (getter=_beganCaughtDeceleratingScrollViewAndMoved,nonatomic,readonly) BOOL beganCaughtDeceleratingScrollViewAndMoved; 
@property (assign,nonatomic) double translationScaleFactor;                                                                                                  //@synthesize translationScaleFactor=_translationScaleFactor - In the implementation block
@property (assign,nonatomic,__weak) UIScrollViewDirectionalPressGestureRecognizer * directionalPressGestureRecognizer;                                       //@synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer - In the implementation block
@property (assign,setter=_setDiscreteFastScrollMultiplier:,getter=_discreteFastScrollMultiplier,nonatomic) double discreteFastScrollMultiplier;              //@synthesize discreteFastScrollMultiplier=_discreteFastScrollMultiplier - In the implementation block
-(CGPoint)velocityInView:(id)arg1 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(long long)_modifierFlags;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)_canTransferTrackingFromParentPagingScrollView;
-(void)_resetGestureRecognizer;
-(BOOL)isDirectionalLockEnabled;
-(BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
-(void)_setDiscreteFastScrollMultiplier:(double)arg1 ;
-(double)_hysteresis;
-(double)_discreteFastScrollMultiplier;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)_velocityIncludingDiscreteScrollInView:(id)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(BOOL)_allowsBounce;
-(void)setView:(id)arg1 ;
-(double)translationScaleFactor;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)_isParentScrollView:(id)arg1 consideringEvent:(id)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setTranslationScaleFactor:(double)arg1 ;
-(BOOL)shouldReceiveEvent:(id)arg1 ;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)_isGestureType:(long long)arg1 ;
-(BOOL)delaysTouchesBegan;
-(BOOL)_caughtDeceleratingScrollView;
-(void)_scrollingChangedWithEvent:(id)arg1 ;
-(void)_scrollViewDidEndZooming;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_beganCaughtDeceleratingScrollViewAndMoved;
-(UIScrollViewDirectionalPressGestureRecognizer *)directionalPressGestureRecognizer;
-(void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1 ;
-(BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
-(UIScrollView *)scrollView;
-(void)_beginScroll;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)setDirectionalPressGestureRecognizer:(UIScrollViewDirectionalPressGestureRecognizer *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) BOOL directionalLockEnabled; 
@property (getter=_caughtDeceleratingScrollView,nonatomic,readonly) BOOL caughtDeceleratingScrollView; 
@property (getter=_beganCaughtDeceleratingScrollViewAndMoved,nonatomic,readonly) BOOL beganCaughtDeceleratingScrollViewAndMoved; 
@property (assign,nonatomic) double translationScaleFactor;                                                                                   //@synthesize translationScaleFactor=_translationScaleFactor - In the implementation block
@property (assign,nonatomic,__weak) UIScrollViewDirectionalPressGestureRecognizer * directionalPressGestureRecognizer;                        //@synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(double)_hysteresis;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)_resetGestureRecognizer;
-(long long)_modifierFlags;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(BOOL)delaysTouchesBegan;
-(BOOL)_shouldReceiveScrollEvent:(id)arg1 ;
-(void)_scrollingChangedWithEvent:(id)arg1 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(BOOL)_caughtDeceleratingScrollView;
-(BOOL)isDirectionalLockEnabled;
-(BOOL)_beganCaughtDeceleratingScrollViewAndMoved;
-(BOOL)_allowsBounce;
-(void)_scrollViewDidEndZooming;
-(UIScrollViewDirectionalPressGestureRecognizer *)directionalPressGestureRecognizer;
-(void)setTranslationScaleFactor:(double)arg1 ;
-(void)_beginScroll;
-(BOOL)_canTransferTrackingFromParentPagingScrollView;
-(void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1 ;
-(BOOL)_isParentScrollView:(id)arg1 consideringEvent:(id)arg2 ;
-(BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
-(BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
-(double)translationScaleFactor;
-(void)setDirectionalPressGestureRecognizer:(UIScrollViewDirectionalPressGestureRecognizer *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollView, UIPanGestureRecognizer, NSArray, _UIFocusEngineJoystickGestureRecognizer, _UIDynamicValueAnimation, _UIDynamicAnimationGroup, CADisplayLink, NSTimer, _UIFocusFastScrollingIndexBarView, _UIFocusFastScrollingIndexBarEntry;

@interface _UIFocusFastScrollingController : NSObject {

	UIScrollView* _scrollView;
	UIPanGestureRecognizer* _panGesture;
	NSArray* _pressGestures;
	_UIFocusEngineJoystickGestureRecognizer* _joystickGesture;
	_UIDynamicValueAnimation* _animationX;
	_UIDynamicValueAnimation* _animationY;
	_UIDynamicAnimationGroup* _animationGroup;
	long long _style;
	CGPoint _offsetWhenPanStarted;
	CGSize _previousPanVelocity;
	unsigned long long _accelerationSwipeCount;
	double _accelerationMultiplier;
	double _accelerationStartMultiplier;
	double _accelerationLastSwipeTime;
	NSArray* _displayedEntries;
	double _initialEdgeDigitizerLocation;
	long long _initialIndexEntry;
	long long _highlightedIndexEntry;
	CGSize _initialVelocity;
	unsigned long long _heading;
	unsigned long long _allowedHeadings;
	CADisplayLink* _pressAnimationDisplayLink;
	CGSize _pressAnimationVelocity;
	CGVector _pressForce;
	double _scrollHighlight;
	NSTimer* _cooldownTimer;
	struct {
		unsigned isDragging : 1;
		unsigned isDecelerating : 1;
		unsigned isInTrackingMode : 1;
		unsigned isIndicatingDestination : 1;
		unsigned isAttemptingToStop : 1;
		unsigned isCancellingScrollAnimation : 1;
	}  _flags;
	NSArray* _indexEntries;
	_UIFocusFastScrollingIndexBarView* _indexBarView;

}

@property (nonatomic,__weak,readonly) UIScrollView * scrollView; 
@property (nonatomic,copy) NSArray * indexEntries;                                                 //@synthesize indexEntries=_indexEntries - In the implementation block
@property (nonatomic,readonly) _UIFocusFastScrollingIndexBarView * indexBarView;                   //@synthesize indexBarView=_indexBarView - In the implementation block
@property (getter=isDragging,nonatomic,readonly) BOOL dragging; 
@property (getter=isDecelerating,nonatomic,readonly) BOOL decelerating; 
@property (getter=isScrollingX,nonatomic,readonly) BOOL scrollingX; 
@property (getter=isScrollingY,nonatomic,readonly) BOOL scrollingY; 
@property (nonatomic,readonly) long long scrollingStyle; 
@property (nonatomic,readonly) _UIFocusFastScrollingIndexBarEntry * highlightedEntry; 
+(long long)indexOfEntryNearestToScrollViewBounds:(CGRect)arg1 inDisplayedEntries:(id)arg2 ;
+(id)indexBarViewForScrollView:(id)arg1 ;
+(id)controllerWithRequest:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)_start;
-(BOOL)isDragging;
-(void)_handlePanGesture:(id)arg1 ;
-(UIScrollView *)scrollView;
-(BOOL)isDecelerating;
-(void)_handleJoystickGesture:(id)arg1 ;
-(void)_resetSwipeAcceleration;
-(void)_configureWithRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)_shouldShowEntriesInIndexBar;
-(void)_stopDueToExternalEvent;
-(void)_handlePanBegin:(id)arg1 ;
-(void)_handlePanChanged:(id)arg1 ;
-(void)_handlePanEnd:(id)arg1 ;
-(void)_attemptToStop;
-(void)_startTrackingModeIfNecessary;
-(void)_stopScrollingAnimation;
-(void)_cancelCooldown;
-(void)_handleEdgePanBegin:(id)arg1 ;
-(void)_handleSwipePanBegin:(id)arg1 ;
-(void)_handleEdgePanChanged:(id)arg1 ;
-(void)_handleSwipePanChanged:(id)arg1 ;
-(void)_handleEdgePanEnd:(id)arg1 ;
-(void)_handleSwipePanEnd:(id)arg1 ;
-(void)_startEdgeGesture;
-(void)_updateEdgeGesture;
-(void)_beginCooldownWithDuration:(double)arg1 ;
-(void)_hideDestinationIndicators;
-(void)_interpretDigitzerLocation:(CGPoint)arg1 toFindEntryIndex:(long long*)arg2 deflection:(double*)arg3 ;
-(void)_updateIndexBarIndicator;
-(void)_updateSoftFocusForVelocity:(CGSize)arg1 ;
-(void)_endDraggingWithFinalVelocity:(CGSize)arg1 ;
-(void)_startScrollingAnimationWithVelocity:(CGSize)arg1 friction:(CGPoint)arg2 ;
-(CGSize)_currentScrollViewDecelerationVelocity;
-(void)_startPressDisplayLink;
-(void)_beginDeceleratingAfterPressGesture;
-(void)_pressAnimationHeartbeat:(id)arg1 ;
-(void)_resetAllPressGestures;
-(void)_setContentOffset:(CGPoint)arg1 withVelocity:(CGSize)arg2 ;
-(void)_stopPressDisplayLink;
-(void)_finishDecelerating;
-(void)_handleAnimationGroupScrollingAnimations;
-(void)_handleAnimationGroupScrollingCompletionWithInitialVelocity:(CGPoint)arg1 bounces:(BOOL)arg2 ;
-(void)_showDestinationIndicators;
-(void)_handlePressGesture:(id)arg1 ;
-(void)_beginInitialSwipeDeceleration;
-(void)_startPressTrackingWithVelocity:(CGSize)arg1 ;
-(void)_attemptToStopDueToExternalEvent:(BOOL)arg1 ;
-(void)_stopTrackingMode;
-(void)_cooldownEnded;
-(void)setIndexEntries:(NSArray *)arg1 ;
-(BOOL)isScrollingX;
-(BOOL)isScrollingY;
-(long long)scrollingStyle;
-(_UIFocusFastScrollingIndexBarEntry *)highlightedEntry;
-(NSArray *)indexEntries;
-(_UIFocusFastScrollingIndexBarView *)indexBarView;
@end


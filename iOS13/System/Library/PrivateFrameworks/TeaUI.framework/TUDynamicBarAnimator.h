/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@protocol TUDynamicBarAnimatorDelegate;
@class CADisplayLink;

@interface TUDynamicBarAnimator : NSObject {

	double _topBarHeightForState[2];
	double _bottomBarOffsetForState[2];
	BOOL _dragging;
	CADisplayLink* _displayLink;
	double _targetTopBarHeight;
	double _unroundedTopBarHeight;
	double _lastUnroundedTopBarHeight;
	BOOL _didHideBarsByMoving;
	BOOL _didHideOrShowBarsExplicitly;
	double _lastOffset;
	BOOL _inSteadyState;
	long long _state;
	double _topBarHeight;
	double _bottomBarOffset;
	double _minimumTopBarHeight;
	double _maximumBottomBarOffset;
	id<TUDynamicBarAnimatorDelegate> _delegate;

}

@property (nonatomic,readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long targetState; 
@property (nonatomic,readonly) double topBarHeight;                                         //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,readonly) double bottomBarOffset;                                      //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (assign,nonatomic) double minimumTopBarHeight;                                    //@synthesize minimumTopBarHeight=_minimumTopBarHeight - In the implementation block
@property (assign,nonatomic) double maximumBottomBarOffset;                                 //@synthesize maximumBottomBarOffset=_maximumBottomBarOffset - In the implementation block
@property (nonatomic,readonly) double maximumTopBarHeight; 
@property (nonatomic,readonly) double minimumBottomBarOffset; 
@property (assign,nonatomic,__weak) id<TUDynamicBarAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<TUDynamicBarAnimatorDelegate>)delegate;
-(void)setDelegate:(id<TUDynamicBarAnimatorDelegate>)arg1 ;
-(long long)state;
-(void)_displayLinkFired:(id)arg1 ;
-(long long)targetState;
-(void)_updateOutputs;
-(double)bottomBarOffset;
-(double)topBarHeight;
-(void)attemptTransitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)canTransitionToState:(long long)arg1 ;
-(double)_constrainTopBarHeight:(double)arg1 ;
-(void)_updateDisplayLink;
-(double)_bottomBarOffsetForTopBarHeight:(double)arg1 ;
-(void)_setInSteadyState:(BOOL)arg1 ;
-(void)_transitionToSteadyState;
-(void)_moveBarsWithDelta:(double)arg1 ;
-(void)setTopBarHeight:(double)arg1 forState:(long long)arg2 ;
-(void)setBottomBarOffset:(double)arg1 forState:(long long)arg2 ;
-(void)setMinimumTopBarHeight:(double)arg1 ;
-(double)minimumTopBarHeight;
-(void)setMaximumBottomBarOffset:(double)arg1 ;
-(double)maximumBottomBarOffset;
-(void)beginScrollingWithOffset:(double)arg1 ;
-(void)updateScrollingWithOffset:(double)arg1 ;
-(void)endScrollingWithTargetOffset:(double)arg1 velocity:(double)arg2 ;
-(double)maximumTopBarHeight;
-(double)minimumBottomBarOffset;
@end


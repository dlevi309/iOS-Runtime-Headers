/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFDynamicBarAnimatorDelegate;
@class CADisplayLink, NSPointerArray;

@interface _SFDynamicBarAnimator : NSObject {

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
	BOOL _performingBatchUpdates;
	NSPointerArray* _stateObservers;
	BOOL _sendingOutputsDidChange;
	long long _state;
	double _topBarHeight;
	double _bottomBarOffset;
	double _minimumTopBarHeight;
	id<_SFDynamicBarAnimatorDelegate> _delegate;

}

@property (nonatomic,readonly) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long targetState; 
@property (nonatomic,readonly) double topBarHeight;                                                        //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,readonly) double bottomBarOffset;                                                     //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (getter=isSendingOutputsDidChange,nonatomic,readonly) BOOL sendingOutputsDidChange;              //@synthesize sendingOutputsDidChange=_sendingOutputsDidChange - In the implementation block
@property (getter=isTrackingDrag,nonatomic,readonly) BOOL trackingDrag;                                    //@synthesize dragging=_dragging - In the implementation block
@property (assign,nonatomic) double minimumTopBarHeight;                                                   //@synthesize minimumTopBarHeight=_minimumTopBarHeight - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDynamicBarAnimatorDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(void)addObserver:(id)arg1 ;
-(void)_transitionToSteadyState;
-(id)init;
-(void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2 ;
-(long long)targetState;
-(void)setTopBarHeight:(double)arg1 forState:(long long)arg2 ;
-(id<_SFDynamicBarAnimatorDelegate>)delegate;
-(void)_moveBarsWithDelta:(double)arg1 ;
-(double)_bottomBarOffsetForTopBarHeight:(double)arg1 ;
-(double)_constrainTopBarHeight:(double)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(void)setDelegate:(id<_SFDynamicBarAnimatorDelegate>)arg1 ;
-(void)beginDraggingWithOffset:(double)arg1 ;
-(void)setBottomBarOffset:(double)arg1 forState:(long long)arg2 ;
-(double)minimumTopBarHeight;
-(BOOL)isSendingOutputsDidChange;
-(double)bottomBarOffset;
-(void)_updateOutputs;
-(BOOL)canTransitionToState:(long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)updateDraggingWithOffset:(double)arg1 ;
-(long long)state;
-(BOOL)_canTransitionToState:(long long)arg1 withMinimumTopBarHeight:(double)arg2 ;
-(double)topBarHeight;
-(void)setMinimumTopBarHeight:(double)arg1 ;
-(void)_updateDisplayLink;
-(double)_constrainTopBarHeight:(double)arg1 withMinimumTopBarHeight:(double)arg2 ;
-(void)_setInSteadyState:(BOOL)arg1 ;
-(void)endScrolling;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)attemptTransitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isTrackingDrag;
-(void)dealloc;
-(void)_endDraggingWithVelocity:(double)arg1 ;
@end


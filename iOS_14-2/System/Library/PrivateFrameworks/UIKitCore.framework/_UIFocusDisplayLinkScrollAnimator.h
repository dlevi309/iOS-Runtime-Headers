/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen, _UIFocusEngineScrollableContainerOffsets, NSMapTable, CADisplayLink, NSTimer;

@interface _UIFocusDisplayLinkScrollAnimator : NSObject {

	UIScreen* _screen;
	_UIFocusEngineScrollableContainerOffsets* _singleScrollableContainerEntry;
	NSMapTable* _scrollableContainers;
	CADisplayLink* _displayLink;
	NSTimer* _timer;
	double _lastTimerFireDate;
	double _defaultConvergenceRate;

}

@property (assign,nonatomic) double defaultConvergenceRate; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTargetContentOffset:(CGPoint)arg1 forScrollableContainer:(id)arg2 convergenceRate:(double)arg3 completion:(/*^block*/id)arg4 ;
-(CGPoint)_applyAccelerationLimitToAcceleration:(CGPoint)arg1 currentOffset:(CGPoint)arg2 targetOffset:(CGPoint)arg3 ;
-(CGPoint)targetContentOffsetForScrollableContainer:(id)arg1 ;
-(void)_timerHeartbeat:(id)arg1 ;
-(id)_entryForScrollableContainer:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_updateHeartbeatConfiguration;
-(BOOL)_canCreateDisplayLink;
-(BOOL)_shouldPushAndPopRunLoopModes;
-(void)_displayLinkHeartbeat:(id)arg1 ;
-(void)_commonHeartbeat:(double)arg1 ;
-(void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3 ;
-(double)defaultConvergenceRate;
-(void)setDefaultConvergenceRate:(double)arg1 ;
-(BOOL)isAnimatingScrollableContainer:(id)arg1 ;
-(void)_switchToTimerScrolling;
-(CGPoint)currentVelocityForScrollableContainer:(id)arg1 ;
-(CGPoint)velocityToScrollFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 ;
-(id)initWithScreen:(id)arg1 ;
-(void)cancelScrollingForScrollableContainer:(id)arg1 ;
-(void)dealloc;
@end


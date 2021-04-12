/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray;

@interface UIAnimator : NSObject {

	NSMutableArray* _animations;
	double _lastUpdateTime;
	id _heartbeat[3];
	int _heartbeatClientCount[3];

}
+(void)enableAnimation;
+(void)disableAnimation;
+(id)sharedAnimator;
-(void)stopAnimation:(id)arg1 ;
-(BOOL)_isRunningAnimation:(id)arg1 ;
-(void)startAnimation:(id)arg1 ;
-(void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2 ;
-(void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 ;
-(void)_startAnimation:(id)arg1 withStartTime:(double)arg2 ;
-(void)_TVHeartbeatCallback:(id)arg1 ;
-(void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2 ;
-(void)_LCDHeartbeatCallback:(id)arg1 ;
-(void)_TimerHeartbeatCallback:(id)arg1 ;
-(void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 startTime:(double)arg4 ;
-(void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 ;
-(void)dealloc;
-(void)removeAnimationsForTarget:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDAutoscrollDelegate;
#import <TSReading/TSReading-Structs.h>
@class NSObject, NSTimer;

@interface TSDAutoscroll : NSObject {

	NSObject*<TSDAutoscrollDelegate> mTarget;
	CGPoint mPoint;
	int mDirections;
	double mRepeatInterval;
	NSTimer* mTimer;
	unsigned long long mCount;
	BOOL mActive;
	CGPoint mLastAutoscrollDelta;
	double mLastFired;
	BOOL mTargetIsAutoscrolling;

}

@property (nonatomic,retain) NSObject*<TSDAutoscrollDelegate> target; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL targetIsAutoscrolling; 
@property (nonatomic,readonly) CGPoint lastAutoscrollDelta; 
+(void)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)invalidate;
-(void)setTarget:(NSObject*<TSDAutoscrollDelegate>)arg1 ;
-(NSObject*<TSDAutoscrollDelegate>)target;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(double)repeatInterval;
-(BOOL)active;
-(void)timerFired:(id)arg1 ;
-(void)setRepeatInterval:(double)arg1 ;
-(int)directions;
-(void)setDirections:(int)arg1 ;
-(void)p_cleanup;
-(BOOL)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 directions:(int)arg3 repeatInterval:(double)arg4 ;
-(BOOL)targetIsAutoscrolling;
-(unsigned long long)p_deltaForCount:(unsigned long long)arg1 ;
-(void)setTargetIsAutoscrolling:(BOOL)arg1 ;
-(CGPoint)lastAutoscrollDelta;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface NUScheduledQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSMutableArray* _items;
	double _timerLeeway;
	double _timerCoalesce;

}

@property (assign) double timerLeeway;                //@synthesize timerLeeway=_timerLeeway - In the implementation block
@property (assign) double timerCoalesce;              //@synthesize timerCoalesce=_timerCoalesce - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_startTimer;
-(void)_stopTimer;
-(void)_timerFired;
-(void)_scheduleTimer:(unsigned long long)arg1 ;
-(void)_dispatchItemsThrough:(unsigned long long)arg1 ;
-(void)dispatchAfter:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchAt:(unsigned long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(double)timerLeeway;
-(void)setTimerLeeway:(double)arg1 ;
-(double)timerCoalesce;
-(void)setTimerCoalesce:(double)arg1 ;
@end


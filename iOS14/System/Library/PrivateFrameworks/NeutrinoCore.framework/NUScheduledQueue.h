/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_timerFired;
-(void)_stopTimer;
-(void)_startTimer;
-(void)_scheduleTimer:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_dispatchItemsThrough:(unsigned long long)arg1 ;
-(void)dispatchAfter:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchAt:(unsigned long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(double)timerLeeway;
-(void)setTimerLeeway:(double)arg1 ;
-(double)timerCoalesce;
-(void)setTimerCoalesce:(double)arg1 ;
@end


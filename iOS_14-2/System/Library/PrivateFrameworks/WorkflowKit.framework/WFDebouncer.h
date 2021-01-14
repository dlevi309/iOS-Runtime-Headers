/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable;

@interface WFDebouncer : NSObject {

	double _delay;
	double _maximumDelay;
	id _userInfo;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _targetTable;
	NSObject*<OS_dispatch_source> _delayTimer;
	NSObject*<OS_dispatch_source> _maximumDelayTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMapTable * targetTable;                                   //@synthesize targetTable=_targetTable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> delayTimer;                     //@synthesize delayTimer=_delayTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> maximumDelayTimer;              //@synthesize maximumDelayTimer=_maximumDelayTimer - In the implementation block
@property (nonatomic,readonly) double delay;                                               //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double maximumDelay;                                        //@synthesize maximumDelay=_maximumDelay - In the implementation block
@property (nonatomic,readonly) id userInfo;                                                //@synthesize userInfo=_userInfo - In the implementation block
-(id)userInfo;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(NSObject*<OS_dispatch_source>)maximumDelayTimer;
-(void)fire;
-(id)initWithDelay:(double)arg1 maximumDelay:(double)arg2 queue:(id)arg3 ;
-(void)restartDelayTimer;
-(void)resetMaximumDelayTimer;
-(id)initWithDelay:(double)arg1 maximumDelay:(double)arg2 queue:(id)arg3 userInfo:(id)arg4 ;
-(double)delay;
-(void)setDelayTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)startMaximumDelayTimerIfNecessary;
-(void)poke;
-(NSMapTable *)targetTable;
-(void)setMaximumDelayTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)maximumDelay;
-(id)initWithDelay:(double)arg1 queue:(id)arg2 ;
-(void)resetDelayTimer;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(NSObject*<OS_dispatch_source>)delayTimer;
@end


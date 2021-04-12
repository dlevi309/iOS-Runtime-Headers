/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable;

@interface WFDebouncer : NSObject {

	double _delay;
	double _maximumDelay;
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
-(NSObject*<OS_dispatch_queue>)queue;
-(void)fire;
-(double)delay;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(NSMapTable *)targetTable;
-(id)initWithDelay:(double)arg1 queue:(id)arg2 ;
-(id)initWithDelay:(double)arg1 maximumDelay:(double)arg2 queue:(id)arg3 ;
-(void)resetDelayTimer;
-(void)resetMaximumDelayTimer;
-(void)restartDelayTimer;
-(void)startMaximumDelayTimerIfNecessary;
-(void)poke;
-(double)maximumDelay;
-(NSObject*<OS_dispatch_source>)delayTimer;
-(void)setDelayTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)maximumDelayTimer;
-(void)setMaximumDelayTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end


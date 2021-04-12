/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileIcons.framework/MobileIcons
*/


@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;
@class NSObject;

@interface LICacheClearScheduler : NSObject {

	BOOL _timerFired;
	BOOL _holdTransaction;
	id _object;
	double _delay;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_source> _memoryPreasure;
	unsigned long long _memoryPreasureState;
	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _clearHandler;

}

@property (retain) NSObject*<OS_dispatch_source> timer;                       //@synthesize timer=_timer - In the implementation block
@property (assign) BOOL timerFired;                                           //@synthesize timerFired=_timerFired - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> memoryPreasure;              //@synthesize memoryPreasure=_memoryPreasure - In the implementation block
@property (assign) unsigned long long memoryPreasureState;                    //@synthesize memoryPreasureState=_memoryPreasureState - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;                  //@synthesize transaction=_transaction - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL holdTransaction;                                      //@synthesize holdTransaction=_holdTransaction - In the implementation block
@property (readonly) id clearHandler;                                         //@synthesize clearHandler=_clearHandler - In the implementation block
@property (readonly) id object;                                               //@synthesize object=_object - In the implementation block
@property (assign) double delay;                                              //@synthesize delay=_delay - In the implementation block
+(id)transactionDescription:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)object;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(BOOL)timerFired;
-(void)setTimerFired:(BOOL)arg1 ;
-(void)_queue_clearCache;
-(NSObject*<OS_dispatch_source>)memoryPreasure;
-(void)setMemoryPreasureState:(unsigned long long)arg1 ;
-(void)setMemoryPreasure:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)clearHandler;
-(id)initWithObject:(id)arg1 delay:(double)arg2 holdTransaction:(BOOL)arg3 clearHandler:(/*^block*/id)arg4 ;
-(unsigned long long)memoryPreasureState;
-(BOOL)holdTransaction;
-(void)setHoldTransaction:(BOOL)arg1 ;
@end


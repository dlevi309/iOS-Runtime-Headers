/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface _UIKBRTTimerBlock : NSObject {

	NSObject*<OS_dispatch_queue> _selfQueue;
	NSTimer* _timer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _onTimer;
	id _owner;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> selfQueue;              //@synthesize selfQueue=_selfQueue - In the implementation block
@property (nonatomic,readonly) NSTimer * timer;                                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id onTimer;                                     //@synthesize onTimer=_onTimer - In the implementation block
@property (nonatomic,readonly) id owner;                                            //@synthesize owner=_owner - In the implementation block
-(NSTimer *)timer;
-(id)owner;
-(void)fireNow;
-(id)onTimer;
-(id)initWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(/*^block*/id)arg3 owner:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)selfQueue;
-(void)timerFired:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end


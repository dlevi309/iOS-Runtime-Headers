/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSString, PCPersistentTimer;

@interface RTPersistentTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	double _interval;
	NSDate* _fireDate;
	NSString* _serviceIdentifier;
	/*^block*/id _handler;
	PCPersistentTimer* _timer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double interval;                                 //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSDate * fireDate;                               //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) PCPersistentTimer * timer;                       //@synthesize timer=_timer - In the implementation block
-(NSDate *)fireDate;
-(PCPersistentTimer *)timer;
-(void)setInterval:(double)arg1 ;
-(void)setTimer:(PCPersistentTimer *)arg1 ;
-(void)setFireDate:(NSDate *)arg1 ;
-(double)interval;
-(void)setHandler:(id)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)_startTimer;
-(void)_invalidateTimer;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 serviceIdentifier:(id)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_onTimerFired:(id)arg1 ;
-(void)_setupNextTimer;
-(id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end


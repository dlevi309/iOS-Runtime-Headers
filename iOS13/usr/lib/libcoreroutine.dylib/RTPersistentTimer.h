/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(PCPersistentTimer *)timer;
-(void)setTimer:(PCPersistentTimer *)arg1 ;
-(void)_invalidateTimer;
-(void)_startTimer;
-(NSString *)serviceIdentifier;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 serviceIdentifier:(id)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_onTimerFired:(id)arg1 ;
-(void)_setupNextTimer;
-(id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end


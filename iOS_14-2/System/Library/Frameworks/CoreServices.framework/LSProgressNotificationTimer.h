/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer, NSDate, NSMutableSet;

@interface LSProgressNotificationTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSTimer* _timer;
	NSDate* _lastFiredDate;
	NSMutableSet* _applications;
	double _minInterval;
	double _latency;
	SEL _appObserverSelector;

}

@property (nonatomic,retain) NSTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * lastFiredDate;                   //@synthesize lastFiredDate=_lastFiredDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * applications;              //@synthesize applications=_applications - In the implementation block
@property (nonatomic,readonly) double minInterval;                     //@synthesize minInterval=_minInterval - In the implementation block
@property (nonatomic,readonly) double latency;                         //@synthesize latency=_latency - In the implementation block
@property (assign) SEL appObserverSelector;                            //@synthesize appObserverSelector=_appObserverSelector - In the implementation block
-(void)clear;
-(id)initWithQueue:(id)arg1 ;
-(double)minInterval;
-(NSDate *)lastFiredDate;
-(void)setLastFiredDate:(NSDate *)arg1 ;
-(void)addApplication:(id)arg1 ;
-(void)notifyObservers:(id)arg1 withApplications:(id)arg2 ;
-(SEL)appObserverSelector;
-(void)setAppObserverSelector:(SEL)arg1 ;
-(void)removeApplication:(id)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)setApplications:(NSMutableSet *)arg1 ;
-(void)stopTimer;
-(NSMutableSet *)applications;
-(id)description;
-(double)latency;
-(void)dealloc;
@end


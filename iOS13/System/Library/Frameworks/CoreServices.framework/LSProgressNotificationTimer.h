/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)clear;
-(id)initWithQueue:(id)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSMutableSet *)applications;
-(void)stopTimer;
-(void)addApplication:(id)arg1 ;
-(NSDate *)lastFiredDate;
-(double)minInterval;
-(double)latency;
-(void)sendMessage:(id)arg1 ;
-(void)setLastFiredDate:(NSDate *)arg1 ;
-(void)removeApplication:(id)arg1 ;
-(void)notifyObservers:(id)arg1 withApplications:(id)arg2 ;
-(void)setApplications:(NSMutableSet *)arg1 ;
-(SEL)appObserverSelector;
-(void)setAppObserverSelector:(SEL)arg1 ;
@end


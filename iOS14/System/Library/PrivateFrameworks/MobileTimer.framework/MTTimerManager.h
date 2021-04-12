/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTTimerManagerIntentSupport.h>
#import <libobjc.A.dylib/MTTimerManagerProviding.h>
#import <libobjc.A.dylib/MTUserDefaultNotificationObserver.h>

@class NSNotificationCenter, MTTimerManagerExportedObject, MTXPCConnectionProvider, MTMetrics, MTTimerCache, NSString;

@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver> {

	MTTimerManagerExportedObject* _exportedObject;
	MTXPCConnectionProvider* _connectionProvider;
	MTMetrics* _metrics;
	MTTimerCache* _cache;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<MTTimerManagerIntentSupport> timerManager; 
@property (nonatomic,retain) MTTimerManagerExportedObject * exportedObject;               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,readonly) MTXPCConnectionProvider * connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (nonatomic,retain) MTMetrics * metrics;                                         //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) MTTimerCache * cache;                                        //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                   //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id notificationObject; 
+(void)warmUp;
+(void)setDefaultDuration:(double)arg1 ;
+(double)defaultDuration;
-(void)setExportedObject:(MTTimerManagerExportedObject *)arg1 ;
-(void)setMetrics:(MTMetrics *)arg1 ;
-(void)reconnect;
-(MTMetrics *)metrics;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(id)nextTimer;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(void)checkIn;
-(id)getCurrentTimerSync;
-(MTTimerCache *)cache;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(MTTimerManagerExportedObject *)exportedObject;
-(BOOL)stopCurrentTimerSync;
-(void)setCache:(MTTimerCache *)arg1 ;
-(BOOL)startCurrentTimerWithDurationSync:(double)arg1 ;
-(BOOL)pauseCurrentTimerSync;
-(id)currentTimer;
-(id)startCurrentTimerWithDuration:(double)arg1 ;
-(id)initWithMetrics:(id)arg1 ;
-(void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(id)resumeCurrentTimer;
-(id<MTTimerManagerIntentSupport>)timerManager;
-(id)timers;
-(id)_validateCanStartTimer:(id)arg1 ;
-(id)repeatTimerWithIdentifier:(id)arg1 ;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(id)removeTimer:(id)arg1 ;
-(id)_updateTimer:(id)arg1 doSynchronous:(BOOL)arg2 ;
-(id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)_runningTimerFromCurrentTimer:(id)arg1 withDuration:(double)arg2 ;
-(BOOL)resumeCurrentTimerSync;
-(id)pauseCurrentTimer;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 ;
-(id)stopCurrentTimer;
-(BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)arg1 ;
-(id)_updateCurrentTimerWithState:(unsigned long long)arg1 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 ;
-(id)addTimer:(id)arg1 ;
-(MTXPCConnectionProvider *)connectionProvider;
-(id)updateTimer:(id)arg1 ;
-(id)timersSync;
-(id)notificationObject;
-(void)dealloc;
-(id)dismissTimerWithIdentifier:(id)arg1 ;
@end


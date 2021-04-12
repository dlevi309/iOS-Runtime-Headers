/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(double)defaultDuration;
+(void)warmUp;
+(void)setDefaultDuration:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)checkIn;
-(void)setExportedObject:(MTTimerManagerExportedObject *)arg1 ;
-(MTTimerManagerExportedObject *)exportedObject;
-(MTMetrics *)metrics;
-(void)setCache:(MTTimerCache *)arg1 ;
-(MTTimerCache *)cache;
-(void)setMetrics:(MTMetrics *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(id)initWithMetrics:(id)arg1 ;
-(void)reconnect;
-(id)notificationObject;
-(id)timers;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(MTXPCConnectionProvider *)connectionProvider;
-(id)nextTimer;
-(id)addTimer:(id)arg1 ;
-(id)updateTimer:(id)arg1 ;
-(id)removeTimer:(id)arg1 ;
-(id)currentTimer;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 ;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(id)_updateTimer:(id)arg1 doSynchronous:(BOOL)arg2 ;
-(id)_updateCurrentTimerWithState:(unsigned long long)arg1 ;
-(id)_validateCanStartTimer:(id)arg1 ;
-(id)_runningTimerFromCurrentTimer:(id)arg1 withDuration:(double)arg2 ;
-(id)timersSync;
-(id)getCurrentTimerSync;
-(BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)arg1 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)dismissTimerWithIdentifier:(id)arg1 ;
-(id)repeatTimerWithIdentifier:(id)arg1 ;
-(id)stopCurrentTimer;
-(id)pauseCurrentTimer;
-(id)resumeCurrentTimer;
-(id)startCurrentTimerWithDuration:(double)arg1 ;
-(BOOL)startCurrentTimerWithDurationSync:(double)arg1 ;
-(BOOL)stopCurrentTimerSync;
-(BOOL)pauseCurrentTimerSync;
-(BOOL)resumeCurrentTimerSync;
-(id<MTTimerManagerIntentSupport>)timerManager;
@end


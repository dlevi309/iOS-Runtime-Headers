/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNTimeballInternalProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_source, MNRouteRefreshPolicySchedulerTimedActivity;
@class NSMutableDictionary, MNTimeballRoutingProvider, NSDate, NSObject, MNTimeballCache, MNTimeballLocationManager, MNXPCTransactionCounter, MNObserverHashTable, NSString;

@interface MNRouteRefreshPolicyScheduler : NSObject <MNTimeballInternalProvider> {

	NSMutableDictionary* _refreshPolicyByDestination;
	NSMutableDictionary* _optionsByDestination;
	NSMutableDictionary* _auditTokenByDestination;
	os_unfair_lock_s _lock;
	MNTimeballRoutingProvider* _routingProvider;
	NSDate* _deferredRefreshDate;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSObject*<OS_dispatch_source> _deferTimer;
	MNTimeballCache* _cache;
	MNTimeballLocationManager* _locationManager;
	MNXPCTransactionCounter* _transactionCounter;
	MNObserverHashTable* _observers;
	/*^block*/id _refreshCompletion;
	double _tolerance;
	id<MNRouteRefreshPolicySchedulerTimedActivity> _timedActivity;

}

@property (nonatomic,copy) id refreshCompletion;                                                        //@synthesize refreshCompletion=_refreshCompletion - In the implementation block
@property (assign,nonatomic) double tolerance;                                                          //@synthesize tolerance=_tolerance - In the implementation block
@property (nonatomic,retain) id<MNRouteRefreshPolicySchedulerTimedActivity> timedActivity;              //@synthesize timedActivity=_timedActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(double)tolerance;
-(id)init;
-(void)setTolerance:(double)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)scheduleUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4 ;
-(void)unscheduleUpdateForDestination:(id)arg1 ;
-(void)_performDeferredRefresh;
-(void)_handleSchedulingUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4 ;
-(void)_handleSchedulingThisDestinationAndRefreshAllDestinations:(id)arg1 nextRefreshDate:(id)arg2 ;
-(void)_scheduleNextRefreshDateForDestination:(id)arg1 routeUpdate:(id)arg2 fromDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_refreshAllDestinationsAtDate:(id)arg1 ;
-(void)_deferRefreshForScheduledDestinationsAfter:(id)arg1 ;
-(void)_updateNextRefreshDate:(id)arg1 destination:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_enterActiveWorkload;
-(void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2 ;
-(void)_leaveActiveWorkload;
-(void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2 userLocation:(id)arg3 ;
-(void)_handleCompletionOfRefresh;
-(id)refreshCompletion;
-(id)_refreshPolicyForDestination:(id)arg1 ;
-(double)_timeIntervalForRefreshOfDestination:(id)arg1 routeUpdate:(id)arg2 atDate:(id)arg3 ;
-(id)_newActivityFromRefreshPolicyRules:(id)arg1 ;
-(id<MNRouteRefreshPolicySchedulerTimedActivity>)timedActivity;
-(void)setTimedActivity:(id<MNRouteRefreshPolicySchedulerTimedActivity>)arg1 ;
-(id)initWithRoutingProvider:(id)arg1 cache:(id)arg2 locationManager:(id)arg3 ;
-(void)refreshScheduledDestinations;
-(void)setRefreshCompletion:(id)arg1 ;
@end

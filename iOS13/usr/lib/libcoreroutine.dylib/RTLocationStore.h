/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTStore.h>

@protocol OS_os_transaction;
@class RTTimerManager, NSObject, NSMutableArray, RTTimer;

@interface RTLocationStore : RTStore {

	RTTimerManager* _timerManager;
	NSObject*<OS_os_transaction> _flushTransaction;
	NSMutableArray* _locations;
	RTTimer* _flushTimer;

}

@property (nonatomic,readonly) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) RTTimer * flushTimer;                    //@synthesize flushTimer=_flushTimer - In the implementation block
-(id)init;
-(NSMutableArray *)locations;
-(RTTimer *)flushTimer;
-(void)_shutdown;
-(void)fetchStoredLocationsWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithPersistenceManager:(id)arg1 ;
-(void)fetchMetricsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchStoredLocationsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)_storeLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)_fetchStoredLocationsWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchStoredLocationsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeLocationsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeLocationsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithPersistenceManager:(id)arg1 timerManager:(id)arg2 ;
-(void)_shutdownWithHandler:(/*^block*/id)arg1 ;
-(void)_flushCachedLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)_invalidateFlushTimer;
-(void)_startFlushTimer;
-(void)_fetchMetricsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
@end


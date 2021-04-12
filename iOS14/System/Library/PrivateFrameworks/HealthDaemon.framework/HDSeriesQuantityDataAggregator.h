/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDActiveQuantityDataAggregator.h>

@class NSMutableSet;

@interface HDSeriesQuantityDataAggregator : HDActiveQuantityDataAggregator {

	os_unfair_lock_s _lock;
	NSMutableSet* _lock_failedSeriesUUIDs;

}
+(void)_checkForOverlapWithSeries:(id)arg1 lastDatum:(id)arg2 provenance:(id)arg3 profile:(id)arg4 ;
+(id)_anySampleThatOverlapsWithSeries:(id)arg1 lastDatum:(id)arg2 provenance:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
-(void)_failSeriesWithUUID:(id)arg1 ;
-(id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 options:(unsigned long long)arg6 error:(id*)arg7 ;
-(BOOL)shouldFreezeCurrentSeries:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 configuration:(id)arg4 aggregationInterval:(double)arg5 ;
-(id)_codableDatumsFromData:(id)arg1 ;
-(id)initialAggregationState;
-(BOOL)_successForPersistenceError:(id)arg1 series:(id)arg2 error:(id*)arg3 ;
-(id)_startSeriesWithDatum:(id)arg1 device:(id)arg2 ;
-(BOOL)_hasFailedSeriesWithUUID:(id)arg1 ;
-(BOOL)requiresNewSeriesForDatum:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 currentSeries:(id)arg4 configuration:(id)arg5 aggregationInterval:(double)arg6 ;
-(id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2 ;
-(void)addDatum:(id)arg1 toAccumulatedData:(id)arg2 ;
-(id)_validatedState:(id)arg1 ;
@end


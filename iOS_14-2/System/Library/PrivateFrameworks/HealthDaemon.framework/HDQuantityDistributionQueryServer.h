/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class _HKQuantityDistributionQueryServerConfiguration;

@interface HDQuantityDistributionQueryServer : HDQueryServer {

	_HKQuantityDistributionQueryServerConfiguration* _quantityDistributionQueryServerConfiguration;

}

@property (nonatomic,copy,readonly) _HKQuantityDistributionQueryServerConfiguration * quantityDistributionQueryServerConfiguration;              //@synthesize quantityDistributionQueryServerConfiguration=_quantityDistributionQueryServerConfiguration - In the implementation block
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(id)_queue_fetchHistogramDataWithError:(id*)arg1 ;
-(id)_buildStatisticsCollectionCalculatorForAverageAndDuration;
-(id)_intervalsForContextStyle:(long long)arg1 includeContextIdentifiers:(BOOL)arg2 errorOut:(id*)arg3 ;
-(id)_sqlitePredicateForObjectType:(id)arg1 errorOut:(id*)arg2 ;
-(BOOL)_walkSampleValuesWithPredicate:(id)arg1 errorOut:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(id)_combineDistributionResults:(id)arg1 withIntersectingDateIntervals:(id)arg2 ;
-(id)_combineDistributionResults:(id)arg1 withAverageAndDurations:(id)arg2 bucketUnits:(id)arg3 ;
-(id)_mindfulnessPredicateWithErrorOut:(id*)arg1 ;
-(id)_walkSampleDatesWithPredicate:(id)arg1 entityClass:(Class)arg2 errorOut:(id*)arg3 ;
-(id)_workoutPredicateWithErrorOut:(id*)arg1 ;
-(id)_categoryPredicateWithTypeCode:(long long)arg1 matchingValue:(id)arg2 errorOut:(id*)arg3 ;
-(id)_walkSampleDatesWithPredicate:(id)arg1 entityClass:(Class)arg2 includeUUID:(BOOL)arg3 errorOut:(id*)arg4 ;
-(_HKQuantityDistributionQueryServerConfiguration *)quantityDistributionQueryServerConfiguration;
@end


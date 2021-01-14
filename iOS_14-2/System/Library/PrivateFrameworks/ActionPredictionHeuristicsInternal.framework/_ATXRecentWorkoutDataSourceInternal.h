/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class HKHealthStore, HKObserverQuery;

@interface _ATXRecentWorkoutDataSourceInternal : NSObject {

	HKHealthStore* _healthStore;
	HKObserverQuery* _query;

}
+(id)sharedInstance;
-(id)init;
-(void)_runQueryForLastWorkout:(/*^block*/id)arg1 ;
@end


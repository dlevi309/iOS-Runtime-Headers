/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class HKHealthStore, PPSQLDatabase;

@interface PPHealthKitImporter : NSObject {

	HKHealthStore* _healthStore;
	PPSQLDatabase* _db;

}
+(BOOL)_shouldImport;
+(id)_workoutTopicMap;
-(id)init;
-(id)initWithDatabase:(id)arg1 ;
-(void)importHealthKitData;
-(void)importHealthKitDataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(void)_importWorkouts:(id)arg1 ;
-(void)_donateTopics:(id)arg1 workout:(id)arg2 ;
-(void)_removeDeletedWorkouts:(id)arg1 ;
-(id)_scoredTopicsFromPropertiesOfWorkouts:(id)arg1 workoutTopicMap:(id)arg2 ;
-(id)_getSavedAnchor;
-(BOOL)_saveAnchor:(id)arg1 ;
@end


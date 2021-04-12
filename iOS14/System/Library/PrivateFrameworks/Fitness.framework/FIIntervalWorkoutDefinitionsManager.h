/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class NPSDomainAccessor, NPSManager, NSMutableDictionary;

@interface FIIntervalWorkoutDefinitionsManager : NSObject {

	NPSDomainAccessor* _domainAccessor;
	NPSManager* _syncManager;
	NSMutableDictionary* _rootIntervalWorkoutDefinitions;

}
-(id)init;
-(void)_checkVersion;
-(void)loadIntervalWorkoutDefinitions;
-(void)_saveDefaultIntervalWorkouts;
-(id)_deserializeIntervalWorkoutDefinitions:(id)arg1 ;
-(id)_serializeRootIntervalWorkoutDefinitions:(id)arg1 ;
-(void)_saveRootIntervalWorkoutDefinitions:(id)arg1 ;
-(void)_updateIntervalWorkoutDefinition:(id)arg1 activityTypeIdentifier:(id)arg2 ;
-(void)_serializeAndSaveRootIntervalWorkoutDefinitions:(id)arg1 ;
-(void)_trimRootIntervalWorkoutDefinitions:(id)arg1 ;
-(id)_defaultUserIntervalWorkouts;
-(id)_mockQuarterMileSprints;
-(id)_mockVariedSpeed;
-(id)_mockHIIT3010;
-(void)saveIntervalWorkoutDefinition:(id)arg1 activityTypeIdentifier:(id)arg2 ;
-(void)removeIntervalWorkoutDefinitionAtIndex:(long long)arg1 activityTypeIdentifier:(id)arg2 ;
-(id)intervalWorkoutDefinitionsForActivityTypeIdentifier:(id)arg1 ;
@end


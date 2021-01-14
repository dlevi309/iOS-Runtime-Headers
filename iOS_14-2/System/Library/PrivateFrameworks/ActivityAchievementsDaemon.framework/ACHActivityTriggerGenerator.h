/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


#import <ActivityAchievementsDaemon/ActivityAchievementsDaemon-Structs.h>
@interface ACHActivityTriggerGenerator : NSObject
+(unsigned long long)allPossibleTriggers;
-(unsigned long long)_triggersForNewActivityDataWithGoalType:(long long)arg1 dataProvider:(id)arg2 goalMetHandler:(/*^block*/id)arg3 ;
-(SCD_Struct_AC5)_incrementWithInitialState:(SCD_Struct_AC5)arg1 forGoalType:(long long)arg2 dataProvider:(id)arg3 goalMetHandler:(/*^block*/id)arg4 ;
-(BOOL)_goalTypeIsMoveType:(long long)arg1 ;
-(unsigned long long)triggersForNewMoveDataWithDataProvider:(id)arg1 ;
-(unsigned long long)triggersForNewMoveTimeDataWithDataProvider:(id)arg1 ;
-(unsigned long long)triggersForNewExerciseDataWithDataProvider:(id)arg1 ;
-(unsigned long long)triggersForNewStandDataWithDataProvider:(id)arg1 ;
@end


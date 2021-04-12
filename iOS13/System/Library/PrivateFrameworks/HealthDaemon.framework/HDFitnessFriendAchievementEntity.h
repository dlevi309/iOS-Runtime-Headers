/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSampleEntity.h>

@interface HDFitnessFriendAchievementEntity : HDSampleEntity
+(long long)protectionClass;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(BOOL)isConcreteEntity;
+(id)HDDataEntityPredicateForFriendUUID:(id)arg1 ;
+(id)samplesAfterAnchor:(id*)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)samplesForFriend:(id)arg1 anchor:(id*)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateAchievementsWithPredicate:(id)arg1 anchor:(id*)arg2 profile:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
@end


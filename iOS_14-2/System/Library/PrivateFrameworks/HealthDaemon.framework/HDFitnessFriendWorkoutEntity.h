/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSampleEntity.h>

@interface HDFitnessFriendWorkoutEntity : HDSampleEntity
+(id)databaseTable;
+(BOOL)isConcreteEntity;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(long long)protectionClass;
+(BOOL)enumerateWorkoutsWithPredicate:(id)arg1 anchor:(id*)arg2 profile:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
@end


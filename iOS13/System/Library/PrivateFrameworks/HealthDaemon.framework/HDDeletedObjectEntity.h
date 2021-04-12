/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataEntity.h>

@interface HDDeletedObjectEntity : HDDataEntity
+(BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(long long)preferredEntityType;
+(id)insertDeletedObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)deleteObjectsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)deletedObjectEntityForDeletedObject:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(Class)baseDataEntityClass;
+(BOOL)requiresSampleTypePredicate;
@end


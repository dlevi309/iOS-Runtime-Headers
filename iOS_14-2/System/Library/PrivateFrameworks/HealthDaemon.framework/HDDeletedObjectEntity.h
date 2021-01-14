/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataEntity.h>

@interface HDDeletedObjectEntity : HDDataEntity
+(BOOL)requiresSampleTypePredicate;
+(BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)insertDeletedObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)deleteObjectsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)deletedObjectEntityForDeletedObject:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(long long)preferredEntityType;
+(Class)baseDataEntityClass;
@end


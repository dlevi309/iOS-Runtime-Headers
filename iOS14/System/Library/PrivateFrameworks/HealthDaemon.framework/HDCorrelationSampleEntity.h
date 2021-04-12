/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity
+(BOOL)isConcreteEntity;
+(id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg1 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(BOOL)acceptsObject:(id)arg1 ;
+(id)_objectsWithIDs:(id)arg1 profile:(id)arg2 ;
+(BOOL)isBackedByTable;
+(id)createTableSQL;
+(BOOL)requiresSampleTypePredicate;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)createTableSQL;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(BOOL)isConcreteEntity;
+(BOOL)requiresSampleTypePredicate;
+(BOOL)isBackedByTable;
+(BOOL)acceptsObject:(id)arg1 ;
+(id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1 ;
+(id)_objectsWithIDs:(id)arg1 profile:(id)arg2 ;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
@end


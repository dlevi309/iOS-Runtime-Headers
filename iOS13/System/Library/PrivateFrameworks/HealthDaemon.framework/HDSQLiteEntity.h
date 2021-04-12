/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSQLiteEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDSQLiteEntity : NSObject <HDSQLiteEntity, NSCopying> {

	long long _persistentID;

}

@property (nonatomic,readonly) long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)databaseName;
+(id)indices;
+(id)foreignKeys;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(BOOL)isTemporary;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)checkConstraints;
+(id)joinClausesForProperty:(id)arg1 ;
+(void)enumerateColumnsWithBlock:(/*^block*/id)arg1 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 orderingTerms:(id)arg4 groupBy:(id)arg5 ;
+(id)insertOrReplaceEntity:(BOOL)arg1 database:(id)arg2 properties:(id)arg3 error:(id*)arg4 bindingHandler:(/*^block*/id)arg5 ;
+(id)createTableSQL;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)disambiguatedDatabaseTable;
+(id)uniquedColumns;
+(id)firstInDatabase:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 error:(id*)arg4 ;
+(BOOL)deleteEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(id)insertSQLForProperties:(id)arg1 shouldReplace:(BOOL)arg2 ;
+(id)privateSubEntities;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(id)deleteStatementWithProperty:(id)arg1 database:(id)arg2 ;
+(id)tableAliases;
+(Class)entityClassForEnumeration;
+(id)orderingTermForSortDescriptor:(id)arg1 ;
+(BOOL)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 orderingTerms:(id)arg5 limit:(long long)arg6 database:(id)arg7 error:(id*)arg8 enumerationHandler:(/*^block*/id)arg9 ;
+(id)distinctProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)entityWithPersistentID:(id)arg1 ;
+(id)maxPersistentIDWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(Class)entityForProperty:(id)arg1 ;
+(id)allDatabaseColumnNames;
+(id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)additionalPredicateForEnumeration;
+(id)updateSQLForPropertiesOnEntity:(id)arg1 ;
+(id)updateSQLForProperties:(id)arg1 predicate:(id)arg2 ;
+(id)_generateDisambiguatedDatabaseTableName;
+(void)_enumerateColumnDefinitionsWithBlock:(/*^block*/id)arg1 ;
+(void)_enumerateColumnNamesWithBlock:(/*^block*/id)arg1 ;
+(id)_copyDeleteSQLWithTableName:(id)arg1 columnName:(id)arg2 ;
+(BOOL)updateProperties:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 bindingHandler:(/*^block*/id)arg5 ;
+(id)countValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 database:(id)arg5 error:(id*)arg6 ;
+(id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)countDistinctForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)persistentID;
-(id)initWithPersistentID:(long long)arg1 ;
-(BOOL)getValuesForProperties:(id)arg1 database:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)getValuesForProperties:(id)arg1 database:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)valueForProperty:(id)arg1 database:(id)arg2 ;
-(BOOL)existsInDatabase:(id)arg1 ;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)booleanForProperty:(id)arg1 database:(id)arg2 ;
-(id)dateForProperty:(id)arg1 database:(id)arg2 ;
-(id)numberForProperty:(id)arg1 database:(id)arg2 ;
-(id)stringForProperty:(id)arg1 database:(id)arg2 ;
-(id)UUIDForProperty:(id)arg1 database:(id)arg2 ;
-(void)willDeleteFromDatabase:(id)arg1 ;
-(BOOL)updateProperties:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 ;
-(BOOL)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 database:(id)arg3 ;
@end


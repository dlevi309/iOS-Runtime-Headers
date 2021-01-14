/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableSet, HDDatabaseMigrationTransaction;

@interface HDDatabaseSchemaManager : NSObject {

	NSMutableSet* _createdDatabaseNames;
	HDDatabaseMigrationTransaction* _transaction;

}
-(id)initWithTransaction:(id)arg1 ;
-(BOOL)_createSchemaMigrationTableIfNeededForDatabaseName:(id)arg1 error:(id*)arg2 ;
-(BOOL)setVersion:(long long)arg1 schema:(id)arg2 protectionClass:(long long)arg3 error:(id*)arg4 ;
-(id)_schemaTableNameForDatabaseName:(id)arg1 ;
-(long long)currentVersionForSchema:(id)arg1 protectionClass:(long long)arg2 error:(id*)arg3 ;
@end


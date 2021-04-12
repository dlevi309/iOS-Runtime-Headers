/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableSet, HDDatabaseMigrationTransaction;

@interface HDDatabaseSchemaManager : NSObject {

	NSMutableSet* _createdDatabaseNames;
	HDDatabaseMigrationTransaction* _transaction;

}
-(id)initWithTransaction:(id)arg1 ;
-(BOOL)setVersion:(long long)arg1 schema:(id)arg2 protectionClass:(long long)arg3 error:(id*)arg4 ;
-(long long)currentVersionForSchema:(id)arg1 protectionClass:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_createSchemaMigrationTableIfNeededForDatabaseName:(id)arg1 error:(id*)arg2 ;
-(id)_schemaTableNameForDatabaseName:(id)arg1 ;
@end


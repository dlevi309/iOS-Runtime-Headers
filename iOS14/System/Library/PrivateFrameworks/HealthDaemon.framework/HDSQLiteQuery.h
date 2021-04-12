/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDSQLiteDatabase, HDSQLiteQueryDescriptor, NSString;

@interface HDSQLiteQuery : NSObject {

	HDSQLiteDatabase* _database;
	HDSQLiteQueryDescriptor* _descriptor;
	NSString* _lastSQLStatement;

}

@property (readonly) HDSQLiteDatabase * database;                            //@synthesize database=_database - In the implementation block
@property (readonly) HDSQLiteQueryDescriptor * queryDescriptor; 
@property (copy,readonly) NSString * lastSQLStatement;                       //@synthesize lastSQLStatement=_lastSQLStatement - In the implementation block
-(NSString *)lastSQLStatement;
-(void)enumerateEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(void)_expandLastSQLStatementIfNecessary:(sqlite3_stmtRef)arg1 ;
-(BOOL)deleteAllEntitiesWithError:(id*)arg1 ;
-(HDSQLiteQueryDescriptor *)queryDescriptor;
-(HDSQLiteDatabase *)database;
-(id)copySelectSQLWithProperties:(id)arg1 ;
-(BOOL)enumeratePersistentIDsAndProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(/*^block*/id)arg3 ;
-(BOOL)enumerateProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(/*^block*/id)arg3 ;
-(void)bindToSelectStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)initWithDatabase:(id)arg1 descriptor:(id)arg2 ;
@end


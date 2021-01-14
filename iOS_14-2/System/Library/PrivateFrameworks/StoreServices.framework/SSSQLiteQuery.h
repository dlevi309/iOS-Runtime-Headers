/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


#import <StoreServices/StoreServices-Structs.h>
@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject {

	SSSQLiteDatabase* _database;
	SSSQLiteQueryDescriptor* _descriptor;

}

@property (readonly) SSSQLiteDatabase * database; 
@property (readonly) SSSQLiteQueryDescriptor * queryDescriptor; 
@property (readonly) long long countOfEntities; 
-(id)copyEntityIdentifiers;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)deleteAllEntities;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(SSSQLiteQueryDescriptor *)queryDescriptor;
-(void)enumeratePersistentIDsAndProperties:(const id*)arg1 count:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(long long)countOfEntities;
-(SSSQLiteDatabase *)database;
-(id)copySelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)createTemporaryTableWithName:(id)arg1 properties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)bindToSelectStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 descriptor:(id)arg2 ;
@end


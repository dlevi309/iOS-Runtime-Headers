/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSSQLiteConnection, AMSSQLiteQueryDescriptor;

@interface AMSSQLiteQuery : NSObject {

	AMSSQLiteConnection* _connection;
	AMSSQLiteQueryDescriptor* _descriptor;

}

@property (readonly) AMSSQLiteConnection * connection; 
@property (readonly) AMSSQLiteQueryDescriptor * queryDescriptor; 
@property (readonly) long long countOfEntities; 
-(AMSSQLiteConnection *)connection;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)countOfEntities;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
-(id)copySelectSQLWithProperties:(id)arg1 ;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_newSelectSQLWithProperties:(id)arg1 ;
-(id)initOnConnection:(id)arg1 descriptor:(id)arg2 ;
-(id)copyEntityIdentifiers;
-(BOOL)createTemporaryTableWithName:(id)arg1 properties:(id)arg2 ;
-(BOOL)deleteAllEntities;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(AMSSQLiteQueryDescriptor *)queryDescriptor;
@end


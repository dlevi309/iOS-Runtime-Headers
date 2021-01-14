/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(AMSSQLiteConnection *)connection;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
-(id)copyEntityIdentifiers;
-(id)initOnConnection:(id)arg1 descriptor:(id)arg2 ;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_newSelectSQLWithProperties:(id)arg1 ;
-(BOOL)createTemporaryTableWithName:(id)arg1 properties:(id)arg2 ;
-(BOOL)deleteAllEntities;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(AMSSQLiteQueryDescriptor *)queryDescriptor;
-(long long)countOfEntities;
-(id)copySelectSQLWithProperties:(id)arg1 ;
@end


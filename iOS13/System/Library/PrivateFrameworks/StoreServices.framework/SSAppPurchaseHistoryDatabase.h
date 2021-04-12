/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
+(void)_createDatabaseDirectory;
+(BOOL)_setupDatabase:(id)arg1 ;
+(id)accountUniqueIdentifierKey;
+(id)newDefaultInstance;
-(id)init;
-(void)dealloc;
-(id)database;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)readUsingTransactionBlock:(/*^block*/id)arg1 ;
-(BOOL)removeValueForDatabaseProperty:(id)arg1 ;
-(void)modifyUsingAppPurchaseHistoryTransactionBlock:(/*^block*/id)arg1 ;
-(void)readAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)currentAccountUniqueIdentifier;
-(BOOL)setCurrentAccountUniqueIdentifier:(id)arg1 ;
-(long long)localRevisionForAccountUniqueIdentifier:(id)arg1 ;
-(BOOL)setLocalRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2 ;
-(BOOL)resetCacheForNewAccountID:(id)arg1 ;
-(id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(BOOL)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
+(id)newDefaultInstance;
+(id)accountUniqueIdentifierKey;
+(void)_createDatabaseDirectory;
+(BOOL)_setupDatabase:(id)arg1 ;
-(void)readUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)modifyUsingAppPurchaseHistoryTransactionBlock:(/*^block*/id)arg1 ;
-(id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(BOOL)arg3 ;
-(BOOL)removeValueForDatabaseProperty:(id)arg1 ;
-(long long)localRevisionForAccountUniqueIdentifier:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)currentAccountUniqueIdentifier;
-(BOOL)resetCacheForNewAccountID:(id)arg1 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(void)readAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)database;
-(BOOL)setCurrentAccountUniqueIdentifier:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(BOOL)setLocalRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2 ;
-(void)dealloc;
@end


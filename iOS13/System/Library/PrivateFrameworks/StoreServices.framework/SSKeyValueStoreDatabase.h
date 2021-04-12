/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
-(id)init;
-(void)dealloc;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)initReadOnly;
-(id)_initReadOnly:(BOOL)arg1 ;
-(void)_dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)readAsyncUsingSessionBlock:(/*^block*/id)arg1 ;
@end


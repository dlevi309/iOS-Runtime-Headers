/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
-(id)init;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)initReadOnly;
-(id)_initReadOnly:(BOOL)arg1 ;
-(void)_dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)readAsyncUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
@end


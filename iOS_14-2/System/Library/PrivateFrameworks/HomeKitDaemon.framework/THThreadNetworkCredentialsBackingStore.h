/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol THThreadNetworkCredentialsBackingStore <NSObject>
@required
-(void)retrieveRecordWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)storeRecord:(id)arg1 waitForSync:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)retrieveAllRecordsForNetwork:(id)arg1 completion:(/*^block*/id)arg2;
-(void)retrieveAllRecordsWithCompletion:(/*^block*/id)arg1;
-(void)storeRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteRecordWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTCoreDataPersistentStoreLocalConfiguration <AVTCoreDataPersistentStoreConfiguration>
@required
-(id)createStoreServerWithError:(id*)arg1;
-(void)updateBackupInclusionStatusOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)migratableSources;
-(BOOL)tearDownAndEraseAllContent:(id*)arg1;
-(BOOL)copyStorageAside:(id*)arg1;
-(id)copiedAsideMigratableSource;
-(BOOL)contentExists;

@end


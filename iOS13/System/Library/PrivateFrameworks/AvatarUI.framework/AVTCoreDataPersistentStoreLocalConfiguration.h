/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


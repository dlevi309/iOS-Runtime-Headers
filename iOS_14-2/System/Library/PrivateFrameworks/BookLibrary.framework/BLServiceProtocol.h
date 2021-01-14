/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@protocol BLServiceProtocol
@required
-(void)purchaseWithRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchDownloadFromDownloadID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)requestDownloadWithParameters:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)requestDownloadsWithManifestRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(/*^block*/id)arg3;
-(void)cancelDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)requestDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)cancelAllActiveDownloadsWithReply:(/*^block*/id)arg1;
-(void)getValueSimulateDeviceOutOfSpaceWithReply:(/*^block*/id)arg1;
-(void)purchaseWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setValueSimulateDeviceOutOfSpace:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)resetAllCrashSimulationOverridesWithReply:(/*^block*/id)arg1;
-(void)setAutomaticDownloadEnabled:(BOOL)arg1 uiHostProxy:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)pauseDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)requestDownloadsWithMetadata:(id)arg1 areRestore:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)requestDownloadsWithRestoreContentRequestItems:(id)arg1 reply:(/*^block*/id)arg2;
-(void)processAutomaticDownloadsWithReply:(/*^block*/id)arg1;
-(void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)getCrashSimulationOverrideValuesWithReply:(/*^block*/id)arg1;
-(void)resumeDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)flushMetricsWithReply:(/*^block*/id)arg1;
-(void)reloadFromServerWithReply:(/*^block*/id)arg1;
-(void)fetchDownloadListWithReply:(/*^block*/id)arg1;
-(void)setValueSimulateCrashAtInstallStart:(BOOL)arg1 withReply:(/*^block*/id)arg2;

@end


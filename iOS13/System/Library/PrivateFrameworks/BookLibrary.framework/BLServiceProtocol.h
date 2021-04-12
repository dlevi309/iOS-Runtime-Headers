/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@protocol BLServiceProtocol
@required
-(void)fetchDownloadListWithReply:(/*^block*/id)arg1;
-(void)fetchDownloadFromDownloadID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)pauseDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)resumeDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)cancelDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)cancelAllActiveDownloadsWithReply:(/*^block*/id)arg1;
-(void)purchaseWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestDownloadWithParameters:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)requestDownloadsWithMetadata:(id)arg1 areRestore:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)setValueSimulateCrashAtInstallStart:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)getCrashSimulationOverrideValuesWithReply:(/*^block*/id)arg1;
-(void)resetAllCrashSimulationOverridesWithReply:(/*^block*/id)arg1;
-(void)setValueSimulateDeviceOutOfSpace:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)getValueSimulateDeviceOutOfSpaceWithReply:(/*^block*/id)arg1;

@end


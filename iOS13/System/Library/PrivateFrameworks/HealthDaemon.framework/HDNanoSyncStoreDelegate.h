/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDNanoSyncStoreDelegate <NSObject>
@property (nonatomic,readonly) BOOL isMaster; 
@required
-(BOOL)isMaster;
-(void)nanoSyncStore:(id)arg1 remoteSystemBuildVersionDidChange:(id)arg2;
-(void)nanoSyncStore:(id)arg1 restoreStateDidChange:(long long)arg2;
-(void)nanoSyncStore:(id)arg1 deviceNameDidChange:(id)arg2;

@end


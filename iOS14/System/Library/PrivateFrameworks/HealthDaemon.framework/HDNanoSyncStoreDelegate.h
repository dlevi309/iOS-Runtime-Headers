/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDNanoSyncStoreDelegate <NSObject>
@property (nonatomic,readonly) BOOL isMaster; 
@required
-(BOOL)isMaster;
-(void)nanoSyncStore:(id)arg1 deviceNameDidChange:(id)arg2;
-(void)nanoSyncStore:(id)arg1 remoteSystemBuildVersionDidChange:(id)arg2;
-(void)nanoSyncStore:(id)arg1 restoreStateDidChange:(long long)arg2;

@end


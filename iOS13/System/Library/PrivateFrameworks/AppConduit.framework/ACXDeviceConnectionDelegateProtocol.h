/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
*/


@protocol ACXDeviceConnectionDelegateProtocol <NSObject>
@required
-(void)updatedInstallStateForApplicationsWithInfo:(id)arg1;
-(void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;

@end


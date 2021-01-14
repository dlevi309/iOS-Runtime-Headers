/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
*/


@protocol ACXDeviceConnectionDelegateProtocol <NSObject>
@required
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)updatedInstallStateForApplicationsWithInfo:(id)arg1;
-(void)observerRegistrationSuccessful;
-(void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;

@end


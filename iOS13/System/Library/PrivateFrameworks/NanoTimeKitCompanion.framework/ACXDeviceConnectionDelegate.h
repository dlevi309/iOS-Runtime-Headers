/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol ACXDeviceConnectionDelegate <NSObject>
@optional
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
-(void)updateInstallStateForApplication:(id)arg1 installState:(long long)arg2;
-(void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 installPhase:(long long)arg3;

@end


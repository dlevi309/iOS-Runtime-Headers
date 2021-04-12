/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol ACXDeviceConnectionDelegate <NSObject>
@optional
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)updateInstallStateForApplication:(id)arg1 installState:(long long)arg2;
-(void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 installPhase:(long long)arg3;
-(void)observerRegistered;

@end


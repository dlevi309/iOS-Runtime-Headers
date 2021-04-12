/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface CKDVolumeManager : NSObject
+(id)_volumeForDisk:(const SCD_Struct_CK10*)arg1 mountToPath:(id)arg2 error:(id*)arg3 ;
+(id)createVolumeForDevice:(int)arg1 error:(id*)arg2 ;
+(id)existingVolumeForDevice:(int)arg1 ;
+(void)invalidateVolume:(id)arg1 ;
+(void)startVolumes;
+(void)shutdownVolumes;
+(id)deviceIDForVolumeUUID:(id)arg1 ;
+(id)volumeUUIDForDeviceID:(id)arg1 ;
@end


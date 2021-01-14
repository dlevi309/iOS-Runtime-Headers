/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface CKDVolumeManager : NSObject
+(id)volumeUUIDForDeviceID:(id)arg1 ;
+(void)invalidateVolume:(id)arg1 ;
+(id)createVolumeForDevice:(int)arg1 error:(id*)arg2 ;
+(void)startVolumes;
+(id)existingVolumeForDevice:(int)arg1 ;
+(id)deviceIDForVolumeUUID:(id)arg1 ;
+(id)_volumeForDisk:(const SCD_Struct_CK10*)arg1 mountToPath:(id)arg2 error:(id*)arg3 ;
+(void)shutdownVolumes;
@end


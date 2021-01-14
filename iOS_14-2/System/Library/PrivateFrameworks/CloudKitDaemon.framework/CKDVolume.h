/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSUUID, NSNumber, NSString;

@interface CKDVolume : NSObject {

	NSUUID* _volumeUUID;
	NSNumber* _deviceID;
	NSString* _mountToPath;

}

@property (nonatomic,retain) NSUUID * volumeUUID;                 //@synthesize volumeUUID=_volumeUUID - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                 //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * mountToPath;              //@synthesize mountToPath=_mountToPath - In the implementation block
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)deviceID;
-(id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3 ;
-(NSUUID *)volumeUUID;
-(id)CKPropertiesDescription;
-(id)description;
-(NSString *)mountToPath;
-(void)setMountToPath:(NSString *)arg1 ;
-(void)setVolumeUUID:(NSUUID *)arg1 ;
@end


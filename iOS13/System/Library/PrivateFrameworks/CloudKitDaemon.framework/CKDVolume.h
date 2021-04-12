/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSNumber *)deviceID;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3 ;
-(NSUUID *)volumeUUID;
-(void)setVolumeUUID:(NSUUID *)arg1 ;
-(NSString *)mountToPath;
-(void)setMountToPath:(NSString *)arg1 ;
@end


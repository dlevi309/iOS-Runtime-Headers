/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID;

@interface CKDAssetVolume : CKObject {

	NSNumber* _volumeIndex;
	NSUUID* _volumeUUID;

}

@property (nonatomic,retain) NSNumber * volumeIndex;              //@synthesize volumeIndex=_volumeIndex - In the implementation block
@property (nonatomic,retain) NSUUID * volumeUUID;                 //@synthesize volumeUUID=_volumeUUID - In the implementation block
+(id)CKSQLiteClassName;
-(NSUUID *)volumeUUID;
-(id)CKPropertiesDescription;
-(id)description;
-(void)setVolumeUUID:(NSUUID *)arg1 ;
-(void)setVolumeIndex:(NSNumber *)arg1 ;
-(NSNumber *)volumeIndex;
@end


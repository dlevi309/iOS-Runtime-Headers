/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)CKPropertiesDescription;
-(NSUUID *)volumeUUID;
-(void)setVolumeUUID:(NSUUID *)arg1 ;
-(void)setVolumeIndex:(NSNumber *)arg1 ;
-(NSNumber *)volumeIndex;
@end


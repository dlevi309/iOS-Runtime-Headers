/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDCameraSessionID.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID <NSCopying> {

	BOOL _snapshotRequestForBulletin;
	NSString* _snapshotCharacteristicEventUUID;
	unsigned long long _snapshotReason;
	NSNumber* _streamingTier;

}

@property (readonly) NSString * snapshotCharacteristicEventUUID;                                       //@synthesize snapshotCharacteristicEventUUID=_snapshotCharacteristicEventUUID - In the implementation block
@property (readonly) unsigned long long snapshotReason;                                                //@synthesize snapshotReason=_snapshotReason - In the implementation block
@property (getter=isSnapshotRequestForBulletin,readonly) BOOL snapshotRequestForBulletin;              //@synthesize snapshotRequestForBulletin=_snapshotRequestForBulletin - In the implementation block
@property (readonly) NSNumber * streamingTier;                                                         //@synthesize streamingTier=_streamingTier - In the implementation block
-(unsigned long long)snapshotReason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(BOOL)arg5 snapshotReason:(unsigned long long)arg6 snapshotRequestForBulletin:(BOOL)arg7 snapshotCharacteristicEventUUID:(id)arg8 streamingTier:(id)arg9 ;
-(BOOL)isSnapshotRequestForBulletin;
-(NSString *)snapshotCharacteristicEventUUID;
-(NSNumber *)streamingTier;
-(id)initWithAccessory:(id)arg1 message:(id)arg2 ;
@end


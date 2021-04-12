/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVOutputDevice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {

	_MRAVOutputDeviceDescriptorProtobuf* _protobuf;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSDictionary* _modelSpecificInfo;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uid;
-(unsigned)deviceType;
-(id)groupID;
-(id)descriptor;
-(id)firmwareVersion;
-(float)volume;
-(float)batteryLevel;
-(id)initWithDescriptor:(id)arg1 ;
-(id)sourceInfo;
-(id)MACAddress;
-(id)parentGroupIdentifier;
-(id)bluetoothID;
-(id)modelID;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isGroupLeader;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)hasBatteryLevel;
-(BOOL)isVolumeControlAvailable;
-(unsigned)volumeCapabilities;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isLocalDevice;
-(unsigned)deviceSubtype;
-(BOOL)isRemoteControllable;
-(BOOL)isGroupable;
-(BOOL)isDeviceGroupable;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)isAddedToHomeKit;
-(BOOL)supportsHAP;
-(id)modelSpecificInfo;
-(BOOL)supportsExternalScreen;
-(id)initWithSkeleton:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVOutputDevice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary, NSArray;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {

	_MRAVOutputDeviceDescriptorProtobuf* _protobuf;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSDictionary* _modelSpecificInfo;
	NSArray* _clusterComposition;

}
+(BOOL)supportsSecureCoding;
-(unsigned)volumeCapabilities;
-(BOOL)isDeviceGroupable;
-(unsigned)deviceType;
-(id)uid;
-(BOOL)canAccessiCloudMusicLibrary;
-(id)firmwareVersion;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(id)modelID;
-(BOOL)isProxyGroupPlayer;
-(id)sourceInfo;
-(BOOL)supportsHAP;
-(unsigned)deviceSubtype;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isUsingJSONProtocol;
-(id)MACAddress;
-(id)bluetoothID;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)supportsExternalScreen;
-(BOOL)isRemoteControllable;
-(BOOL)hasBatteryLevel;
-(id)clusterComposition;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)canAccessAppleMusic;
-(BOOL)isVolumeControlAvailable;
-(id)modelSpecificInfo;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(unsigned)clusterType;
-(id)groupID;
-(float)batteryLevel;
-(id)parentGroupIdentifier;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isGroupable;
-(BOOL)isLocalDevice;
-(BOOL)canRelayCommunicationChannel;
-(unsigned long long)configuredClusterSize;
-(BOOL)isAddedToHomeKit;
-(id)descriptor;
-(id)name;
-(id)description;
-(id)initWithSkeleton:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)volume;
-(id)primaryID;
@end


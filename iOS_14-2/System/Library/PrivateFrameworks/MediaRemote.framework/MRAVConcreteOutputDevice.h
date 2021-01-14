/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVOutputDevice.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputDevice, MRAVOutputDeviceSourceInfo, NSString, NSData, NSDictionary;

@interface MRAVConcreteOutputDevice : MRAVOutputDevice {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	AVOutputDevice* _avOutputDevice;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSString* _uid;
	BOOL _overrideUID;
	NSString* _modelID;
	NSString* _firmwareVersion;
	NSString* _logicalDeviceID;
	NSString* _groupID;
	BOOL _overrideGroupID;
	NSData* _MACAddress;
	NSDictionary* _modelSpecificInfo;
	NSString* _playingPairedDeviceName;

}

@property (setter=setAVOutputDevice:,nonatomic,retain) AVOutputDevice * avOutputDevice; 
@property (nonatomic,retain) MRAVOutputDeviceSourceInfo * sourceInfo; 
@property (nonatomic,readonly) BOOL supportsHeadTrackedSpatialAudio; 
@property (getter=isHeadTrackedSpatialAudioActive,nonatomic,readonly) BOOL headTrackedSpatialAudioActive; 
-(unsigned)volumeCapabilities;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsBluetoothSharing;
-(BOOL)isDeviceGroupable;
-(unsigned)deviceType;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(id)uid;
-(id)currentBluetoothListeningMode;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(id)firmwareVersion;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(id)modelID;
-(void)setVolume:(float)arg1 ;
-(id)availableBluetoothListeningModes;
-(BOOL)isProxyGroupPlayer;
-(MRAVOutputDeviceSourceInfo *)sourceInfo;
-(BOOL)supportsHAP;
-(unsigned)deviceSubtype;
-(BOOL)supportsBufferedAirPlay;
-(id)MACAddress;
-(id)bluetoothID;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)supportsExternalScreen;
-(BOOL)isRemoteControllable;
-(BOOL)hasBatteryLevel;
-(id)clusterComposition;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)canAccessAppleMusic;
-(BOOL)isVolumeControlAvailable;
-(id)initWithAVOutputDevice:(id)arg1 sourceInfo:(id)arg2 ;
-(id)modelSpecificInfo;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(unsigned)clusterType;
-(id)groupID;
-(float)batteryLevel;
-(id)parentGroupIdentifier;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(BOOL)isGroupable;
-(BOOL)isLocalDevice;
-(BOOL)canRelayCommunicationChannel;
-(unsigned long long)configuredClusterSize;
-(BOOL)isAddedToHomeKit;
-(void)setGroupID:(id)arg1 ;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)supportsRapport;
-(id)name;
-(AVOutputDevice *)avOutputDevice;
-(id)playingPairedDeviceName;
-(float)volume;
-(void)setAVOutputDevice:(id)arg1 ;
-(void)setSourceInfo:(MRAVOutputDeviceSourceInfo *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)name;
-(id)uid;
-(unsigned)deviceType;
-(id)groupID;
-(void)setGroupID:(id)arg1 ;
-(id)firmwareVersion;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(float)batteryLevel;
-(MRAVOutputDeviceSourceInfo *)sourceInfo;
-(void)setSourceInfo:(MRAVOutputDeviceSourceInfo *)arg1 ;
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
-(BOOL)supportsBluetoothSharing;
-(id)availableBluetoothListeningModes;
-(id)currentBluetoothListeningMode;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasBatteryLevel;
-(id)_outputContext;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isProxyGroupPlayer;
-(id)playingPairedDeviceName;
-(BOOL)isPickedOnPairedDevice;
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
-(BOOL)supportsRapport;
-(void)_onqueue_clearCachedAVOutputDeviceProperties;
-(id)_playingPairedDeviceNameForAVOutputDevice:(id)arg1 ;
-(BOOL)_isOutputDevice:(id)arg1 belongToOutputContext:(id)arg2 ;
-(id)initWithAVOutputDevice:(id)arg1 sourceInfo:(id)arg2 ;
-(AVOutputDevice *)avOutputDevice;
-(void)setAVOutputDevice:(id)arg1 ;
@end


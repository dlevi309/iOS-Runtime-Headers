/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputDeviceInternal;

@interface AVOutputDevice : NSObject {

	AVOutputDeviceInternal* _outputDevice;

}
+(void)initialize;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 ;
+(void)localDeviceDidChange;
+(void)localDeviceWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)canSyncController:(OpaqueAPSyncControllerRef)arg1 supportRoute:(CFDictionaryRef)arg2 ;
+(BOOL)prefersRouteDescriptors;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(const CFDictionaryRef)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 syncController:(OpaqueAPSyncControllerRef)arg3 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routingContextFactory:(id)arg2 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 routingContextFactory:(id)arg2 ;
+(id)sharedLocalDevice;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(BOOL)isClusterLeader;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deviceFeatures;
-(BOOL)canBeGroupLeader;
-(BOOL)supportsBluetoothSharing;
-(id)ID;
-(BOOL)canSetVolume;
-(id)identifyingMACAddress;
-(id)connectedPairedDevices;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(long long)deviceType;
-(id)deviceName;
-(id)clusteredDeviceDescriptions;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(BOOL)isInUseByPairedDevice;
-(id)deviceID;
-(id)serialNumber;
-(id)currentBluetoothListeningMode;
-(BOOL)canAccessiCloudMusicLibrary;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(id)firmwareVersion;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(long long)deviceSubType;
-(id)proposedGroupID;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(id)modelID;
-(id)manufacturer;
-(BOOL)participatesInGroupPlayback;
-(long long)volumeControlType;
-(BOOL)isLogicalDeviceLeader;
-(id)airPlayProperties;
-(long long)HAPConformance;
-(BOOL)canBeGrouped;
-(void)setSecondDisplayMode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVolume:(float)arg1 ;
-(id)availableBluetoothListeningModes;
-(BOOL)supportsBufferedAirPlay;
-(id)init;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)hasBatteryLevel;
-(void)outputDeviceImplDidChangeVolume:(id)arg1 ;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canAccessAppleMusic;
-(void)updateFrecencyScore;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(void)outputDeviceImplDidChangeProposedGroupID:(id)arg1 ;
-(long long)clusterType;
-(id)groupID;
-(float)batteryLevel;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canRelayCommunicationChannel;
-(long long)configuredClusterSize;
-(id)figEndpointOutputDeviceImpl;
-(id)communicationChannelDelegate;
-(void)setCommunicationChannelDelegate:(id)arg1 ;
-(void)setCurrentBluetoothListeningMode:(id)arg1 ;
-(id)name;
-(void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)outputDeviceImplDidChangeVolumeControlType:(id)arg1 ;
-(void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1 ;
-(id)description;
-(void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithOutputDeviceImpl:(id)arg1 commChannelManager:(id)arg2 ;
-(id)modelSpecificInformation;
-(float)volume;
-(void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(id)clusterID;
-(void)configureUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)frecencyScore;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)impl;
@end


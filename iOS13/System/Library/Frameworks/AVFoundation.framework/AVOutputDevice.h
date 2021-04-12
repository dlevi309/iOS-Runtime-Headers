/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceInternal;

@interface AVOutputDevice : NSObject {

	AVOutputDeviceInternal* _outputDevice;

}
+(void)initialize;
+(id)sharedLocalDevice;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 ;
+(BOOL)prefersRouteDescriptors;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routingContextFactory:(id)arg2 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 routingContextFactory:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(long long)deviceType;
-(id)deviceID;
-(id)groupID;
-(id)deviceName;
-(id)serialNumber;
-(id)firmwareVersion;
-(id)impl;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(float)batteryLevel;
-(id)manufacturer;
-(id)ID;
-(double)frecencyScore;
-(id)modelID;
-(long long)deviceSubType;
-(unsigned long long)deviceFeatures;
-(id)initWithOutputDeviceImpl:(id)arg1 ;
-(id)identifyingMACAddress;
-(id)airPlayProperties;
-(BOOL)isInUseByPairedDevice;
-(id)connectedPairedDevices;
-(BOOL)requiresAuthorization;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(BOOL)canSetVolume;
-(BOOL)canBeGrouped;
-(BOOL)canBeGroupLeader;
-(BOOL)isGroupLeader;
-(BOOL)participatesInGroupPlayback;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)isLogicalDeviceLeader;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsBluetoothSharing;
-(long long)HAPConformance;
-(id)availableBluetoothListeningModes;
-(id)currentBluetoothListeningMode;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasBatteryLevel;
-(id)modelSpecificInformation;
-(void)outputDeviceImplDidChangeVolume:(id)arg1 ;
-(void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1 ;
-(void)setCurrentBluetoothListeningMode:(id)arg1 ;
-(void)configureUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateFrecencyScore;
-(id)figEndpointOutputDeviceImpl;
@end


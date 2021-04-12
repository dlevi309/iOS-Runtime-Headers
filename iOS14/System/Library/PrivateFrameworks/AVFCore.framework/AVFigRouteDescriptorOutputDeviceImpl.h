/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceImpl.h>

@protocol AVOutputDeviceImplSupport, FigRoutingContextFactory;
@class AVWeakReference, NSString, NSData, NSArray, NSNumber, NSDictionary;

@interface AVFigRouteDescriptorOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {

	AVWeakReference* _weakObserver;
	id<AVOutputDeviceImplSupport> _implSupportEventListener;
	CFDictionaryRef _routeDescriptor;
	OpaqueFigRouteDiscovererRef _routeDiscoverer;
	OpaqueFigVolumeControllerStateRef _volumeController;
	id<FigRoutingContextFactory> _routingContextFactory;
	BOOL _useRouteConfigUpdatedNotification;

}

@property (nonatomic,readonly) CFDictionaryRef routeDescriptor;                                                        //@synthesize routeDescriptor=_routeDescriptor - In the implementation block
@property (__weak) id<AVOutputDeviceImplSupport> implEventListener;                                                    //@synthesize implSupportEventListener=_implSupportEventListener - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * ID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) long long deviceSubType; 
@property (nonatomic,readonly) long long clusterType; 
@property (nonatomic,readonly) long long configuredClusterSize; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSData * identifyingMACAddress; 
@property (nonatomic,readonly) NSArray * clusteredDeviceDescriptions; 
@property (nonatomic,readonly) BOOL isClusterLeader; 
@property (nonatomic,readonly) NSString * clusterID; 
@property (nonatomic,readonly) NSNumber * batteryLevel; 
@property (nonatomic,readonly) NSNumber * caseBatteryLevel; 
@property (nonatomic,readonly) NSNumber * leftBatteryLevel; 
@property (nonatomic,readonly) NSNumber * rightBatteryLevel; 
@property (nonatomic,readonly) NSNumber * supportsDataOverACLProtocol; 
@property (nonatomic,readonly) NSNumber * isInEar; 
@property (nonatomic,readonly) NSDictionary * airPlayProperties; 
@property (getter=isInUseByPairedDevice,nonatomic,readonly) BOOL inUseByPairedDevice; 
@property (nonatomic,copy,readonly) NSArray * connectedPairedDevices; 
@property (nonatomic,readonly) unsigned long long deviceFeatures; 
@property (nonatomic,readonly) BOOL requiresAuthorization; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL canAccessRemoteAssets; 
@property (nonatomic,readonly) BOOL canAccessAppleMusic; 
@property (nonatomic,readonly) BOOL canAccessiCloudMusicLibrary; 
@property (nonatomic,readonly) BOOL supportsBufferedAirPlay; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (readonly) long long volumeControlType; 
@property (nonatomic,readonly) BOOL canBeGrouped; 
@property (nonatomic,copy,readonly) NSString * groupID; 
@property (nonatomic,copy,readonly) NSString * proposedGroupID; 
@property (nonatomic,readonly) BOOL canBeGroupLeader; 
@property (nonatomic,readonly) BOOL isGroupLeader; 
@property (nonatomic,readonly) BOOL participatesInGroupPlayback; 
@property (nonatomic,readonly) BOOL groupContainsGroupLeader; 
@property (nonatomic,readonly) NSString * logicalDeviceID; 
@property (nonatomic,readonly) BOOL isLogicalDeviceLeader; 
@property (nonatomic,readonly) BOOL canCommunicateWithAllLogicalDeviceMembers; 
@property (nonatomic,readonly) BOOL canRelayCommunicationChannel; 
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets; 
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender; 
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; 
@property (nonatomic,readonly) BOOL supportsBluetoothSharing; 
@property (nonatomic,readonly) long long HAPConformance; 
@property (nonatomic,readonly) BOOL supportsHeadTrackedSpatialAudio; 
@property (getter=isHeadTrackedSpatialAudioActive,nonatomic,readonly) BOOL headTrackedSpatialAudioActive; 
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes; 
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(NSNumber *)caseBatteryLevel;
-(BOOL)isClusterLeader;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deviceFeatures;
-(BOOL)canBeGroupLeader;
-(BOOL)supportsBluetoothSharing;
-(NSString *)ID;
-(BOOL)canSetVolume;
-(NSData *)identifyingMACAddress;
-(NSArray *)connectedPairedDevices;
-(NSNumber *)leftBatteryLevel;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(NSNumber *)rightBatteryLevel;
-(long long)deviceType;
-(NSArray *)clusteredDeviceDescriptions;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(BOOL)isInUseByPairedDevice;
-(id)initWithRouteDescriptor:(CFDictionaryRef)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 volumeController:(OpaqueFigVolumeControllerStateRef)arg3 routingContextFactory:(id)arg4 useRouteConfigUpdatedNotification:(BOOL)arg5 ;
-(NSString *)serialNumber;
-(NSString *)currentBluetoothListeningMode;
-(BOOL)canAccessiCloudMusicLibrary;
-(NSNumber *)isInEar;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(NSString *)firmwareVersion;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(long long)deviceSubType;
-(NSString *)proposedGroupID;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(NSString *)modelID;
-(NSString *)manufacturer;
-(NSNumber *)supportsDataOverACLProtocol;
-(void)setImplEventListener:(id<AVOutputDeviceImplSupport>)arg1 ;
-(BOOL)participatesInGroupPlayback;
-(long long)volumeControlType;
-(BOOL)isLogicalDeviceLeader;
-(NSDictionary *)airPlayProperties;
-(long long)HAPConformance;
-(id<AVOutputDeviceImplSupport>)implEventListener;
-(BOOL)canBeGrouped;
-(void)setSecondDisplayMode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVolume:(float)arg1 ;
-(NSArray *)availableBluetoothListeningModes;
-(BOOL)supportsBufferedAirPlay;
-(id)init;
-(BOOL)groupContainsGroupLeader;
-(NSString *)logicalDeviceID;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canAccessAppleMusic;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(long long)clusterType;
-(NSString *)groupID;
-(NSNumber *)batteryLevel;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(void)_volumeDidChangeForEndpointWithID:(CFStringRef)arg1 ;
-(BOOL)canRelayCommunicationChannel;
-(long long)configuredClusterSize;
-(CFDictionaryRef)routeDescriptor;
-(NSString *)name;
-(int)_withEndpoint:(/*^block*/id)arg1 ;
-(void)_canSetEndpointVolumeDidChangeForEndpointWithID:(CFStringRef)arg1 ;
-(unsigned long long)hash;
-(float)volume;
-(NSString *)clusterID;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


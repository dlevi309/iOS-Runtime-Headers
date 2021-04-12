/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputContextImpl.h>

@protocol AVFigRoutingContextOutputDeviceTranslator, AVFigRoutingContextCommunicationChannelManager, OS_dispatch_queue;
@class AVOutputContext, NSString, AVOutputDevice, NSArray, AVOutputContextCommunicationChannel, AVWeakReference, NSObject, NSDictionary;

@interface AVFigRoutingContextOutputContextImpl : NSObject <AVOutputContextImpl> {

	/*^block*/id _routingContextCreator;
	id<AVFigRoutingContextOutputDeviceTranslator> _deviceTranslator;
	OpaqueFigVolumeControllerStateRef _volumeController;
	/*^block*/id _commChannelManagerCreator;
	OpaqueFigRoutingContextRef _routingContext;
	id<AVFigRoutingContextCommunicationChannelManager> _commChannelManager;
	AVWeakReference* _weakObserver;
	AVOutputContext* _parentContext;
	BOOL _usesRouteConfigUpdatedNotification;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	NSDictionary* _destinationChangesForRouteChangeIDs;

}

@property (nonatomic,readonly) OpaqueFigRoutingContextRef figRoutingContext;                                    //@synthesize routingContext=_routingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVOutputContext * parentOutputContext;                                                       //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) NSString * outputContextType; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,copy,readonly) NSString * associatedAudioDeviceID; 
@property (readonly) BOOL supportsMultipleOutputDevices; 
@property (readonly) BOOL supportsMultipleBluetoothOutputDevices; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) BOOL providesControlForAllVolumeFeatures; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
+(id)sharedAudioPresentationOutputContext;
+(id)platformDependentScreenOrVideoContext;
+(id)auxiliaryOutputContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(id)iTunesAudioContext;
+(id)defaultSharedOutputContextImpl;
+(id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2 ;
+(id)outputContextImplForID:(id)arg1 type:(id)arg2 ;
+(void)resetOutputDeviceForAllOutputContexts;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(id)routingContextFactory;
+(OpaqueFigRoutingContextRef)copySystemVideoRoutingContext;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(NSString *)ID;
-(BOOL)supportsMultipleOutputDevices;
-(NSArray *)outputDevices;
-(AVOutputDevice *)outputDevice;
-(BOOL)canSetVolume;
-(void)setParentOutputContext:(AVOutputContext *)arg1 ;
-(NSString *)outputContextType;
-(void)outputContextDidChangeApplicationProcessID:(id)arg1 ;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)providesControlForAllVolumeFeatures;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_routeChangeStartedWithID:(id)arg1 ;
-(id)initWithFigRoutingContextCreator:(/*^block*/id)arg1 ;
-(id)initWithFigRoutingContext:(OpaqueFigRoutingContextRef)arg1 routingContextReplacementBlock:(/*^block*/id)arg2 ;
-(id)initWithRoutingContextUUID:(id)arg1 type:(id)arg2 ;
-(id)initWithFigRoutingContext:(OpaqueFigRoutingContextRef)arg1 routingContextReplacementBlock:(/*^block*/id)arg2 outputDeviceTranslator:(id)arg3 volumeController:(OpaqueFigVolumeControllerStateRef)arg4 communicationChannelManagerCreator:(/*^block*/id)arg5 ;
-(id)routingContextUUID;
-(AVOutputContext *)parentOutputContext;
-(void)_routeConfigUpdateStartedWithID:(CFStringRef)arg1 ;
-(void)_routeConfigUpdateEndedWithID:(CFStringRef)arg1 reason:(CFStringRef)arg2 ;
-(const CFDictionaryRef)_createSelectRouteOptionsForSetOutputDeviceOptions:(id)arg1 ;
-(void)_sendCommand:(CFStringRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)associatedAudioDeviceID;
-(void)_routeChangeEndedWithID:(id)arg1 reason:(CFStringRef)arg2 ;
-(void)_currentRouteChanged;
-(void)_groupConfigurationChanged;
-(void)_routeConfigUpdatedWithID:(CFStringRef)arg1 reason:(CFStringRef)arg2 initiator:(const CFStringRef)arg3 ;
-(void)_systemPickerVideoRouteChanged;
-(void)_canUseForRoutingContextDidChangeForRoutingContextWIthID:(CFStringRef)arg1 ;
-(void)_masterVolumeDidChangeForRoutingContextWithID:(CFStringRef)arg1 ;
-(void)_canSetMasterVolumeDidChangeForRoutingContextWithID:(CFStringRef)arg1 ;
-(void)_remoteControlChannelAvailabilityChanged;
-(void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(void)_serverConnectionDied;
-(OpaqueFigRoutingContextRef)figRoutingContext;
@end


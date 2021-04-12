/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputContextImpl.h>

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAudioPresentationOutputContext;
+(id)routingContextFactory;
+(id)iTunesAudioContext;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(id)sharedSystemAudioContext;
+(id)defaultSharedOutputContextImpl;
+(void)resetOutputDeviceForAllOutputContexts;
+(id)outputContextImplForID:(id)arg1 type:(id)arg2 ;
+(OpaqueFigRoutingContextRef)copySystemVideoRoutingContext;
+(id)auxiliaryOutputContext;
+(id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2 ;
+(id)sharedSystemScreenContext;
+(id)platformDependentScreenOrVideoContext;
-(OpaqueFigRoutingContextRef)figRoutingContext;
-(NSString *)ID;
-(BOOL)canSetVolume;
-(void)setVolume:(float)arg1 ;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)_groupConfigurationChanged;
-(void)_currentRouteChanged;
-(AVOutputDevice *)outputDevice;
-(void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)providesControlForAllVolumeFeatures;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_routeConfigUpdateEndedWithID:(CFStringRef)arg1 reason:(CFStringRef)arg2 ;
-(void)_routeChangeEndedWithID:(id)arg1 reason:(CFStringRef)arg2 ;
-(void)_serverConnectionDied;
-(NSString *)associatedAudioDeviceID;
-(void)_canSetMasterVolumeDidChangeForRoutingContextWithID:(CFStringRef)arg1 ;
-(id)initWithFigRoutingContext:(OpaqueFigRoutingContextRef)arg1 routingContextReplacementBlock:(/*^block*/id)arg2 ;
-(void)_masterVolumeDidChangeForRoutingContextWithID:(CFStringRef)arg1 ;
-(void)_sendCommand:(CFStringRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)routingContextUUID;
-(NSArray *)outputDevices;
-(void)_remoteControlChannelAvailabilityChanged;
-(void)_routeConfigUpdateStartedWithID:(CFStringRef)arg1 ;
-(void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)outputContextDidChangeApplicationProcessID:(id)arg1 ;
-(id)initWithFigRoutingContext:(OpaqueFigRoutingContextRef)arg1 routingContextReplacementBlock:(/*^block*/id)arg2 outputDeviceTranslator:(id)arg3 volumeController:(OpaqueFigVolumeControllerStateRef)arg4 communicationChannelManagerCreator:(/*^block*/id)arg5 ;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(unsigned long long)hash;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(void)_systemPickerVideoRouteChanged;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(const CFDictionaryRef)_createSelectRouteOptionsForSetOutputDeviceOptions:(id)arg1 ;
-(AVOutputContext *)parentOutputContext;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(float)volume;
-(void)_canUseForRoutingContextDidChangeForRoutingContextWIthID:(CFStringRef)arg1 ;
-(void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(id)initWithFigRoutingContextCreator:(/*^block*/id)arg1 ;
-(void)_routeChangeStartedWithID:(id)arg1 ;
-(void)setParentOutputContext:(AVOutputContext *)arg1 ;
-(BOOL)supportsMultipleOutputDevices;
-(void)_routeConfigUpdatedWithID:(CFStringRef)arg1 reason:(CFStringRef)arg2 initiator:(const CFStringRef)arg3 endedError:(const CFStringRef)arg4 deviceID:(const CFStringRef)arg5 previousDeviceIDs:(const CFArrayRef)arg6 ;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithRoutingContextUUID:(id)arg1 type:(id)arg2 ;
-(NSString *)outputContextType;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding> {

	AVOutputContextInternal* _outputContext;

}

@property (nonatomic,readonly) OpaqueFigRoutingContextRef figRoutingContext; 
@property (nonatomic,readonly) NSString * deviceName; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)sharedAudioPresentationOutputContext;
+(id)outputContext;
+(id)outputContextForID:(id)arg1 ;
+(Class)defaultOutputContextImplClass;
+(id)auxiliaryOutputContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(id)iTunesAudioContext;
+(id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2 ;
+(void)resetOutputDeviceForAllOutputContexts;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(id)defaultSharedOutputContext;
+(id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1 ;
+(id)preferredOutputDevicesForAudioSession:(id)arg1 ;
+(/*^block*/id)defaultCommunicationChannelManagerCreator;
+(/*^block*/id)commChannelUUIDCommunicationChannelManagerCreator;
+(id)outputContextWithFigRoutingContextCreator:(/*^block*/id)arg1 outputDeviceTranslator:(id)arg2 ;
+(id)outputContextWithFigRoutingContextCreator:(/*^block*/id)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputContextWithFigRoutingContextCreator:(/*^block*/id)arg1 communicationChannelManagerCreator:(/*^block*/id)arg2 ;
+(id)outputContextWithFigRoutingContextCreator:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)contextID;
-(NSString *)deviceName;
-(id)impl;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)ID;
-(BOOL)supportsMultipleOutputDevices;
-(id)outputDevices;
-(id)outputDevice;
-(BOOL)canSetVolume;
-(unsigned long long)outputDeviceFeatures;
-(id)communicationChannelDelegate;
-(id)initWithOutputContextImpl:(id)arg1 ;
-(id)outputContextType;
-(BOOL)getApplicationProcessID:(int*)arg1 ;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)providesControlForAllVolumeFeatures;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)outgoingCommunicationChannel;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)outputContextImpl:(id)arg1 didChangeOutputDeviceWithInitiator:(id)arg2 ;
-(void)outputContextImpl:(id)arg1 didChangeOutputDevicesWithInitiator:(id)arg2 ;
-(void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)arg1 ;
-(int)applicationProcessID;
-(void)setApplicationProcessID:(int)arg1 ;
-(BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2 ;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 ;
-(void)outputContextImpl:(id)arg1 didInitiateDestinationChange:(id)arg2 ;
-(void)setOutputDevices:(id)arg1 ;
-(void)addOutputDevice:(id)arg1 ;
-(void)removeOutputDevice:(id)arg1 ;
-(void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)arg1 ;
-(void)outputContextImplDidChangeVolume:(id)arg1 ;
-(void)outputContextImplDidChangeCanSetVolume:(id)arg1 ;
-(void)setCommunicationChannelDelegate:(id)arg1 ;
-(void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)arg1 ;
-(void)outputContextImpl:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)outputContextImpl:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(void)outputContextImpl:(id)arg1 didExpireWithReplacement:(id)arg2 ;
-(OpaqueFigRoutingContextRef)figRoutingContext;
@end


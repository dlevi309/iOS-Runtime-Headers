/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
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
+(id)iTunesAudioContext;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(/*^block*/id)defaultCommunicationChannelManagerCreator;
+(id)preferredOutputDevicesForAudioSession:(id)arg1 ;
+(id)outputContextWithFigRoutingContextCreator:(/*^block*/id)arg1 communicationChannelManagerCreator:(/*^block*/id)arg2 ;
+(id)sharedSystemAudioContext;
+(Class)defaultOutputContextImplClass;
+(id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2 ;
+(id)defaultSharedOutputContext;
+(id)outputContextForID:(id)arg1 ;
+(id)outputContext;
+(id)outputContextWithFigRoutingContextCreator:(/*^block*/id)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(void)resetOutputDeviceForAllOutputContexts;
+(/*^block*/id)commChannelUUIDCommunicationChannelManagerCreator;
+(id)auxiliaryOutputContext;
+(id)sharedSystemScreenContext;
+(id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1 ;
+(id)outputContextWithFigRoutingContextCreator:(/*^block*/id)arg1 ;
+(id)outputContextWithFigRoutingContextCreator:(/*^block*/id)arg1 outputDeviceTranslator:(id)arg2 ;
-(void)setOutputDevices:(id)arg1 ;
-(OpaqueFigRoutingContextRef)figRoutingContext;
-(id)ID;
-(BOOL)canSetVolume;
-(NSString *)deviceName;
-(void)setVolume:(float)arg1 ;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)outputDeviceFeatures;
-(id)init;
-(BOOL)getApplicationProcessID:(int*)arg1 ;
-(id)outputDevice;
-(void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)providesControlForAllVolumeFeatures;
-(void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)arg1 ;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)outputContextImpl:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)arg1 ;
-(id)communicationChannelDelegate;
-(void)outputContextImpl:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)setCommunicationChannelDelegate:(id)arg1 ;
-(id)description;
-(void)setApplicationProcessID:(int)arg1 ;
-(void)removeOutputDevice:(id)arg1 ;
-(id)contextID;
-(void)outputContextImpl:(id)arg1 didChangeOutputDeviceWithInitiator:(id)arg2 ;
-(void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)arg1 ;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 ;
-(id)outputDevices;
-(void)outputContextImplDidChangeVolume:(id)arg1 ;
-(void)outputContextImpl:(id)arg1 didExpireWithReplacement:(id)arg2 ;
-(int)applicationProcessID;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(unsigned long long)hash;
-(id)outgoingCommunicationChannel;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2 ;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)outputContextImpl:(id)arg1 didChangeOutputDevicesWithInitiator:(id)arg2 reason:(id)arg3 deviceID:(id)arg4 previousDeviceIDs:(id)arg5 ;
-(id)initWithOutputContextImpl:(id)arg1 ;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(float)volume;
-(void)addOutputDevice:(id)arg1 ;
-(BOOL)supportsMultipleOutputDevices;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)outputContextType;
-(void)outputContextImpl:(id)arg1 didInitiateDestinationChange:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)impl;
-(void)outputContextImplDidChangeCanSetVolume:(id)arg1 ;
@end


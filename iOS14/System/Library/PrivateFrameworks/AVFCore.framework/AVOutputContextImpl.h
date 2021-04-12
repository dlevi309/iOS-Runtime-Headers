/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

@class AVOutputContext, NSString, AVOutputDevice, NSArray, AVOutputContextCommunicationChannel;


@protocol AVOutputContextImpl <NSObject>
@property (__weak) AVOutputContext * parentOutputContext; 
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
@required
+(id)sharedAudioPresentationOutputContext;
+(id)iTunesAudioContext;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(id)sharedSystemAudioContext;
+(id)defaultSharedOutputContextImpl;
+(void)resetOutputDeviceForAllOutputContexts;
+(id)outputContextImplForID:(id)arg1 type:(id)arg2;
+(id)auxiliaryOutputContext;
+(id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+(id)sharedSystemScreenContext;
+(id)platformDependentScreenOrVideoContext;
-(NSString *)ID;
-(BOOL)canSetVolume;
-(void)setVolume:(float)arg1;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
-(AVOutputDevice *)outputDevice;
-(void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)providesControlForAllVolumeFeatures;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(NSString *)associatedAudioDeviceID;
-(NSArray *)outputDevices;
-(void)outputContextDidChangeApplicationProcessID:(id)arg1;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(AVOutputContext *)parentOutputContext;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(float)volume;
-(void)setParentOutputContext:(id)arg1;
-(BOOL)supportsMultipleOutputDevices;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(NSString *)outputContextType;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
+(id)platformDependentScreenOrVideoContext;
+(id)auxiliaryOutputContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(id)iTunesAudioContext;
+(id)defaultSharedOutputContextImpl;
+(id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+(id)outputContextImplForID:(id)arg1 type:(id)arg2;
+(void)resetOutputDeviceForAllOutputContexts;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
-(float)volume;
-(void)setVolume:(float)arg1;
-(NSString *)ID;
-(BOOL)supportsMultipleOutputDevices;
-(NSArray *)outputDevices;
-(AVOutputDevice *)outputDevice;
-(BOOL)canSetVolume;
-(void)setParentOutputContext:(id)arg1;
-(NSString *)outputContextType;
-(void)outputContextDidChangeApplicationProcessID:(id)arg1;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)providesControlForAllVolumeFeatures;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
-(AVOutputContext *)parentOutputContext;
-(NSString *)associatedAudioDeviceID;

@end


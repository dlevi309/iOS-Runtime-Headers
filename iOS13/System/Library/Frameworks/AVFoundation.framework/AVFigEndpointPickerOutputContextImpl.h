/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputContextImpl.h>

@protocol OS_dispatch_queue;
@class AVOutputContext, NSObject, AVWeakReference, NSString, AVOutputDevice, NSArray, AVOutputContextCommunicationChannel;

@interface AVFigEndpointPickerOutputContextImpl : NSObject <AVOutputContextImpl> {

	AVOutputContext* _parentContext;
	NSObject*<OS_dispatch_queue> _pickerQueue;
	OpaqueFigEndpointPickerRef _endpointPicker;
	unsigned long long _featureForCurrentPicker;
	CFStringRef _contextUUID;
	BOOL _isSystemPicker;
	AVWeakReference* _weakReference;

}

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
+(OpaqueFigEndpointPickerRef)copySystemVideoPicker;
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
-(void)setOutputDevices:(NSArray *)arg1 ;
-(void)_removeFigEndpointPickerNotifications;
-(void)_addFigEndpointPickerNotifications;
-(void)_handlePickerServerConnectionDiedNotification;
-(AVOutputContext *)parentOutputContext;
-(NSString *)associatedAudioDeviceID;
-(id)initWithContextUUID:(id)arg1 ;
-(id)initWithFeature:(unsigned long long)arg1 options:(id)arg2 ;
-(int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2 ;
-(id)endpointPickerUUID;
@end


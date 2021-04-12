/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionImpl.h>

@protocol OS_dispatch_queue;
@class AVOutputDeviceDiscoverySession, AVWeakReference, NSObject, NSString, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVFigEndpointPickerOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {

	AVOutputDeviceDiscoverySession* _parentSession;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_queue> _pickerQueue;
	OpaqueFigEndpointPickerRef _endpointPicker;
	unsigned long long _features;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession;                                          //@synthesize parentSession=_parentSession - In the implementation block
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
-(id)init;
-(void)dealloc;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(void)setParentOutputDeviceDiscoverySession:(AVOutputDeviceDiscoverySession *)arg1 ;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1 ;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(BOOL)devicePresenceDetected;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
-(int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 ;
-(void)_removeFigEndpointPickerNotifications;
-(void)_addFigEndpointPickerNotifications;
-(void)_handlePickerServerConnectionDiedNotification;
@end


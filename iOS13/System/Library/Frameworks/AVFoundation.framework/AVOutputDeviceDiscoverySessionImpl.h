/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;


@protocol AVOutputDeviceDiscoverySessionImpl <NSObject>
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@required
-(void)setParentOutputDeviceDiscoverySession:(id)arg1;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(id)arg1;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(BOOL)devicePresenceDetected;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;

@end


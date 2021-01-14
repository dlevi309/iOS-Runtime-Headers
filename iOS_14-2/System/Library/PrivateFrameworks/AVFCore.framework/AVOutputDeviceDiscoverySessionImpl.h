/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;


@protocol AVOutputDeviceDiscoverySessionImpl <NSObject>
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@required
-(BOOL)devicePresenceDetected;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
-(void)setTargetAudioSession:(id)arg1;
-(void)setParentOutputDeviceDiscoverySession:(id)arg1;
-(AVAudioSession *)targetAudioSession;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;

@end


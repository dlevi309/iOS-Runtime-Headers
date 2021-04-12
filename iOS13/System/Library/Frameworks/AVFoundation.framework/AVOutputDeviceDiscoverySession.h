/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceDiscoverySessionInternal, AVAudioSession, NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVOutputDeviceDiscoverySession : NSObject {

	AVOutputDeviceDiscoverySessionInternal* _outputDeviceDiscoverySession;

}

@property (readonly) OpaqueFigRouteDiscovererRef routeDiscoverer; 
@property (assign,nonatomic) long long discoveryMode; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
+(void)initialize;
+(id)outputDeviceDiscoverySessionFactory;
-(id)init;
-(void)dealloc;
-(id)impl;
-(void)setDiscoveryMode:(long long)arg1 ;
-(long long)discoveryMode;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(BOOL)devicePresenceDetected;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1 ;
-(id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1 ;
-(NSArray *)availableOutputDevices;
-(void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2 ;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
@end


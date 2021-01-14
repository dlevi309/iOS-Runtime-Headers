/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputDeviceDiscoverySessionInternal, AVAudioSession, NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVOutputDeviceDiscoverySession : NSObject {

	AVOutputDeviceDiscoverySessionInternal* _outputDeviceDiscoverySession;

}

@property (readonly) OpaqueFigRouteDiscovererRef routeDiscoverer; 
@property (assign,nonatomic) long long discoveryMode; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) NSArray * availableOutputDeviceGroups; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
+(void)initialize;
+(id)outputDeviceDiscoverySessionFactory;
-(BOOL)devicePresenceDetected;
-(long long)discoveryMode;
-(void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2 ;
-(id)init;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:(id)arg1 ;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
-(NSArray *)availableOutputDevices;
-(NSArray *)availableOutputDeviceGroups;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1 ;
-(AVAudioSession *)targetAudioSession;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1 ;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(void)dealloc;
-(id)impl;
@end


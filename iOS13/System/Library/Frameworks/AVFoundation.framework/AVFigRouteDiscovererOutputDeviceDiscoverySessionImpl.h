/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionImpl.h>

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVWeakReference, NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {

	/*^block*/id _routeDiscovererCreator;
	OpaqueFigRouteDiscovererRef _discoverer;
	AVWeakReference* _weakObserver;
	AVOutputDeviceDiscoverySession* _parentSession;

}

@property (nonatomic,readonly) OpaqueFigRouteDiscovererRef routeDiscoverer;                                                      //@synthesize discoverer=_discoverer - In the implementation block
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
-(void)_serverDied;
-(void)setParentOutputDeviceDiscoverySession:(AVOutputDeviceDiscoverySession *)arg1 ;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1 ;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(BOOL)devicePresenceDetected;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
-(id)initWithFigRouteDiscovererCreator:(/*^block*/id)arg1 ;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
-(void)_availableRoutesChanged;
-(void)_routePresentChanged;
@end


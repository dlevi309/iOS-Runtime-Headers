/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceDiscoverySessionImpl.h>

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVWeakReference, NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {

	/*^block*/id _routeDiscovererCreator;
	OpaqueFigRouteDiscovererRef _discoverer;
	OpaqueAPSyncControllerRef _syncController;
	AVWeakReference* _weakObserver;
	AVOutputDeviceDiscoverySession* _parentSession;

}

@property (nonatomic,readonly) OpaqueFigRouteDiscovererRef routeDiscoverer;                                                      //@synthesize discoverer=_discoverer - In the implementation block
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession;                                          //@synthesize parentSession=_parentSession - In the implementation block
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)devicePresenceDetected;
-(void)_serverDied;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
-(id)init;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(void)setParentOutputDeviceDiscoverySession:(AVOutputDeviceDiscoverySession *)arg1 ;
-(void)_routePresentChanged;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
-(void)_availableRoutesChanged;
-(id)initWithFigRouteDiscovererCreator:(/*^block*/id)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
-(AVAudioSession *)targetAudioSession;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1 ;
-(void)_availableGroupsChanged;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(void)dealloc;
@end


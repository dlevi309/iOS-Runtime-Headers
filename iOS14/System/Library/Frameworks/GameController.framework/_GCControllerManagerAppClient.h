/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCControllerManager.h>
#import <libobjc.A.dylib/GCControllerServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCLightXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCLightXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCMotionXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCMotionXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/_GCAppClientInterface.h>

@protocol _GCIPCOutgoingConnection, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCPhotoVideoXPCProxyServiceRemoteServerInterface;
@class NSMutableSet, NSMutableDictionary, NSString;

@interface _GCControllerManagerAppClient : _GCControllerManager <GCControllerServiceRemoteClientInterface, GCPlayerIndicatorXPCProxyServiceClient, GCPlayerIndicatorXPCProxyServiceRemoteClientInterface, GCLightXPCProxyServiceClient, GCLightXPCProxyServiceRemoteClientInterface, GCMotionXPCProxyServiceClient, GCMotionXPCProxyServiceRemoteClientInterface, GCBatteryXPCProxyServiceClient, GCBatteryXPCProxyServiceRemoteClientInterface, GCSettingsXPCProxyServiceClient, GCSettingsXPCProxyServiceRemoteClientInterface, _GCAppClientInterface> {

	NSMutableSet* _knownHIDServices;
	NSMutableDictionary* _publishedControllers;
	NSMutableSet* _pendingControllers;
	NSMutableSet* _serverValidControllerIdentifiers;
	id<_GCIPCOutgoingConnection> _serverConnection;
	id _serverConnectionInvalidation;
	id _serverConnectionInterruption;
	id<GCControllerServiceRemoteServerInterface> _controllerService;
	id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> _playerIndicatorXPCProxyService;
	id<GCLightXPCProxyServiceRemoteServerInterface> _lightXPCProxyService;
	id<GCSettingsXPCProxyServiceRemoteServerInterface> _settingsXPCProxyService;
	id<GCMotionXPCProxyServiceRemoteServerInterface> _motionXPCProxyService;
	id<GCBatteryXPCProxyServiceRemoteServerInterface> _batteryXPCProxyService;
	id<GCPhotoVideoXPCProxyServiceRemoteServerInterface> _photoVideoService;
	BOOL _shouldResumeDaemonConnectionOnForeground;

}

@property (readonly) id<_GCIPCEndpointConnection> playerIndicatorXPCProxyServiceConnection; 
@property (readonly) id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> playerIndicatorXPCProxyServiceRemoteServer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<_GCIPCEndpointConnection> lightXPCProxyServiceConnection; 
@property (readonly) id<GCLightXPCProxyServiceRemoteServerInterface> lightXPCProxyServiceRemoteServer; 
@property (readonly) id<_GCIPCEndpointConnection> motionXPCProxyServiceConnection; 
@property (readonly) id<GCMotionXPCProxyServiceRemoteServerInterface> motionXPCProxyServiceRemoteServer; 
@property (readonly) id<_GCIPCEndpointConnection> batteryXPCProxyServiceConnection; 
@property (readonly) id<GCBatteryXPCProxyServiceRemoteServerInterface> batteryXPCProxyServiceRemoteServer; 
@property (readonly) id<_GCIPCEndpointConnection> settingsXPCProxyServiceConnection; 
@property (readonly) id<GCSettingsXPCProxyServiceRemoteServerInterface> settingsXPCProxyServiceRemoteServer; 
-(void)_connectToDaemon;
-(void)refreshControllers;
-(void)open;
-(id)init;
-(id<_GCIPCEndpointConnection>)playerIndicatorXPCProxyServiceConnection;
-(id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface>)playerIndicatorXPCProxyServiceRemoteServer;
-(BOOL)_containsPublishedController:(id)arg1 ;
-(void)updateCurrentControllerAndProfileForUnpublishedController:(id)arg1 ;
-(void)handleKeyboardEventAsFrontmostApp:(id)arg1 ;
-(void)_setCurrentExtendedGamepad:(id)arg1 ;
-(id)currentExtendedGamepad;
-(void)setProperty:(id)arg1 forKey:(id)arg2 forHIDServiceClientWithRegistryID:(id)arg3 ;
-(void)publishControllers:(id)arg1 ;
-(void)_setCurrentMicroGamepad:(id)arg1 ;
-(id<GCSettingsXPCProxyServiceRemoteServerInterface>)settingsXPCProxyServiceRemoteServer;
-(void)setCurrentExtendedGamepad:(id)arg1 ;
-(void)_onqueue_publishController:(id)arg1 ;
-(id)_mostRecentlyActiveControllerIgnoring:(id)arg1 ;
-(void)_setCurrentController:(id)arg1 ;
-(id<_GCIPCEndpointConnection>)batteryXPCProxyServiceConnection;
-(void)setCurrentMicroGamepad:(id)arg1 ;
-(id)_mostRecentlyActiveExtendedGamepadIgnoring:(id)arg1 ;
-(void)CBApplicationDidBecomeActive;
-(void)onVideoRecordingToggledWithController:(id)arg1 ;
-(id)currentMicroGamepad;
-(id)_mostRecentlyActiveMicroGamepadIgnoring:(id)arg1 ;
-(void)_onqueue_addPendingController:(id)arg1 ;
-(void)_resumeDaemonConnection;
-(id)mice;
-(void)onScreenshotTriggeredWithController:(id)arg1 ;
-(void)_onqueue_refreshPublishedControllers;
-(BOOL)isScreenShotAllowedForController:(id)arg1 ;
-(id<_GCIPCEndpointConnection>)motionXPCProxyServiceConnection;
-(void)unpublishControllersWithIdentifiers:(id)arg1 ;
-(id<GCBatteryXPCProxyServiceRemoteServerInterface>)batteryXPCProxyServiceRemoteServer;
-(void)onHIDDeviceAdded:(IOHIDServiceClientRef)arg1 ;
-(id<GCLightXPCProxyServiceRemoteServerInterface>)lightXPCProxyServiceRemoteServer;
-(id)currentController;
-(id)serviceClientForIPCService:(id)arg1 ;
-(void)setCurrentController:(id)arg1 ;
-(void)_onqueue_unpublishController:(id)arg1 ;
-(id)controllers;
-(id<GCMotionXPCProxyServiceRemoteServerInterface>)motionXPCProxyServiceRemoteServer;
-(id<_GCIPCEndpointConnection>)lightXPCProxyServiceConnection;
-(id<_GCIPCEndpointConnection>)settingsXPCProxyServiceConnection;
-(BOOL)isVideoRecordingAllowedForController:(id)arg1 ;
-(void)handleMouseEventAsFrontmostApp:(id)arg1 ;
-(void)onHIDDeviceRemoved:(IOHIDServiceClientRef)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCDeviceClient.h>
#import <libobjc.A.dylib/GCControllerServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCLightXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCMotionXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/_GCAppServerInterface.h>

@protocol _GCIPCIncomingConnection, GCControllerServiceRemoteClientInterface;
@class NSString, _GCControllerManagerServer, NSMapTable, NSArray;

@interface _GCAppClientProxy : NSObject <_GCDeviceClient, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, _GCAppServerInterface> {

	_GCControllerManagerServer* _server;
	AB _invalid;
	id<_GCIPCIncomingConnection> _connection;
	id _connectionInvalidationRegistration;
	id _connectionInterruptedRegistration;
	id<GCControllerServiceRemoteClientInterface> _controllerServiceClient;
	unsigned long long _controllerServiceClientPendingUpdates;
	NSMapTable* _publishedControllerDescriptions;
	NSArray* _invalidationHandlers;

}

@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry; 
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry; 
@property (copy) NSArray * invalidationHandlers;                                //@synthesize invalidationHandlers=_invalidationHandlers - In the implementation block
+(id)clientProxyWithConnection:(id)arg1 server:(id)arg2 ;
-(void)pingWithReply:(/*^block*/id)arg1 ;
-(void)takeScreenshotWithReply:(/*^block*/id)arg1 ;
-(void)connectToPhotoVideoXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isInvalid;
-(void)playerIndicatorXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(NSArray *)invalidationHandlers;
-(id)_initWithConnection:(id)arg1 server:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(id<_GCIPCServiceRegistry>)IPCServiceRegistry;
-(void)batteryXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToLightXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)lightXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)motionXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)onVideoRecordingStopWithURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)description;
-(void)connectToMotionXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToControllerServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)settingsXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToBatteryXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToPlayerIndicatorXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)onVideoRecordingStart:(/*^block*/id)arg1 ;
-(void)fetchControllerDescriptionsWithReply:(/*^block*/id)arg1 ;
-(id)redactedDescription;
-(void)connectToSettingsXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)generateURLFor:(id)arg1 optionalFolder:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)setInvalidationHandlers:(NSArray *)arg1 ;
-(id<_GCIPCObjectRegistry>)IPCObjectRegistry;
-(void)dealloc;
-(id)addInvalidationHandler:(/*^block*/id)arg1 ;
@end


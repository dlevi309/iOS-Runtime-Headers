/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCDeviceLightComponent.h>
#import <libobjc.A.dylib/GCLightXPCProxyRemoteClientEndpointInterface.h>

@protocol GCLightXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCDeviceLight, GCController, NSString;

@interface GCLightXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceLightComponent, GCLightXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCLightXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCDeviceLight* _light;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GCDeviceLight * light;                                 //@synthesize light=_light - In the implementation block
-(void)invalidateConnection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(GCDeviceLight *)light;
-(void)setController:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)observeChangesForLight:(id)arg1 ;
-(void)refreshLight;
-(void)newLight:(id)arg1 ;
-(void)stopObservingChangesForLight:(id)arg1 ;
-(void)_remoteEndpointHasSetLight:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialLight:(id)arg2 ;
@end


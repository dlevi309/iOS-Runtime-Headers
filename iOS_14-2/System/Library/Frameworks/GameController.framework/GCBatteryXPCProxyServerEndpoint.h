/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCEndpointServer.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyRemoteServerEndpointInterface.h>

@protocol GCBatteryXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, NSObjectNSCopyingNSSecureCoding, GCBatteryXPCProxyServerEndpointDelegate;
@class GCDeviceBattery, NSString;

@interface GCBatteryXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCBatteryXPCProxyRemoteServerEndpointInterface> {

	id<GCBatteryXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
	id<_GCIPCEndpointConnection> _connection;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	unsigned long long _pendingUpdates;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCDeviceBattery* _battery;
	id<GCBatteryXPCProxyServerEndpointDelegate> _delegate;
	id _userInfo;

}

@property (nonatomic,readonly) id<_GCControllerComponentDescription> receiverDescription; 
@property (assign,nonatomic,__weak) id<GCBatteryXPCProxyServerEndpointDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id userInfo;                                                              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) GCDeviceBattery * battery;                                                //@synthesize battery=_battery - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateConnection;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id<GCBatteryXPCProxyServerEndpointDelegate>)delegate;
-(void)setDelegate:(id<GCBatteryXPCProxyServerEndpointDelegate>)arg1 ;
-(GCDeviceBattery *)battery;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialValue:(id)arg2 ;
-(BOOL)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3 ;
-(id)initWithInitialValue:(id)arg1 ;
-(id<_GCControllerComponentDescription>)receiverDescription;
-(void)invalidateClient;
-(void)setBattery:(GCDeviceBattery *)arg1 ;
-(void)fetchBatteryWithReply:(/*^block*/id)arg1 ;
@end


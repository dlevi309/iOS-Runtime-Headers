/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCEndpointServer.h>
#import <libobjc.A.dylib/GCMotionXPCProxyRemoteServerEndpointInterface.h>

@protocol GCMotionXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, NSObjectNSCopyingNSSecureCoding, GCMotionXPCProxyServerEndpointDelegate;
@class NSString;

@interface GCMotionXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCMotionXPCProxyRemoteServerEndpointInterface> {

	id<GCMotionXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
	id<_GCIPCEndpointConnection> _connection;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	unsigned long long _pendingUpdates;
	BOOL _sensorsActive;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	id<GCMotionXPCProxyServerEndpointDelegate> _delegate;
	id _userInfo;

}

@property (nonatomic,readonly) id<_GCControllerComponentDescription> receiverDescription; 
@property (assign,nonatomic,__weak) id<GCMotionXPCProxyServerEndpointDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id userInfo;                                                              //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL sensorsActive;                                                       //@synthesize sensorsActive=_sensorsActive - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateConnection;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id<GCMotionXPCProxyServerEndpointDelegate>)delegate;
-(void)setDelegate:(id<GCMotionXPCProxyServerEndpointDelegate>)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setSensorsActive:(BOOL)arg1 ;
-(BOOL)sensorsActive;
-(void)newSensorsActive:(BOOL)arg1 ;
-(void)fetchSensorsActiveWithReply:(/*^block*/id)arg1 ;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialValue:(BOOL)arg2 ;
-(BOOL)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3 ;
-(id)initWithInitialValue:(BOOL)arg1 ;
-(id<_GCControllerComponentDescription>)receiverDescription;
-(void)invalidateClient;
@end


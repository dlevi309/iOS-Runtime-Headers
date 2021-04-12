/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCControllerPlayerIndicator.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface.h>

@protocol GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCController, NSString;

@interface GCPlayerIndicatorXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerPlayerIndicator, GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	long long _playerIndex;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long playerIndex;                                             //@synthesize playerIndex=_playerIndex - In the implementation block
-(void)invalidateConnection;
-(id)init;
-(void)setController:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)newPlayerIndex:(long long)arg1 ;
-(void)refreshPlayerIndex;
-(void)_remoteEndpointSetPlayerIndex:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialPlayerIndex:(long long)arg2 ;
@end


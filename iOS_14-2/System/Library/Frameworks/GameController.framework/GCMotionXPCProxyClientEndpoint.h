/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCControllerMotionConfigurableSensors.h>
#import <libobjc.A.dylib/GCMotionXPCProxyRemoteClientEndpointInterface.h>

@protocol GCMotionXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCController, NSString;

@interface GCMotionXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerMotionConfigurableSensors, GCMotionXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCMotionXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	BOOL _sensorsActive;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL sensorsActive;                                      //@synthesize sensorsActive=_sensorsActive - In the implementation block
-(void)invalidateConnection;
-(id)init;
-(void)setController:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setSensorsActive:(BOOL)arg1 ;
-(BOOL)sensorsActive;
-(void)refreshSensorsActive;
-(void)newSensorsActive:(BOOL)arg1 ;
-(void)_remoteEndpointSetSensorsActive:(BOOL)arg1 ;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialSensorsActive:(BOOL)arg2 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
@end


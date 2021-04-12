/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCDeviceBatteryComponent.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyRemoteClientEndpointInterface.h>

@protocol GCBatteryXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCDeviceBattery, GCController, NSString;

@interface GCBatteryXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceBatteryComponent, GCBatteryXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCBatteryXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCDeviceBattery* _battery;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GCDeviceBattery * battery;                             //@synthesize battery=_battery - In the implementation block
-(void)invalidateConnection;
-(id)init;
-(void)setController:(id)arg1 ;
-(GCDeviceBattery *)battery;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)refreshBattery;
-(void)_remoteEndpointHasSetBattery:(id)arg1 ;
-(void)newBattery:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialBattery:(id)arg2 ;
@end


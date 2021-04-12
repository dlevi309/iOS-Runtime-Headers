/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCEndpointServer.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyRemoteServerEndpointInterface.h>

@protocol GCSettingsXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, NSObjectNSCopyingNSSecureCoding, GCSettingsXPCProxyServerEndpointDelegate;
@class GCControllerSettings, NSString;

@interface GCSettingsXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCSettingsXPCProxyRemoteServerEndpointInterface> {

	id<GCSettingsXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
	id<_GCIPCEndpointConnection> _connection;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	unsigned long long _pendingUpdates;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCControllerSettings* _settingsForBundleID;
	GCControllerSettings* _settingsDefault;
	id<GCSettingsXPCProxyServerEndpointDelegate> _delegate;
	id _userInfo;

}

@property (nonatomic,readonly) id<_GCControllerComponentDescription> receiverDescription; 
@property (assign,nonatomic,__weak) id<GCSettingsXPCProxyServerEndpointDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id userInfo;                                                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) GCControllerSettings * settingsForBundleID;                                //@synthesize settingsForBundleID=_settingsForBundleID - In the implementation block
@property (nonatomic,retain) GCControllerSettings * settingsDefault;                                    //@synthesize settingsDefault=_settingsDefault - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateConnection;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id<GCSettingsXPCProxyServerEndpointDelegate>)delegate;
-(void)setDelegate:(id<GCSettingsXPCProxyServerEndpointDelegate>)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(BOOL)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3 ;
-(id<_GCControllerComponentDescription>)receiverDescription;
-(void)invalidateClient;
-(GCControllerSettings *)settingsForBundleID;
-(GCControllerSettings *)settingsDefault;
-(void)setSettingsDefault:(GCControllerSettings *)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialValueForBundleID:(id)arg2 defaultSettings:(id)arg3 ;
-(void)setSettingsForBundleID:(GCControllerSettings *)arg1 ;
-(void)fetchSettingsWithReply:(/*^block*/id)arg1 ;
-(id)initWithInitialValueForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
@end


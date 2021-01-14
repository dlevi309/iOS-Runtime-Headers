/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCControllerSettingsComponent.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyRemoteClientEndpointInterface.h>

@protocol GCSettingsXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCControllerSettings, GCController, NSString;

@interface GCSettingsXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerSettingsComponent, GCSettingsXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCSettingsXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCControllerSettings* _settingsDefault;
	GCControllerSettings* _settingsForBundleID;
	/*^block*/id _changedHandler;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id changedHandler;                                           //@synthesize changedHandler=_changedHandler - In the implementation block
@property (nonatomic,readonly) GCControllerSettings * settingsForBundleID;              //@synthesize settingsForBundleID=_settingsForBundleID - In the implementation block
@property (nonatomic,readonly) GCControllerSettings * settingsDefault;                  //@synthesize settingsDefault=_settingsDefault - In the implementation block
-(void)invalidateConnection;
-(id)init;
-(id)changedHandler;
-(void)setController:(id)arg1 ;
-(void)setChangedHandler:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
-(GCControllerSettings *)settingsForBundleID;
-(GCControllerSettings *)settingsDefault;
-(id)initWithIdentifier:(id)arg1 initialValueForBundleID:(id)arg2 defaultSettings:(id)arg3 ;
-(void)refreshSettings;
-(void)_remoteEndpointHasSetSettingsForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
-(void)newSettingsForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
-(void)observeChangesForSettings:(id)arg1 ;
-(void)stopObservingChangesForSettings:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDClient.h>

@class WPDObjectDiscoveryManager, WPDSearchPartyAgent, WPDObjectDiscoveryData;

@interface WPDObjectDiscoveryClient : WPDClient {

	BOOL _pendingSent;
	WPDObjectDiscoveryManager* _objectDiscoveryManager;
	WPDSearchPartyAgent* _spAgent;
	WPDObjectDiscoveryData* _keyAddressAndPayload;
	unsigned long long _keyRequestID;
	unsigned long long _tokenRequestID;

}

@property (assign) BOOL pendingSent;                                                //@synthesize pendingSent=_pendingSent - In the implementation block
@property (__weak) WPDObjectDiscoveryManager * objectDiscoveryManager;              //@synthesize objectDiscoveryManager=_objectDiscoveryManager - In the implementation block
@property (retain) WPDSearchPartyAgent * spAgent;                                   //@synthesize spAgent=_spAgent - In the implementation block
@property (readonly) WPDObjectDiscoveryData * keyAddressAndPayload;                 //@synthesize keyAddressAndPayload=_keyAddressAndPayload - In the implementation block
@property (assign) unsigned long long keyRequestID;                                 //@synthesize keyRequestID=_keyRequestID - In the implementation block
@property (assign) unsigned long long tokenRequestID;                               //@synthesize tokenRequestID=_tokenRequestID - In the implementation block
-(void)notifyClientObjectDiscoveryStateChange:(long long)arg1 ;
-(id)generateStateDump;
-(void)stopSPBeaconing;
-(void)updateSPBeaconing;
-(void)updateSPNearbyTokens;
-(void)endTestMode;
-(void)setObjectDiscoveryManager:(WPDObjectDiscoveryManager *)arg1 ;
-(void)sendTestRequest:(id)arg1 ;
-(void)completeSPBeaconingWithSuccess:(BOOL)arg1 ;
-(WPDSearchPartyAgent *)spAgent;
-(void)destroy;
-(void)setKeyRequestID:(unsigned long long)arg1 ;
-(void)stopAdvertising:(id)arg1 ;
-(unsigned long long)tokenRequestID;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 holdVouchers:(long long)arg4 ;
-(BOOL)pendingSent;
-(void)startSPBeaconing;
-(WPDObjectDiscoveryData *)keyAddressAndPayload;
-(unsigned long long)keyRequestID;
-(void)completeSPNearbyTockensWithSuccess:(BOOL)arg1 ;
-(id)initWithXPCConnection:(id)arg1 server:(id)arg2 ;
-(void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg1 ;
-(WPDObjectDiscoveryManager *)objectDiscoveryManager;
-(void)startAdvertising:(id)arg1 ;
-(void)setTokenRequestID:(unsigned long long)arg1 ;
-(void)notifyClientStateChange:(long long)arg1 Restricted:(BOOL)arg2 ;
-(void)setPendingSent:(BOOL)arg1 ;
-(void)dealloc;
-(void)setSpAgent:(WPDSearchPartyAgent *)arg1 ;
@end


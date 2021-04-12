/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)destroy;
-(void)startAdvertising:(id)arg1 ;
-(void)sendTestRequest:(id)arg1 ;
-(void)stopAdvertising:(id)arg1 ;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(BOOL)arg4 ;
-(id)generateStateDump;
-(void)setObjectDiscoveryManager:(WPDObjectDiscoveryManager *)arg1 ;
-(WPDObjectDiscoveryManager *)objectDiscoveryManager;
-(id)initWithXPCConnection:(id)arg1 server:(id)arg2 ;
-(void)notifyClientStateChange:(long long)arg1 Restricted:(BOOL)arg2 ;
-(void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg1 ;
-(void)endTestMode;
-(void)setPendingSent:(BOOL)arg1 ;
-(BOOL)pendingSent;
-(void)setKeyRequestID:(unsigned long long)arg1 ;
-(void)updateSPBeaconing;
-(void)setTokenRequestID:(unsigned long long)arg1 ;
-(void)updateSPNearbyTokens;
-(void)setSpAgent:(WPDSearchPartyAgent *)arg1 ;
-(WPDObjectDiscoveryData *)keyAddressAndPayload;
-(WPDSearchPartyAgent *)spAgent;
-(void)completeSPNearbyTockensWithSuccess:(BOOL)arg1 ;
-(unsigned long long)tokenRequestID;
-(void)startSPBeaconing;
-(void)stopSPBeaconing;
-(void)completeSPBeaconingWithSuccess:(BOOL)arg1 ;
-(unsigned long long)keyRequestID;
-(void)notifyClientObjectDiscoveryStateChange:(long long)arg1 ;
@end


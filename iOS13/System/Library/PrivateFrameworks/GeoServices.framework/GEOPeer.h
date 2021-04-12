/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_xpc_object, NSObject;
@class GEODaemon, NSObject, GEOProxyClient, NSString, NSMutableDictionary;

@interface GEOPeer : NSObject {

	GEODaemon* _daemon;
	NSObject*<OS_xpc_object> _connection;
	GEOProxyClient* _clientIdentifier;
	BOOL _preloading;
	BOOL _preloadingExclusively;
	NSString* _peerID;
	NSString* _debugIdentifier;
	NSMutableDictionary* _entitlementCache;
	id<NSObject> _peerTransaction;
	id<NSObject> _preloadingTransaction;

}

@property (nonatomic,copy) NSString * debugIdentifier;                            //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entitlementCache;              //@synthesize entitlementCache=_entitlementCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * peerID;                                 //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) BOOL preloading;                                     //@synthesize preloading=_preloading - In the implementation block
@property (assign,nonatomic) BOOL preloadingExclusively;                          //@synthesize preloadingExclusively=_preloadingExclusively - In the implementation block
@property (nonatomic,readonly) BOOL isLocationd; 
@property (nonatomic,readonly) GEOProxyClient * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSObject*<OS_xpc_object>)connection;
-(NSString *)bundleVersion;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(NSString *)peerID;
-(void)_handleEvent:(id)arg1 ;
-(GEOProxyClient *)clientIdentifier;
-(id)initWithConnection:(id)arg1 daemon:(id)arg2 ;
-(BOOL)isLocationd;
-(void)setPreloading:(BOOL)arg1 ;
-(BOOL)preloading;
-(BOOL)preloadingExclusively;
-(void)setPreloadingExclusively:(BOOL)arg1 ;
-(NSMutableDictionary *)entitlementCache;
-(void)setEntitlementCache:(NSMutableDictionary *)arg1 ;
@end


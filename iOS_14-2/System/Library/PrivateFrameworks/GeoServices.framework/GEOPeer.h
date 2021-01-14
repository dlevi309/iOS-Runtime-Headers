/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSMutableDictionary* _entitlementValueCache;
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
-(id)initWithConnection:(id)arg1 daemon:(id)arg2 ;
-(BOOL)preloadingExclusively;
-(NSString *)debugIdentifier;
-(NSString *)bundleIdentifier;
-(NSString *)peerID;
-(void)setEntitlementCache:(NSMutableDictionary *)arg1 ;
-(NSString *)bundleVersion;
-(id)description;
-(void)setPreloading:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)_handleEvent:(id)arg1 ;
-(void)setPreloadingExclusively:(BOOL)arg1 ;
-(BOOL)isLocationd;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)entitlementCache;
-(BOOL)preloading;
-(GEOProxyClient *)clientIdentifier;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)dealloc;
@end


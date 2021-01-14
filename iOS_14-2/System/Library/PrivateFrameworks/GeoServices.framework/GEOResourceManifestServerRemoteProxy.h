/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject, GEOResourceManifestConfiguration, NSString, GEOActiveTileGroup;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_xpc_object> _conn;
	BOOL _sentConfigurationMessage;
	BOOL _hasOpenConnection;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	NSObject*<OS_dispatch_queue> _serverQueue;
	GEOResourceManifestConfiguration* _configuration;
	os_unfair_lock_s _authTokenLock;
	NSString* _authToken;
	int _activeTileGroupChangedNotificationToken;

}

@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serverQueue;
-(void)openConnection;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(void)closeConnection;
-(void)cancelCurrentManifestUpdate;
-(id)authToken;
-(id)_xpcConnection;
-(oneway void)resetActiveTileGroup;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performOpportunisticResourceLoading;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(id)configuration;
-(void)activateResourceScenario:(int)arg1 ;
-(void)activateResourceScale:(int)arg1 ;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)_handleMessage:(id)arg1 xpcMessage:(id)arg2 ;
-(void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)updateProgress;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
@end


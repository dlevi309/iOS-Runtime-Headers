/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
-(void)dealloc;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(id)_xpcConnection;
-(id)configuration;
-(id)authToken;
-(id)updateProgress;
-(GEOActiveTileGroup *)activeTileGroup;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)openConnection;
-(void)closeConnection;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelCurrentManifestUpdate;
-(void)activateResourceScale:(int)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)resetActiveTileGroup;
-(void)performOpportunisticResourceLoading;
-(void)_handleMessage:(id)arg1 xpcMessage:(id)arg2 ;
@end


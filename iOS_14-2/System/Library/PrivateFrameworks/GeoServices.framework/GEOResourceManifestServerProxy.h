/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEOActiveTileGroup;


@protocol GEOResourceManifestServerProxy <NSObject>
@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@required
-(id)serverQueue;
-(void)openConnection;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1;
-(void)closeConnection;
-(void)cancelCurrentManifestUpdate;
-(id)authToken;
-(oneway void)resetActiveTileGroup;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performOpportunisticResourceLoading;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1;
-(void)deactivateResourceScale:(int)arg1;
-(void)setDelegate:(id)arg1;
-(id)configuration;
-(void)activateResourceScenario:(int)arg1;
-(void)activateResourceScale:(int)arg1;
-(void)updateIfNecessary:(/*^block*/id)arg1;
-(void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(id)updateProgress;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deactivateResourceScenario:(int)arg1;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2;

@end


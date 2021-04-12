/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEOActiveTileGroup;


@protocol GEOResourceManifestServerProxy <NSObject>
@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@required
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)configuration;
-(id)authToken;
-(id)updateProgress;
-(GEOActiveTileGroup *)activeTileGroup;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2;
-(void)openConnection;
-(void)closeConnection;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateIfNecessary:(/*^block*/id)arg1;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelCurrentManifestUpdate;
-(void)activateResourceScale:(int)arg1;
-(void)activateResourceScenario:(int)arg1;
-(void)deactivateResourceScale:(int)arg1;
-(void)deactivateResourceScenario:(int)arg1;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1;
-(void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(oneway void)resetActiveTileGroup;
-(void)performOpportunisticResourceLoading;

@end


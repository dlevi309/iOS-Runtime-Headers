/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTileServerProxyDelegate <NSObject>
@optional
-(void)proxyDidDownloadRegionalResources:(id)arg1;

@required
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
-(void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;

@end


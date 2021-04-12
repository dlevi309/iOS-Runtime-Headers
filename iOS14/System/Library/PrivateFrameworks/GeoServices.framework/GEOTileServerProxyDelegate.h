/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTileServerProxyDelegate <NSObject>
@optional
-(void)proxyDidDownloadRegionalResources:(id)arg1;

@required
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
-(void)proxyDidDeleteExternalTileData:(id)arg1;

@end


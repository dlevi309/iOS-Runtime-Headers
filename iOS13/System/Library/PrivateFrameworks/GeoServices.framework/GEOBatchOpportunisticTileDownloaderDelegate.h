/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOBatchOpportunisticTileDownloaderDelegate <NSObject>
@required
-(void)batchOpportunisticTileDownloader:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7;
-(void)batchOpportunisticTileDownloader:(id)arg1 failedToLoadKey:(GEOTileKey)arg2 error:(id)arg3;
-(void)batchOpportunisticTileDownloaderDidFinish:(id)arg1;

@end


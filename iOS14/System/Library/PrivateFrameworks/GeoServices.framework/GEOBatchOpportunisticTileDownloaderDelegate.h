/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOBatchOpportunisticTileDownloaderDelegate <NSObject>
@required
-(void)batchOpportunisticTileDownloader:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7;
-(void)batchOpportunisticTileDownloaderDidFinish:(id)arg1;
-(void)batchOpportunisticTileDownloader:(id)arg1 failedToLoadKey:(GEOTileKey)arg2 error:(id)arg3;

@end


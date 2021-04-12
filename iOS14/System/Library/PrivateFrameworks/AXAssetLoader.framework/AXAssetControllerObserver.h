/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
*/


@protocol AXAssetControllerObserver <NSObject>
@optional
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;
-(void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;
-(void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(BOOL)arg5 expectedTimeRemaining:(double)arg6;
-(void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 hasRemainingDownloads:(BOOL)arg5;
-(void)assetController:(id)arg1 willUpdateCatalogForPolicy:(id)arg2;
-(void)assetController:(id)arg1 didUpdateCatalogForPolicy:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;

@end


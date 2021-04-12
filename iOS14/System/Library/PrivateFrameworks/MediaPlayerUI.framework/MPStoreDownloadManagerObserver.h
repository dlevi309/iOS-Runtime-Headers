/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/


@protocol MPStoreDownloadManagerObserver <NSObject>
@optional
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
-(void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1;

@end


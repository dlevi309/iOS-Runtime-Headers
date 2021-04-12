/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@protocol SSDownloadQueueObserver <NSObject>
@optional
-(void)downloadQueue:(id)arg1 downloadStatusChangedAtIndex:(long long)arg2;
-(void)downloadQueueNetworkUsageChanged:(id)arg1;

@required
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;

@end


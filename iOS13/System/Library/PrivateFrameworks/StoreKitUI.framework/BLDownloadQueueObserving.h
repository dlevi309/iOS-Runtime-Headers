/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol BLDownloadQueueObserving <NSObject>
@optional
-(void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
-(void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
-(void)downloadQueueDownloadsDidChange:(id)arg1;
-(void)downloadQueue:(id)arg1 purchaseAttemptForID:(id)arg2 buyParams:(id)arg3 isAudioBook:(BOOL)arg4;
-(void)downloadQueue:(id)arg1 purchaseAttemptForRequest:(id)arg2;
-(void)downloadQueue:(id)arg1 purchasedDidCompleteWithResponse:(id)arg2;
-(void)downloadQueue:(id)arg1 purchasedDidFailWithResponse:(id)arg2;

@end


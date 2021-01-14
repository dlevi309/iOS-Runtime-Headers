/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol BLDownloadQueueObserving <NSObject>
@optional
-(void)downloadQueue:(id)arg1 purchaseAttemptForRequest:(id)arg2;
-(void)downloadQueueDownloadsDidChange:(id)arg1;
-(void)downloadQueue:(id)arg1 purchaseAttemptForID:(id)arg2 buyParams:(id)arg3 isAudioBook:(BOOL)arg4;
-(void)downloadQueue:(id)arg1 purchasedDidCompleteWithResponse:(id)arg2;
-(void)downloadQueue:(id)arg1 purchasedDidFailWithResponse:(id)arg2;
-(void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
-(void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;

@end


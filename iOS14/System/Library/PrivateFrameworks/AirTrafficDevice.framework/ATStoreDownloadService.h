/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSMutableSet, NSObject;

@interface ATStoreDownloadService : NSObject {

	NSOperationQueue* _downloadQueue;
	NSOperationQueue* _restoreQueue;
	NSMutableDictionary* _downloadOperations;
	NSMutableDictionary* _restoreOperations;
	NSMutableSet* _observers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
+(id)sharedService;
+(id)downloadDirectoryPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)_prioritizeAssetRestore:(id)arg1 ;
-(void)cancelAsset:(id)arg1 ;
-(void)_enqueueAssetRestore:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 cancelPendingDownloads:(BOOL)arg3 ;
-(void)removeDownloadObserver:(id)arg1 ;
-(void)addDownloadObserver:(id)arg1 ;
-(void)_cancelAssetDownload:(id)arg1 ;
-(void)enqueueAsset:(id)arg1 ;
-(BOOL)_isSourcePurchasesForAsset:(id)arg1 ;
-(void)_enqueueAssetDownload:(id)arg1 ;
-(void)_cancelAssetRestore:(id)arg1 ;
-(void)_prioritizeAssetDownload:(id)arg1 ;
-(void)_updateStateForAsset:(id)arg1 oldState:(long long)arg2 newState:(long long)arg3 ;
-(void)_updateProgressForAsset:(id)arg1 progress:(float)arg2 ;
-(id)_newDownloadOperationForAsset:(id)arg1 ;
@end


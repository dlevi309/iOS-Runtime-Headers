/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol OS_dispatch_queue, ATAssetLinkDelegate;
@class SSDownloadManager, NSMutableDictionary, NSMapTable, NSObject, NSString;

@interface ATStoreAssetLink : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate, ATAssetLink> {

	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _assetsByStoreID;
	NSMapTable* _downloadsByAsset;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                               //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(unsigned long long)priority;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(BOOL)isOpen;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(unsigned long long)maximumBatchSize;
-(id)downloadManager;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)linkIsReady;
-(id)_assetForDownload:(id)arg1 ;
-(void)_enqueueAssets:(id)arg1 ;
-(void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 ;
-(void)_updateInstallProgress:(double)arg1 forAsset:(id)arg2 ;
-(id)_downloadForAsset:(id)arg1 error:(id*)arg2 ;
-(id)_storeKindForAssetType:(id)arg1 ;
-(id)_dataClassForStoreKind:(id)arg1 ;
-(id)_assetTypeForStoreKind:(id)arg1 ;
@end


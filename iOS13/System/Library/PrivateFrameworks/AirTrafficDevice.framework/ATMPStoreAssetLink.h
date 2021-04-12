/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue;
@class NSObject, MPStoreDownloadManager, NSMutableDictionary, NSString;

@interface ATMPStoreAssetLink : NSObject <MPStoreDownloadManagerObserver, ATAssetLink> {

	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	MPStoreDownloadManager* _downloadManager;
	NSMutableDictionary* _assetMap;
	NSMutableDictionary* _downloadsMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(unsigned long long)priority;
-(BOOL)isOpen;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(unsigned long long)maximumBatchSize;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)linkIsReady;
-(void)_enqueueAssets:(id)arg1 ;
-(void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 ;
-(id)_dataClassForStoreKind:(id)arg1 ;
-(id)_assetTypeForStoreKind:(id)arg1 ;
-(id)_errorForFinishedDownload:(id)arg1 ;
@end


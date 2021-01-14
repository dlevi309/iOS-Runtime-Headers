/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)open;
-(id)init;
-(id<ATAssetLinkDelegate>)delegate;
-(BOOL)isOpen;
-(void)close;
-(void)cancelAssets:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 ;
-(void)prioritizeAsset:(id)arg1 ;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(id)_assetTypeForStoreKind:(id)arg1 ;
-(void)_enqueueAssets:(id)arg1 ;
-(id)_dataClassForStoreKind:(id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(unsigned long long)maximumBatchSize;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(unsigned long long)priority;
-(BOOL)linkIsReady;
-(id)_errorForFinishedDownload:(id)arg1 ;
@end


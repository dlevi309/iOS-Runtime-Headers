/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMPMediaItemDownloadController.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface VUIMPMediaItemCloudDownloadController : VUIMPMediaItemDownloadController <MPStoreDownloadManagerObserver> {

	MPStoreDownload* _storeDownload;

}

@property (nonatomic,retain) MPStoreDownload * storeDownload;              //@synthesize storeDownload=_storeDownload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stateFromStoreDownload:(id)arg1 ;
-(void)dealloc;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2 ;
-(BOOL)supportsPausing;
-(id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3 ;
-(void)_addStoreObserver;
-(void)_removeStoreObserver;
-(MPStoreDownload *)storeDownload;
-(void)_onProcessingQueue_invalidate;
-(void)setStoreDownload:(MPStoreDownload *)arg1 ;
-(BOOL)isRestoreDownload;
-(void)_onProcessingQueue_cancelDownload;
-(void)_onProcessingQueue_pauseDownload;
-(void)_onProcessingQueue_resumeDownload;
@end


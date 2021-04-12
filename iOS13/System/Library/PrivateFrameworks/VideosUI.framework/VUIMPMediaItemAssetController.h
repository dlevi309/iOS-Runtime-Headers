/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIMPMediaItemDownloadControllerObserver.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <libobjc.A.dylib/VUIMediaEntityAssetController.h>

@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;
@class NSObject, VUIMediaEntityAssetControllerState, VUIMPMediaItemDownloadController, MPMediaItem, NSString, VUIMediaEntityType;

@interface VUIMPMediaItemAssetController : NSObject <VUIMPMediaItemDownloadControllerObserver, MPStoreDownloadManagerObserver, VUIMediaEntityAssetController> {

	BOOL _supportsStartingDownload;
	BOOL _requestingPermissionToDownload;
	NSObject*<OS_dispatch_queue> _completionDispatchQueue;
	id<VUIMediaEntityAssetControllerDelegate> _delegate;
	VUIMediaEntityAssetControllerState* _state;
	NSObject*<VUIMediaEntityIdentifier> _mediaEntityIdentifier;
	VUIMPMediaItemDownloadController* _downloadController;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	MPMediaItem* _mediaItem;

}

@property (nonatomic,copy) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifier;                                  //@synthesize mediaEntityIdentifier=_mediaEntityIdentifier - In the implementation block
@property (nonatomic,retain) VUIMPMediaItemDownloadController * downloadController;                                    //@synthesize downloadController=_downloadController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;                               //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (assign,getter=isRequestingPermissionToDownload,nonatomic) BOOL requestingPermissionToDownload;              //@synthesize requestingPermissionToDownload=_requestingPermissionToDownload - In the implementation block
@property (nonatomic,readonly) MPMediaItem * mediaItem;                                                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * mediaEntityType; 
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsStartingDownload;                                                          //@synthesize supportsStartingDownload=_supportsStartingDownload - In the implementation block
@property (nonatomic,copy,readonly) VUIMediaEntityAssetControllerState * state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue;                                     //@synthesize completionDispatchQueue=_completionDispatchQueue - In the implementation block
+(BOOL)_supportsStartingDownloadWithMediaItem:(id)arg1 ;
+(unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<VUIMediaEntityAssetControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIMediaEntityAssetControllerDelegate>)arg1 ;
-(VUIMediaEntityAssetControllerState *)state;
-(BOOL)_isDownloaded;
-(MPMediaItem *)mediaItem;
-(VUIMediaEntityType *)mediaEntityType;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)resumeDownload;
-(void)cancelAndRemoveDownload;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)_enqueueCompletionQueueBlock:(/*^block*/id)arg1 ;
-(void)setCompletionDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifier;
-(void)startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)pauseDownload;
-(BOOL)supportsStartingDownload;
-(id)initWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_onProcessingQueue_invalidate;
-(void)_onProcessingQueue_calculateStateAndNotify:(BOOL)arg1 ;
-(void)_onProcessingQueue_invalidateAndSetState;
-(void)_enqueueAsyncProcessingQueueStrongSelfBlock:(/*^block*/id)arg1 ;
-(void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_onProcessingQueue_downloadController;
-(void)_onProcessingQueue_cancelAndRemoveDownload;
-(void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 downloadProgress:(double)arg2 bytesDownloaded:(unsigned long long)arg3 bytesToDownload:(unsigned long long)arg4 supportsPausing:(BOOL)arg5 supportsCancellation:(BOOL)arg6 notify:(BOOL)arg7 ;
-(void)_onProcessingQueue_startMonitoringDownload;
-(void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 notify:(BOOL)arg2 ;
-(void)_onProcessingQueue_setDownloadController:(id)arg1 ;
-(void)_notifyDelegateStateDidChange:(id)arg1 ;
-(void)mediaItemDownloadController:(id)arg1 stateDidChange:(id)arg2 ;
-(void)setMediaEntityIdentifier:(NSObject*<VUIMediaEntityIdentifier>)arg1 ;
-(VUIMPMediaItemDownloadController *)downloadController;
-(void)setDownloadController:(VUIMPMediaItemDownloadController *)arg1 ;
-(BOOL)isRequestingPermissionToDownload;
-(void)setRequestingPermissionToDownload:(BOOL)arg1 ;
@end


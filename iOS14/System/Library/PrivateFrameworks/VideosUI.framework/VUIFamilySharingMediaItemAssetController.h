/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/VUIMediaEntityAssetController.h>

@protocol VUIMediaEntityIdentifier, OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate;
@class VUIMediaEntityType, VUIMediaEntityAssetControllerState, VUIFamilySharingMediaItem, NSObject, SSDownloadManager, SSDownload, NSTimer, NSString;

@interface VUIFamilySharingMediaItemAssetController : NSObject <SSPurchaseManagerDelegate, SSDownloadManagerObserver, VUIMediaEntityAssetController> {

	BOOL _observingDownload;
	VUIFamilySharingMediaItem* _mediaItemInternal;
	NSObject*<VUIMediaEntityIdentifier> _mediaEntityIdentifierInternal;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _completionDispatchQueueInternal;
	id<VUIMediaEntityAssetControllerDelegate> _delegateInternal;
	VUIMediaEntityAssetControllerState* _stateInternal;
	SSDownloadManager* _ssDownloadManager;
	SSDownload* _downloadInternal;
	NSTimer* _waitForDeletionTimer;

}

@property (nonatomic,retain) VUIFamilySharingMediaItem * mediaItemInternal;                                  //@synthesize mediaItemInternal=_mediaItemInternal - In the implementation block
@property (nonatomic,copy) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifierInternal;                //@synthesize mediaEntityIdentifierInternal=_mediaEntityIdentifierInternal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueueInternal;                   //@synthesize completionDispatchQueueInternal=_completionDispatchQueueInternal - In the implementation block
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegateInternal;              //@synthesize delegateInternal=_delegateInternal - In the implementation block
@property (nonatomic,retain) VUIMediaEntityAssetControllerState * stateInternal;                             //@synthesize stateInternal=_stateInternal - In the implementation block
@property (nonatomic,retain) SSDownloadManager * ssDownloadManager;                                          //@synthesize ssDownloadManager=_ssDownloadManager - In the implementation block
@property (nonatomic,retain) SSDownload * downloadInternal;                                                  //@synthesize downloadInternal=_downloadInternal - In the implementation block
@property (assign,nonatomic) BOOL observingDownload;                                                         //@synthesize observingDownload=_observingDownload - In the implementation block
@property (nonatomic,retain) NSTimer * waitForDeletionTimer;                                                 //@synthesize waitForDeletionTimer=_waitForDeletionTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifier; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * mediaEntityType; 
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL supportsStartingDownload; 
@property (nonatomic,readonly) BOOL supportsRedownloadingContent; 
@property (nonatomic,copy,readonly) VUIMediaEntityAssetControllerState * state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue; 
@property (nonatomic,readonly) BOOL contentAllowsCellularDownload; 
+(void)initialize;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<VUIMediaEntityAssetControllerDelegate>)delegate;
-(VUIMediaEntityType *)mediaEntityType;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<VUIMediaEntityAssetControllerDelegate>)arg1 ;
-(VUIMediaEntityAssetControllerState *)state;
-(void)invalidate;
-(void)cancelAndRemoveDownload;
-(void)setCompletionDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchNewKeysForDownloadedVideo;
-(BOOL)contentAllowsCellularDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateObservedDownload;
-(void)_updateDownloadStateAndNotifyDelegates;
-(id)initWithFamilySharingMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2 ;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifier;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifierInternal;
-(void)setDelegateInternal:(id<VUIMediaEntityAssetControllerDelegate>)arg1 ;
-(id<VUIMediaEntityAssetControllerDelegate>)delegateInternal;
-(void)setCompletionDispatchQueueInternal:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueueInternal;
-(VUIFamilySharingMediaItem *)mediaItemInternal;
-(BOOL)observingDownload;
-(SSDownloadManager *)ssDownloadManager;
-(void)setObservingDownload:(BOOL)arg1 ;
-(void)_cancelAndRemoveDownloadWithCompletion:(/*^block*/id)arg1 ;
-(VUIMediaEntityAssetControllerState *)stateInternal;
-(SSDownload *)downloadInternal;
-(void)setDownloadInternal:(SSDownload *)arg1 ;
-(void)setStateInternal:(VUIMediaEntityAssetControllerState *)arg1 ;
-(NSTimer *)waitForDeletionTimer;
-(void)setWaitForDeletionTimer:(NSTimer *)arg1 ;
-(void)deleteAndRedownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)pauseDownload;
-(void)resumeDownload;
-(void)cancelKeyFetch;
-(BOOL)supportsStartingDownload;
-(BOOL)supportsRedownloadingContent;
-(id)initWithVideosPlayable:(id)arg1 ;
-(void)setMediaItemInternal:(VUIFamilySharingMediaItem *)arg1 ;
-(void)setMediaEntityIdentifierInternal:(NSObject*<VUIMediaEntityIdentifier>)arg1 ;
-(void)setSsDownloadManager:(SSDownloadManager *)arg1 ;
@end

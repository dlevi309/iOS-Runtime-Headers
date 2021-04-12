/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIMediaEntityAssetControllerDelegate.h>
#import <libobjc.A.dylib/VUIMediaEntityAssetController.h>

@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;
@class NSObject, VUIMediaEntityAssetControllerState, MPMediaItemCollection, NSArray, NSString, VUIMediaEntityType;

@interface VUIMPMediaItemCollectionAssetController : NSObject <VUIMediaEntityAssetControllerDelegate, VUIMediaEntityAssetController> {

	BOOL _supportsStartingDownload;
	NSObject*<OS_dispatch_queue> _completionDispatchQueue;
	id<VUIMediaEntityAssetControllerDelegate> _delegate;
	NSObject*<VUIMediaEntityIdentifier> _mediaEntityIdentifier;
	VUIMediaEntityAssetControllerState* _state;
	MPMediaItemCollection* _mediaItemCollection;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSArray* _assetControllers;
	unsigned long long _fullyDownloadedAssetBytes;

}

@property (nonatomic,copy) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifier;                 //@synthesize mediaEntityIdentifier=_mediaEntityIdentifier - In the implementation block
@property (nonatomic,copy) VUIMediaEntityAssetControllerState * state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) MPMediaItemCollection * mediaItemCollection;                             //@synthesize mediaItemCollection=_mediaItemCollection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSArray * assetControllers;                                              //@synthesize assetControllers=_assetControllers - In the implementation block
@property (assign,nonatomic) unsigned long long fullyDownloadedAssetBytes;                            //@synthesize fullyDownloadedAssetBytes=_fullyDownloadedAssetBytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * mediaEntityType; 
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsStartingDownload;                                         //@synthesize supportsStartingDownload=_supportsStartingDownload - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue;                    //@synthesize completionDispatchQueue=_completionDispatchQueue - In the implementation block
+(id)_downloadingAssetControllersWithAssetControllers:(id)arg1 ;
+(id)_stateFromDownloadingAssetControllers:(id)arg1 fullyDownloadedAssetBytes:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<VUIMediaEntityAssetControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIMediaEntityAssetControllerDelegate>)arg1 ;
-(VUIMediaEntityAssetControllerState *)state;
-(void)setState:(VUIMediaEntityAssetControllerState *)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)resumeDownload;
-(void)cancelAndRemoveDownload;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)_enqueueCompletionQueueBlock:(/*^block*/id)arg1 ;
-(void)setCompletionDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MPMediaItemCollection *)mediaItemCollection;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifier;
-(void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2 ;
-(void)startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)pauseDownload;
-(BOOL)supportsStartingDownload;
-(id)initWithMediaItemCollection:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3 ;
-(void)_onProcessingQueue_invalidate;
-(void)_onProcessingQueue_pauseDownload;
-(void)_onProcessingQueue_resumeDownload;
-(void)setMediaItemCollection:(MPMediaItemCollection *)arg1 ;
-(void)_enqueueAsyncProcessingQueueStrongSelfBlock:(/*^block*/id)arg1 ;
-(void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_onProcessingQueue_cancelAndRemoveDownload;
-(void)_notifyDelegateStateDidChange:(id)arg1 ;
-(void)setMediaEntityIdentifier:(NSObject*<VUIMediaEntityIdentifier>)arg1 ;
-(void)_onProcessingQueue_updateStateAndNotifyDelegate:(BOOL)arg1 ;
-(unsigned long long)fullyDownloadedAssetBytes;
-(void)setFullyDownloadedAssetBytes:(unsigned long long)arg1 ;
-(NSArray *)assetControllers;
-(void)setAssetControllers:(NSArray *)arg1 ;
-(void)_onProcessingQueue_setState:(id)arg1 andNotifyDelegate:(BOOL)arg2 ;
-(BOOL)_allAssetsDownloaded;
@end


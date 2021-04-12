/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIDownloadManagerDelegate.h>
#import <libobjc.A.dylib/TVPDownloadDelegate.h>
#import <libobjc.A.dylib/VUIMediaEntityAssetController.h>

@protocol VUIMediaEntityIdentifier, VUIMediaEntityAssetControllerDelegate, OS_dispatch_queue;
@class VUIVideoManagedObject, NSObject, VUIMediaEntityAssetControllerState, TVPDownload, NSString, VUIMediaEntityType;

@interface VUISidebandMediaItemAssetController : NSObject <VUIDownloadManagerDelegate, TVPDownloadDelegate, VUIMediaEntityAssetController> {

	VUIVideoManagedObject* _videoManagedObjectInternal;
	NSObject*<VUIMediaEntityIdentifier> _mediaEntityIdentifierInternal;
	id<VUIMediaEntityAssetControllerDelegate> _delegateInternal;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _completionDispatchQueueInternal;
	VUIMediaEntityAssetControllerState* _stateInternal;
	TVPDownload* _downloadInternal;

}

@property (nonatomic,retain) VUIVideoManagedObject * videoManagedObjectInternal;                             //@synthesize videoManagedObjectInternal=_videoManagedObjectInternal - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifierInternal;              //@synthesize mediaEntityIdentifierInternal=_mediaEntityIdentifierInternal - In the implementation block
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegateInternal;              //@synthesize delegateInternal=_delegateInternal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueueInternal;                   //@synthesize completionDispatchQueueInternal=_completionDispatchQueueInternal - In the implementation block
@property (nonatomic,retain) VUIMediaEntityAssetControllerState * stateInternal;                             //@synthesize stateInternal=_stateInternal - In the implementation block
@property (nonatomic,retain) TVPDownload * downloadInternal;                                                 //@synthesize downloadInternal=_downloadInternal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifier; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * mediaEntityType; 
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL supportsStartingDownload; 
@property (nonatomic,copy,readonly) VUIMediaEntityAssetControllerState * state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue; 
-(void)dealloc;
-(void)invalidate;
-(id<VUIMediaEntityAssetControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIMediaEntityAssetControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(VUIMediaEntityAssetControllerState *)state;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)resumeDownload;
-(void)download:(id)arg1 progressDidChange:(double)arg2 ;
-(void)download:(id)arg1 didChangeStateTo:(long long)arg2 ;
-(void)cancelAndRemoveDownload;
-(void)setCompletionDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_updateObservedDownload;
-(void)_updateDownloadStateAndNotifyDelegates;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifier;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifierInternal;
-(void)setDelegateInternal:(id<VUIMediaEntityAssetControllerDelegate>)arg1 ;
-(id<VUIMediaEntityAssetControllerDelegate>)delegateInternal;
-(void)setCompletionDispatchQueueInternal:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueueInternal;
-(VUIMediaEntityAssetControllerState *)stateInternal;
-(TVPDownload *)downloadInternal;
-(void)setDownloadInternal:(TVPDownload *)arg1 ;
-(void)setStateInternal:(VUIMediaEntityAssetControllerState *)arg1 ;
-(void)startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)pauseDownload;
-(BOOL)supportsStartingDownload;
-(void)setMediaEntityIdentifierInternal:(NSObject*<VUIMediaEntityIdentifier>)arg1 ;
-(VUIVideoManagedObject *)videoManagedObjectInternal;
-(id)initWithVideoManagedObject:(id)arg1 mediaEntityIdentifier:(id)arg2 ;
-(void)setVideoManagedObjectInternal:(VUIVideoManagedObject *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGridInlinePlaybackController.h>

@protocol OS_dispatch_queue, PXPhotosDetailsInlinePlaybackControllerDelegate;
@class NSObject, PXTilingController;

@interface PXPhotosDetailsInlinePlaybackController : PXGridInlinePlaybackController {

	NSObject*<OS_dispatch_queue> _recordCreationQueue;
	PXTilingController* _tilingController;
	id<PXPhotosDetailsInlinePlaybackControllerDelegate> _delegate;

}

@property (nonatomic,readonly) PXTilingController * tilingController;                                          //@synthesize tilingController=_tilingController - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosDetailsInlinePlaybackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(CGRect)currentVisibleRect;
-(id<PXPhotosDetailsInlinePlaybackControllerDelegate>)delegate;
-(CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out CGSize*)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(PXTilingController *)tilingController;
-(void)setDelegate:(id<PXPhotosDetailsInlinePlaybackControllerDelegate>)arg1 ;
-(id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 ;
-(BOOL)canPlayAsset:(id)arg1 ;
-(BOOL)shouldEnablePlayback;
-(id)initWithTilingController:(id)arg1 ;
-(BOOL)_isRecognizedTileIdentifier:(PXTileIdentifier)arg1 ;
-(PXTileIdentifier)_currentTileIdentifierForRecord:(id)arg1 ;
-(void)checkOutTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void)updatePlaybackEnabled;
@end


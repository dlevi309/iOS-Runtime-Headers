/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDisplayAssetUIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class ISLivePhotoUIView, AVPlayerItem, NSString;

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <PXChangeObserver> {

	ISLivePhotoUIView* _livePhotoView;
	long long _requestID;
	AVPlayerItem* _videoPlayerItem;

}

@property (nonatomic,retain) AVPlayerItem * videoPlayerItem;              //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateContent;
-(void)_updateLivePhotoPlayerItem;
-(void)placeholderImageFiltersDidChange;
-(void)contentsRectDidChange;
-(BOOL)isDisplayingFullQualityContent;
-(void)setVideoPlayerItem:(AVPlayerItem *)arg1 ;
-(void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3 ;
-(AVPlayerItem *)videoPlayerItem;
-(void)imageDidChange;
-(long long)playbackStyle;
-(id)contentView;
@end


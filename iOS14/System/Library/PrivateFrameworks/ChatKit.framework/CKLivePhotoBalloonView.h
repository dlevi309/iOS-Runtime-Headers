/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>

@class PHLivePhotoView, PHLivePhoto;

@interface CKLivePhotoBalloonView : CKImageBalloonView {

	BOOL _isIrisAsset;
	PHLivePhotoView* _livePhotoView;
	PHLivePhoto* _livePhoto;

}

@property (nonatomic,retain) PHLivePhotoView * livePhotoView;              //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                      //@synthesize livePhoto=_livePhoto - In the implementation block
-(PHLivePhotoView *)livePhotoView;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(PHLivePhoto *)livePhoto;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 hasInvisibleInkEffect:(BOOL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isIrisAsset;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(void)setLivePhotoView:(PHLivePhotoView *)arg1 ;
@end


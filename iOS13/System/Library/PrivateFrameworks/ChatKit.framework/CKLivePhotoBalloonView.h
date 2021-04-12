/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PHLivePhoto *)livePhoto;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(BOOL)isIrisAsset;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(PHLivePhotoView *)livePhotoView;
-(void)setLivePhotoView:(PHLivePhotoView *)arg1 ;
@end


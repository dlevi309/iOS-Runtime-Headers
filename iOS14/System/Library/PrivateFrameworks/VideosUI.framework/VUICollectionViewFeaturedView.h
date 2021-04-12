/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, UIView;

@interface VUICollectionViewFeaturedView : UIView {

	_TVImageView* _imageView;
	UIView* _overlayView;

}

@property (nonatomic,retain) _TVImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                  //@synthesize overlayView=_overlayView - In the implementation block
-(void)setImageView:(_TVImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)overlayView;
-(_TVImageView *)imageView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)layoutSubviews;
@end


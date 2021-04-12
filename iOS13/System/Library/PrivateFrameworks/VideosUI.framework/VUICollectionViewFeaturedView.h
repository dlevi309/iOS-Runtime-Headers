/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIView *)overlayView;
@end


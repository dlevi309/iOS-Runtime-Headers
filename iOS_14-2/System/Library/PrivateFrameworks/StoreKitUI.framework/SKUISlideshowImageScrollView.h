/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIImageView, UIImage;

@interface SKUISlideshowImageScrollView : UIScrollView {

	UIImageView* _imageView;
	CGPoint _centerPointBeforeResize;
	double _scaleBeforeResize;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(UIImageView *)imageView;
-(void)resetZoomScale;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_prepareToResize;
-(void)_recoverFromResize;
-(void)_resetMinMaxZoomScales;
-(void)zoomIntoPoint:(CGPoint)arg1 ;
@end


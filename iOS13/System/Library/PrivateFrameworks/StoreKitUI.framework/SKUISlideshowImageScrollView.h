/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGRect)visibleRect;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)_prepareToResize;
-(void)_recoverFromResize;
-(void)_resetMinMaxZoomScales;
-(void)resetZoomScale;
-(void)zoomIntoPoint:(CGPoint)arg1 ;
@end


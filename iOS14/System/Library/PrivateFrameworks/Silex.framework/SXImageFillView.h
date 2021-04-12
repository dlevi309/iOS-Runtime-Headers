/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFillView.h>

@class SXClippingView, SXImageFill, SXImageResource, SXImageView, UIImage, SXAnimatedImage;

@interface SXImageFillView : SXFillView {

	SXClippingView* _clippingView;
	SXImageFill* _imageFill;
	SXImageResource* _imageResource;
	SXImageView* _imageView;

}

@property (nonatomic,retain) SXClippingView * clippingView;                  //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) SXImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) SXImageFill * imageFill;                      //@synthesize imageFill=_imageFill - In the implementation block
@property (nonatomic,readonly) SXImageResource * imageResource;              //@synthesize imageResource=_imageResource - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) SXAnimatedImage * animatedImage; 
-(void)load;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXImageView *)imageView;
-(void)pause;
-(void)play;
-(SXImageResource *)imageResource;
-(SXAnimatedImage *)animatedImage;
-(UIImage *)image;
-(SXClippingView *)clippingView;
-(void)layoutSubviews;
-(id)dragable;
-(void)setClippingView:(SXClippingView *)arg1 ;
-(void)dealloc;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithImageFill:(id)arg1 imageResource:(id)arg2 imageViewFactory:(id)arg3 ;
-(SXImageFill *)imageFill;
@end


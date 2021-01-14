/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUStackItemView.h>

@class UIImageView, UIImage;

@interface MPUImageStackItemView : MPUStackItemView {

	UIImageView* _imageView;
	UIImage* _image;
	double _imageAlpha;
	CGRect _imageContentsRect;
	CGAffineTransform _imageTransform;

}

@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double imageAlpha;                             //@synthesize imageAlpha=_imageAlpha - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                      //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform;              //@synthesize imageTransform=_imageTransform - In the implementation block
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)imageTransform;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)imageAlpha;
-(UIImage *)image;
-(CGRect)imageContentsRect;
-(void)layoutSubviews;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageAlpha:(double)arg1 ;
@end


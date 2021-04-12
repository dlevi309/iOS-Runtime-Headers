/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setImageAlpha:(double)arg1 ;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGRect)imageContentsRect;
-(double)imageAlpha;
-(CGAffineTransform)imageTransform;
@end


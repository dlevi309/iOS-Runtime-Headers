/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIImage;

@interface SKUIIPhoneSlideshowCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIImageView* _playIcon;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (assign,getter=isVideo,nonatomic) BOOL video; 
@property (assign,nonatomic) CGSize imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
-(CGSize)imageSize;
-(void)setVideo:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)imageFrame;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)layoutSubviews;
-(BOOL)isVideo;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)imageSize;
-(BOOL)isVideo;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setVideo:(BOOL)arg1 ;
-(CGRect)imageFrame;
@end


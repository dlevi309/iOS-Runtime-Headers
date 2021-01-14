/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SKUITrailersCell : UICollectionViewCell {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)imageFrame;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end


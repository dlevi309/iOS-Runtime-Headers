/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class UILabel, UIImageView, UIColor, NSString, UIImage;

@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout {

	UILabel* _artistNameLabel;
	UILabel* _categoryLabel;
	UIImageView* _iconHighlightImageView;
	UILabel* _itemCountLabel;
	CGSize _maxImageSize;
	UILabel* _priceLabel;
	UIColor* _primaryTextColor;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	UIImageView* _videoHighlightImageView;
	UIImageView* _videoImageView;
	UIImageView* _videoPlayButtonImageView;
	CGSize _videoSize;
	unsigned long long _visibleFields;

}

@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSString * itemCountString; 
@property (nonatomic,copy) NSString * price; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) CGSize videoSize;                              //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,retain) UIImage * videoThumbnailImage; 
@property (assign,nonatomic) CGSize maxImageSize;                           //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (assign,nonatomic) unsigned long long visibleFields;              //@synthesize visibleFields=_visibleFields - In the implementation block
-(NSString *)price;
-(CGSize)videoSize;
-(void)setCategory:(NSString *)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)artistName;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setPrice:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)maxImageSize;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)_newDefaultLabel;
-(NSString *)itemCountString;
-(void)setItemCountString:(NSString *)arg1 ;
-(void)setVisibleFields:(unsigned long long)arg1 ;
-(unsigned long long)visibleFields;
-(void)setItemOffer:(id)arg1 ;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(UIImage *)videoThumbnailImage;
-(void)setVideoThumbnailImage:(UIImage *)arg1 ;
-(void)_reloadHighlight;
-(void)setMaxImageSize:(CGSize)arg1 ;
-(void)setVideoSize:(CGSize)arg1 ;
-(CGSize)cellSizeForImageOfSize:(CGSize)arg1 ;
-(void)_layoutFieldsHorizontal;
-(void)_layoutFieldsVertical;
-(void)_reloadPriceLabel;
-(void)_removeHighlightViews;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@class SKUIGiftConfiguration, SKUIGift, UIImageView, SKUIGiftItemView, UILabel, SKUIGiftTheme, UIImage;

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell {

	SKUIGiftConfiguration* _giftConfiguration;
	SKUIGift* _gift;
	UIImageView* _headerImageView;
	SKUIGiftItemView* _itemView;
	UILabel* _messageLabel;
	UILabel* _priceLabel;
	UILabel* _senderNameLabel;
	UILabel* _senderNameLabelLabel;
	SKUIGiftTheme* _theme;

}

@property (nonatomic,retain) SKUIGiftConfiguration * giftConfiguration;              //@synthesize giftConfiguration=_giftConfiguration - In the implementation block
@property (nonatomic,retain) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (nonatomic,retain) SKUIGiftTheme * theme;                                  //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
-(SKUIGiftTheme *)theme;
-(void)_setMessage:(id)arg1 ;
-(SKUIGift *)gift;
-(UIImage *)itemImage;
-(id)_itemView;
-(void)setTheme:(SKUIGiftTheme *)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setGift:(SKUIGift *)arg1 ;
-(SKUIGiftConfiguration *)giftConfiguration;
-(void)reloadThemeHeaderImage;
-(void)setGiftConfiguration:(SKUIGiftConfiguration *)arg1 ;
-(void)_setHeaderImage:(id)arg1 ;
-(void)_setSenderName:(id)arg1 ;
-(void)_reloadItemView;
@end


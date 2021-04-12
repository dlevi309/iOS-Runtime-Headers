/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)_setMessage:(id)arg1 ;
-(id)_itemView;
-(SKUIGiftTheme *)theme;
-(void)setTheme:(SKUIGiftTheme *)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(SKUIGift *)gift;
-(SKUIGiftConfiguration *)giftConfiguration;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)setGift:(SKUIGift *)arg1 ;
-(void)reloadThemeHeaderImage;
-(void)setGiftConfiguration:(SKUIGiftConfiguration *)arg1 ;
-(UIImage *)itemImage;
-(void)_setHeaderImage:(id)arg1 ;
-(void)_setSenderName:(id)arg1 ;
-(void)_reloadItemView;
@end


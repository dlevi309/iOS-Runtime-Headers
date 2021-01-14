/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, SKUIClientContext, SKUIItem, UIImageView, SKUIItemOfferButton, SKUIItemState, UILabel, SKUIGiftTheme, UIImage, SKUIItemArtworkContext;

@interface SKUIGiftItemView : UIView {

	NSString* _artistName;
	NSString* _categoryName;
	SKUIClientContext* _clientContext;
	SKUIItem* _item;
	UIImageView* _itemImageView;
	SKUIItemOfferButton* _itemOfferButton;
	SKUIItemState* _itemState;
	long long _itemStyle;
	long long _numberOfUserRatings;
	NSString* _price;
	UIImageView* _starRatingImageView;
	UILabel* _subtitleLabel1;
	UILabel* _subtitleLabel2;
	SKUIGiftTheme* _theme;
	UILabel* _titleLabel;
	float _userRating;
	UILabel* _userRatingCountLabel;
	BOOL _leftToRight;

}

@property (assign,nonatomic) BOOL leftToRight;                                       //@synthesize leftToRight=_leftToRight - In the implementation block
@property (nonatomic,readonly) long long giftItemStyle;                              //@synthesize itemStyle=_itemStyle - In the implementation block
@property (nonatomic,readonly) SKUIItem * item;                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) SKUIGiftTheme * theme;                                    //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                                  //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * price;                                         //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long numberOfUserRatings;                          //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float userRating;                                       //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButton * itemOfferButton;                //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (nonatomic,retain) SKUIItemState * itemState;                              //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
@property (nonatomic,readonly) SKUIItemArtworkContext * artworkContext; 
-(NSString *)price;
-(SKUIGiftTheme *)theme;
-(void)setUserRating:(float)arg1 ;
-(SKUIItemState *)itemState;
-(void)setArtistName:(NSString *)arg1 ;
-(SKUIItem *)item;
-(id)_newLabel;
-(long long)numberOfUserRatings;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)itemImage;
-(void)setTheme:(SKUIGiftTheme *)arg1 ;
-(UIEdgeInsets)_imageEdgeInsets;
-(NSString *)artistName;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setItemImage:(UIImage *)arg1 ;
-(CGSize)_imageSize;
-(id)_subtitleColor;
-(void)layoutSubviews;
-(void)setLeftToRight:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPrice:(NSString *)arg1 ;
-(float)userRating;
-(id)_titleColor;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(BOOL)leftToRight;
-(NSString *)title;
-(void)setItemState:(SKUIItemState *)arg1 ;
-(void)dealloc;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)_reloadUserRatingViews;
-(SKUIItemOfferButton *)itemOfferButton;
-(SKUIItemArtworkContext *)artworkContext;
-(id)initWithStyle:(long long)arg1 item:(id)arg2 clientContext:(id)arg3 ;
-(void)_reloadItemState:(BOOL)arg1 ;
-(void)_itemOfferConfirmAction:(id)arg1 ;
-(void)_reloadSubtitles;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(double)_paddingTrailing;
-(double)_paddingLeading;
-(void)_enumerateMetadataViewsUsingBlock:(/*^block*/id)arg1 ;
-(id)_userRatingColor;
-(long long)giftItemStyle;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIImageView, SKUIGiftItemView, UILabel, UIImage, NSString;

@interface SKUIGiftResultView : UIView {

	UIButton* _giftAgainButton;
	UIImageView* _imageView;
	SKUIGiftItemView* _itemView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UIButton * giftAgainButton;              //@synthesize giftAgainButton=_giftAgainButton - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIGiftItemView * itemView;               //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(SKUIGiftItemView *)itemView;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(NSString *)title;
-(void)setItemView:(SKUIGiftItemView *)arg1 ;
-(UIButton *)giftAgainButton;
@end


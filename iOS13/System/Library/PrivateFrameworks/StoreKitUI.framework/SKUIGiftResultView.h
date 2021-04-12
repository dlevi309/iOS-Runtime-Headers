/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setItemView:(SKUIGiftItemView *)arg1 ;
-(UIButton *)giftAgainButton;
-(SKUIGiftItemView *)itemView;
@end


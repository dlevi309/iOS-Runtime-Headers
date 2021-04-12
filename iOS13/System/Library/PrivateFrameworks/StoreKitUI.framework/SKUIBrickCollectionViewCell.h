/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, SKUIClientContext, SKUICountdownView, UIImageView, UIColor, UILabel, SKUICountdown, UIImage, UIView;

@interface SKUIBrickCollectionViewCell : UICollectionViewCell {

	NSString* _accessibilityLabel;
	SKUIClientContext* _clientContext;
	SKUICountdownView* _countdownView;
	BOOL _itemImageHidden;
	UIEdgeInsets _itemImageInsets;
	UIImageView* _itemImageView;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	UIImageView* _overlayImageView;

}

@property (nonatomic,copy) NSString * accessibilityLabel;                                //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SKUICountdown * countdown; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
@property (assign,getter=isItemImageHidden,nonatomic) BOOL itemImageHidden;              //@synthesize itemImageHidden=_itemImageHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets itemImageInsets;                               //@synthesize itemImageInsets=_itemImageInsets - In the implementation block
@property (nonatomic,readonly) UIView * itemImageView;                                   //@synthesize itemImageView=_itemImageView - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(SKUICountdown *)countdown;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)setCountdown:(SKUICountdown *)arg1 ;
-(UIImage *)itemImage;
-(void)_reloadHighlight;
-(BOOL)isItemImageHidden;
-(void)_removeOverlay;
-(void)setItemImageHidden:(BOOL)arg1 ;
-(void)setItemImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)itemImageInsets;
-(UIView *)itemImageView;
@end


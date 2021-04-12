/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUIEditorialCellLayout, UIView, SKUILockupItemCellLayout, SKUICellLayoutView, UIColor, SKUITextBoxView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout {

	UIEdgeInsets _contentInsets;
	SKUIEditorialCellLayout* _editorialCellLayout;
	UIView* _editorialContainerView;
	double _editorialHeight;
	long long _layoutStyle;
	SKUILockupItemCellLayout* _lockupLayout;
	SKUICellLayoutView* _lockupView;
	UIColor* _offerNoticeTextColor;
	SKUITextBoxView* _textBoxView;
	unsigned long long _visibleFields;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                      //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) unsigned long long visibleFields;                           //@synthesize visibleFields=_visibleFields - In the implementation block
@property (nonatomic,readonly) SKUILockupItemCellLayout * lockupCellLayout; 
@property (nonatomic,readonly) SKUITextBoxView * textBoxView; 
+(double)editorialWidthForCellWidth:(double)arg1 lockupStyle:(SKUILockupStyle)arg2 ;
+(double)_imagePaddingForArtworkSize:(long long)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)iconImageView;
-(id)itemState;
-(id)iconImage;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(id)itemOffer;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)setVisibleFields:(unsigned long long)arg1 ;
-(unsigned long long)visibleFields;
-(void)setItemOffer:(id)arg1 ;
-(id)_lockupView;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 ;
-(void)setIconImageHidden:(BOOL)arg1 ;
-(SKUITextBoxView *)textBoxView;
-(SKUILockupItemCellLayout *)lockupCellLayout;
-(void)setItemOfferButtonAppearance:(id)arg1 ;
-(BOOL)isIconImageHidden;
-(void)layoutForItemOfferChange;
-(id)itemOfferNoticeString;
-(void)setItemOfferNoticeString:(id)arg1 ;
-(id)_editorialContainerView;
-(id)_editorialCellLayout;
-(BOOL)_showsItemOfferUnderEditorial;
-(BOOL)_isItemOfferButtonHidden;
@end


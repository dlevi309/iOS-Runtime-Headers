/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class UIButton, SKUIButtonViewElement, SKUIViewElement;

@interface SKUIButtonFooterSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {

	UIButton* _button;
	SKUIButtonViewElement* _buttonElement;
	SKUIViewElement* _viewElement;

}
+(CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3 ;
+(id)_buttonWithButtonElement:(id)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)_reloadWithButtonElement:(id)arg1 context:(id)arg2 ;
@end


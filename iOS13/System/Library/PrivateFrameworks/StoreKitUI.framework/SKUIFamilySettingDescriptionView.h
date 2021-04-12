/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingDescriptionView.h>

@class UIActivityIndicatorView, UIImageView, UILabel, SKUIViewElementLayoutContext, SKUISettingsFamilyViewElement;

@interface SKUIFamilySettingDescriptionView : SKUISettingDescriptionView {

	UIActivityIndicatorView* _activityIndicator;
	UIImageView* _iconImageView;
	UILabel* _labelView;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUISettingsFamilyViewElement* _viewElement;
	long long _viewState;

}
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)_setViewState:(long long)arg1 ;
-(void)_layoutWithActivityIndicator;
-(void)_layoutWithLockup;
-(id)_attributedStringForKey:(id)arg1 ;
-(id)_attributedStringForViewState;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
@end


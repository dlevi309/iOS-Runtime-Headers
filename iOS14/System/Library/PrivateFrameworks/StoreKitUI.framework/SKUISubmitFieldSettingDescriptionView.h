/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>

@class SKUIInputViewElement, UILabel, SKUIFieldSettingDescription;

@interface SKUISubmitFieldSettingDescriptionView : SKUIFieldSettingDescriptionView {

	double _aggregateLabelWidth;
	SKUIInputViewElement* _inputViewElement;
	UILabel* _label;
	SKUIFieldSettingDescription* _settingDescription;

}
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)tintColorDidChange;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)_addInputWithElement:(id)arg1 ;
-(id)_currentControllerValue;
-(void)_addSubmitInputWithElement:(id)arg1 ;
@end


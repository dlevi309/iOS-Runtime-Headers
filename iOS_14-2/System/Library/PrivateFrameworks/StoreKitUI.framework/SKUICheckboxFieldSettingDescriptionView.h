/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>
#import <UIKit/UITextFieldDelegate.h>

@class SKUIInputViewElement, UILabel, SKUIFieldSettingDescription, UISwitch, NSString;

@interface SKUICheckboxFieldSettingDescriptionView : SKUIFieldSettingDescriptionView <UITextFieldDelegate> {

	double _aggregateLabelWidth;
	SKUIInputViewElement* _inputViewElement;
	UILabel* _label;
	SKUIFieldSettingDescription* _settingDescription;
	UISwitch* _switch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)tintColorDidChange;
-(void)layoutSubviews;
-(void)_switchValueChanged:(id)arg1 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)_addInputWithElement:(id)arg1 ;
-(void)_addLabelWithElement:(id)arg1 ;
-(void)_addSwitchWithElement:(id)arg1 ;
@end


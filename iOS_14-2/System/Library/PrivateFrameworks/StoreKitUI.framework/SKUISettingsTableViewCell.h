/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, SKUISettingDescriptionView;

@interface SKUISettingsTableViewCell : UITableViewCell {

	UIEdgeInsets _contentInset;
	UIImageView* _disclosureChevron;
	BOOL _hasDisclosureChevron;
	SKUISettingDescriptionView* _settingDescriptionView;

}

@property (nonatomic,readonly) SKUISettingDescriptionView * settingDescriptionView; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)displaySettingDescriptionView:(id)arg1 ;
-(SKUISettingDescriptionView *)settingDescriptionView;
@end


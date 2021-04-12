/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)displaySettingDescriptionView:(id)arg1 ;
-(SKUISettingDescriptionView *)settingDescriptionView;
@end


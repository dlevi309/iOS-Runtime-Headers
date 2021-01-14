/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSTableCell.h>

@class PUILocationUsageMixin;

@interface PUILocationServicesSubDirectoryCell : PSTableCell {

	PUILocationUsageMixin* _location;

}

@property (nonatomic,readonly) PUILocationUsageMixin * location;              //@synthesize location=_location - In the implementation block
-(PUILocationUsageMixin *)location;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(BOOL)canReload;
@end


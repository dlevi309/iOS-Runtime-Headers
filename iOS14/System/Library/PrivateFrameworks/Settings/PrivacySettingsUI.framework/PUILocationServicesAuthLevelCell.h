/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSTableCell.h>

@class NSURL, PUILocationUsageMixin;

@interface PUILocationServicesAuthLevelCell : PSTableCell {

	NSURL* _bundleURL;
	BOOL _isWebApp;
	PUILocationUsageMixin* _location;
	unsigned long long _authLevel;

}

@property (nonatomic,readonly) PUILocationUsageMixin * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long authLevel;                  //@synthesize authLevel=_authLevel - In the implementation block
-(PUILocationUsageMixin *)location;
-(id)getLazyIconID;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canReload;
-(id)getLazyIcon;
-(unsigned long long)authLevel;
@end


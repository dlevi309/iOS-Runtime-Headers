/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(unsigned long long)authLevel;
@end


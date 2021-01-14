/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSNumber;

@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController {

	PSSpecifier* _automaticUpdateGroup;
	PSSpecifier* _automaticUpdateSwitchSpecifier;
	PSSpecifier* _automaticDownloadGroup;
	PSSpecifier* _automaticDownloadSwitchSpecifier;
	NSNumber* _userSpecifiedAutoUpdateValue;

}

@property (nonatomic,retain) PSSpecifier * automaticUpdateGroup;                          //@synthesize automaticUpdateGroup=_automaticUpdateGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticUpdateSwitchSpecifier;                //@synthesize automaticUpdateSwitchSpecifier=_automaticUpdateSwitchSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticDownloadGroup;                        //@synthesize automaticDownloadGroup=_automaticDownloadGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticDownloadSwitchSpecifier;              //@synthesize automaticDownloadSwitchSpecifier=_automaticDownloadSwitchSpecifier - In the implementation block
@property (nonatomic,retain) NSNumber * userSpecifiedAutoUpdateValue;                     //@synthesize userSpecifiedAutoUpdateValue=_userSpecifiedAutoUpdateValue - In the implementation block
-(id)specifiers;
-(id)updateController;
-(void)setAutomaticUpdatesFromUI:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAutomaticDownloadFromUI:(id)arg1 forSpecifier:(id)arg2 ;
-(id)automaticUpdateStatus;
-(id)automaticDownloadStatus;
-(void)setAutomaticDownloadGroup:(PSSpecifier *)arg1 ;
-(void)setAutomaticUpdateGroup:(PSSpecifier *)arg1 ;
-(void)setupAutoUpdateSwitchSpecifier;
-(void)setupAutoDownloadSwitchSpecifier;
-(void)setUserSpecifiedAutoUpdateValue:(NSNumber *)arg1 ;
-(PSSpecifier *)automaticDownloadGroup;
-(PSSpecifier *)automaticDownloadSwitchSpecifier;
-(PSSpecifier *)automaticUpdateGroup;
-(PSSpecifier *)automaticUpdateSwitchSpecifier;
-(void)armedAutoUpdateForAutomaticUpdatesToggled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAutomaticUpdateSwitchSpecifier:(PSSpecifier *)arg1 ;
-(id)autoDownloadGroupFooterTextForAutomaticDownloadStatus:(id)arg1 ;
-(void)setAutomaticDownloadSwitchSpecifier:(PSSpecifier *)arg1 ;
-(NSNumber *)userSpecifiedAutoUpdateValue;
-(void)refreshAutoDownloadText;
@end


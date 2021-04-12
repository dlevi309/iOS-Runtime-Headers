/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/PhoneSettingsListController.h>

@class PhoneSettingsTelephony;

@interface PhoneSettingsCallWaitingController : PhoneSettingsListController {

	PhoneSettingsTelephony* _telephonySettings;

}

@property (nonatomic,readonly) PhoneSettingsTelephony * telephonySettings;              //@synthesize telephonySettings=_telephonySettings - In the implementation block
-(id)init;
-(void)dealloc;
-(id)callWaitingEnabled:(id)arg1 ;
-(PhoneSettingsTelephony *)telephonySettings;
-(void)updateCellStates;
-(void)_callWaitingChanged:(id)arg1 ;
-(void)setCallWaitingEnabled:(id)arg1 specifier:(id)arg2 ;
@end


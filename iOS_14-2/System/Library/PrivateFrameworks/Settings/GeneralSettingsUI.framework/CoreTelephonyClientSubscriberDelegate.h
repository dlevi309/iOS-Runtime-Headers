/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/


@protocol CoreTelephonyClientSubscriberDelegate <NSObject>
@optional
-(void)simStatusDidChange:(id)arg1 status:(id)arg2;
-(void)simPinChangeRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)authTokenChanged:(id)arg1;
-(void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simLockSaveRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)prlVersionDidChange:(id)arg1 version:(id)arg2;
-(void)subscriberCountryCodeDidChange:(id)arg1;
-(void)shortLabelsDidChange;
-(void)userDefaultVoiceSlotDidChange:(id)arg1;

@end


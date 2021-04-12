/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/

#import <Preferences/PSListController.h>

@interface PSUIFingerprintController : PSListController {

	id _effectiveSettingsChangedNotificationObserver;

}

@property (nonatomic,retain) id effectiveSettingsChangedNotificationObserver;              //@synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver - In the implementation block
-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)passcodeController;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
-(id)representedBiometricIdentity;
-(void)setFingerprintName:(id)arg1 ;
-(id)fingerprintName;
-(void)deleteFingerprint:(id)arg1 ;
@end


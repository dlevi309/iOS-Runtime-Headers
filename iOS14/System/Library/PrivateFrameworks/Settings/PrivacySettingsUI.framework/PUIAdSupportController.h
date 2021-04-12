/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/UserTransparencyViewControllerDelegate.h>

@class UserTransparencyViewController, ADTrackingTransparency, NSString;

@interface PUIAdSupportController : PSListController <UserTransparencyViewControllerDelegate> {

	UserTransparencyViewController* _userTransparencyController;
	ADTrackingTransparency* _adTrackingTransparency;

}

@property (nonatomic,retain) UserTransparencyViewController * userTransparencyController;              //@synthesize userTransparencyController=_userTransparencyController - In the implementation block
@property (nonatomic,retain) ADTrackingTransparency * adTrackingTransparency;                          //@synthesize adTrackingTransparency=_adTrackingTransparency - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)personalizedAdsSwitchEnabled;
-(ADTrackingTransparency *)adTrackingTransparency;
-(void)setAdTrackingTransparency:(ADTrackingTransparency *)arg1 ;
-(void)userDidTapAdPreferences:(id)arg1 ;
-(void)setPersonalizedAdsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)personalizedAdsEnabled:(id)arg1 ;
-(void)setUserTransparencyController:(UserTransparencyViewController *)arg1 ;
-(UserTransparencyViewController *)userTransparencyController;
-(void)userTransparencyViewControllerDidLoad:(id)arg1 ;
-(void)userTransparencyViewControllerDidDismiss:(id)arg1 ;
-(void)userTransparencyViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)userDidTapDoneButton:(id)arg1 ;
-(void)userDidTapLearnMoreLink:(id)arg1 ;
@end


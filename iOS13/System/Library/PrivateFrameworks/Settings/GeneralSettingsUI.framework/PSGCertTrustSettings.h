/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <GeneralSettingsUI/GeneralSettingsUI-Structs.h>
#import <Preferences/PSListController.h>

@interface PSGCertTrustSettings : PSListController {

	id _profileListChangedNotificationObserver;

}

@property (nonatomic,retain) id profileListChangedNotificationObserver;              //@synthesize profileListChangedNotificationObserver=_profileListChangedNotificationObserver - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)setProfileListChangedNotificationObserver:(id)arg1 ;
-(id)profileListChangedNotificationObserver;
-(id)trustVersionString:(id)arg1 ;
-(id)trustAssetVersionString:(id)arg1 ;
-(id)specifierForTrustSettings:(SecCertificateRef)arg1 isRestricted:(BOOL)arg2 ;
-(void)setFullTrustEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isFullTrustEnabled:(id)arg1 ;
@end


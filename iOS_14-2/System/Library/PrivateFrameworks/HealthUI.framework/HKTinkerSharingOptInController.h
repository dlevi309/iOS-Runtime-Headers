/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@protocol HKTinkerSharingSetupDelegate;
@interface HKTinkerSharingOptInController : BPSWelcomeOptinViewController {

	long long _layoutStyle;
	id<HKTinkerSharingSetupDelegate> _delegate;

}
-(id)alternateButtonTitle;
-(id)imageResource;
-(id)detailString;
-(void)viewDidLoad;
-(id)titleString;
-(id)initWithStyle:(long long)arg1 delegate:(id)arg2 ;
-(BOOL)wantsLightenBlendedScreen;
-(id)suggestedButtonTitle;
-(id)tapToRadarMetadata;
-(void)_configureLayoutStyle;
-(void)userDidRequestCancel;
-(void)_presentNetworkAccessConfirmationWithHelper:(id)arg1 ;
-(void)applyConfirmedOptin:(BOOL)arg1 ;
-(id)imageResourceBundleIdentifier;
-(void)suggestedButtonPressed:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg1 ;
-(id)privacyBundles;
@end


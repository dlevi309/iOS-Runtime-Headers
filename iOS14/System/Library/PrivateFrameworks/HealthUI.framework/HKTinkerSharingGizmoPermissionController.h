/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@protocol HKTinkerSharingSetupDelegate;
@interface HKTinkerSharingGizmoPermissionController : BPSWelcomeOptinViewController {

	long long _layoutStyle;
	id<HKTinkerSharingSetupDelegate> _delegate;

}
-(id)imageResource;
-(id)detailString;
-(void)viewDidLoad;
-(id)titleString;
-(void)sendOptInRequest;
-(void)optInDidFailWithError:(id)arg1 ;
-(id)_localizedFullNameForFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)optInDidSucceed;
-(id)initWithStyle:(long long)arg1 delegate:(id)arg2 ;
-(BOOL)controllerAllowsNavigatingBackFrom;
-(BOOL)controllerAllowsNavigatingBackTo;
-(BOOL)wantsLightenBlendedScreen;
-(id)suggestedButtonTitle;
-(id)tapToRadarMetadata;
@end


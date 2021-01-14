/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@protocol HKTinkerSharingSetupDelegate;
@interface HKTinkerSharingSyncSetupController : BPSWelcomeOptinViewController {

	long long _layoutStyle;
	id<HKTinkerSharingSetupDelegate> _delegate;

}
+(BOOL)controllerNeedsToRun;
-(id)imageResource;
-(id)detailString;
-(void)viewDidLoad;
-(id)titleString;
-(id)initWithStyle:(long long)arg1 delegate:(id)arg2 ;
-(BOOL)controllerAllowsNavigatingBackFrom;
-(BOOL)controllerAllowsNavigatingBackTo;
-(id)suggestedButtonTitle;
-(id)tapToRadarMetadata;
-(void)setupSharing;
-(void)setupDidFailWithError:(id)arg1 ;
-(id)_tinkerUserDateOfBirthComponents;
-(void)setupDidSucceed;
@end


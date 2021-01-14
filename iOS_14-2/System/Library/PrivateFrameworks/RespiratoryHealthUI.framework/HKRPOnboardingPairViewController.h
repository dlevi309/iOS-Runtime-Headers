/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthUI.framework/RespiratoryHealthUI
*/

#import <BridgePreferences/BPSWelcomeOptinViewController.h>
#import <libobjc.A.dylib/BPSMiniFlowStepController.h>

@protocol BPSSetupMiniFlowControllerDelegate;
@class RespiratoryHealthHeroView, HKRPOxygenSaturationSettings, HKRPOxygenSaturationOnboardingManager;

@interface HKRPOnboardingPairViewController : BPSWelcomeOptinViewController <BPSMiniFlowStepController> {

	RespiratoryHealthHeroView* _heroView;
	id<BPSSetupMiniFlowControllerDelegate> miniFlowDelegate;
	HKRPOxygenSaturationSettings* _settings;
	HKRPOxygenSaturationOnboardingManager* _onboardingManager;

}

@property (nonatomic,readonly) HKRPOxygenSaturationSettings * settings;                                   //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) HKRPOxygenSaturationOnboardingManager * onboardingManager;                 //@synthesize onboardingManager=_onboardingManager - In the implementation block
@property (assign,nonatomic,__weak) id<BPSSetupMiniFlowControllerDelegate> miniFlowDelegate; 
-(id)alternateButtonTitle;
-(id)imageResource;
-(id)detailString;
-(id)_localizedStringForKey:(id)arg1 ;
-(id)captionText;
-(void)viewDidLoad;
-(HKRPOxygenSaturationSettings *)settings;
-(id)titleString;
-(HKRPOxygenSaturationOnboardingManager *)onboardingManager;
-(void)viewDidLayoutSubviews;
-(id)suggestedButtonTitle;
-(id)imageResourceBundleIdentifier;
-(void)suggestedButtonPressed:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg1 ;
-(id<BPSSetupMiniFlowControllerDelegate>)miniFlowDelegate;
-(void)setMiniFlowDelegate:(id<BPSSetupMiniFlowControllerDelegate>)arg1 ;
-(void)_makeHeroView;
-(void)_onboardWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentOnboardingError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSettings:(id)arg1 onboardingManager:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/VTUIEnrollTrainingViewControllerDelegate.h>
#import <libobjc.A.dylib/HUOnboardingWarningPresenter.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, OBLinkTrayButton, HUPersonalRequestsEditorItemManager, VTUIEnrollTrainingViewController, NSString;

@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <VTUIEnrollTrainingViewControllerDelegate, HUOnboardingWarningPresenter, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _setupButton;
	OBLinkTrayButton* _notNowButton;
	HUPersonalRequestsEditorItemManager* _prEditorItemManager;
	VTUIEnrollTrainingViewController* _voiceProfileVC;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * setupButton;                                             //@synthesize setupButton=_setupButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * notNowButton;                                        //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) HUPersonalRequestsEditorItemManager * prEditorItemManager;              //@synthesize prEditorItemManager=_prEditorItemManager - In the implementation block
@property (nonatomic,retain) VTUIEnrollTrainingViewController * voiceProfileVC;                      //@synthesize voiceProfileVC=_voiceProfileVC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(HMHome *)home;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(OBTrayButton *)setupButton;
-(void)skipSetup;
-(void)continueSetup;
-(void)showLearnMore;
-(void)dismissSetup;
-(OBLinkTrayButton *)notNowButton;
-(void)setNotNowButton:(OBLinkTrayButton *)arg1 ;
-(id)hu_preloadContent;
-(void)_setupPersonalRequestsItemInfrastructure;
-(HUPersonalRequestsEditorItemManager *)prEditorItemManager;
-(void)setPrEditorItemManager:(HUPersonalRequestsEditorItemManager *)arg1 ;
-(void)_turnOffPersonalRequests;
-(void)userTappedContinueFromWarning;
-(void)userTappedCancelFromWarning;
-(void)setSetupButton:(OBTrayButton *)arg1 ;
-(void)_setupVoiceProfile:(id)arg1 ;
-(void)_dontSetupVoiceProfileWithWarning:(id)arg1 ;
-(void)_dontSetupVoiceProfile;
-(void)_turnOffVoiceRecognition;
-(void)setVoiceProfileVC:(VTUIEnrollTrainingViewController *)arg1 ;
-(VTUIEnrollTrainingViewController *)voiceProfileVC;
-(void)_resetVoiceProfileSetup;
@end


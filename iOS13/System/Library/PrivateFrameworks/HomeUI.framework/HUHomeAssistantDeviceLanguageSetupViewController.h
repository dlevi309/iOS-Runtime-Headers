/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HUOnboardingWarningPresenter.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class OBTrayButton, OBLinkTrayButton, HUPersonalRequestsEditorItemManager, NSArray, HMHome, NSString;

@interface HUHomeAssistantDeviceLanguageSetupViewController : HUImageOBWelcomeController <HUOnboardingWarningPresenter, HUConfigurationViewController, HUPreloadableViewController> {

	BOOL _maxNumberOfVoicesReached;
	BOOL _shouldSetMultiUserIsEnabled;
	id<HUConfigurationViewControllerDelegate> _delegate;
	OBTrayButton* _continueButton;
	OBLinkTrayButton* _customizeButton;
	HUPersonalRequestsEditorItemManager* _prEditorItemManager;
	NSArray* _supportedMultiUserLanguages;
	NSArray* _homeAssistantDevicesHavingLanguageMismatch;
	HMHome* _home;

}

@property (nonatomic,retain) OBTrayButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                     //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) HUPersonalRequestsEditorItemManager * prEditorItemManager;              //@synthesize prEditorItemManager=_prEditorItemManager - In the implementation block
@property (nonatomic,retain) NSArray * supportedMultiUserLanguages;                                  //@synthesize supportedMultiUserLanguages=_supportedMultiUserLanguages - In the implementation block
@property (nonatomic,retain) NSArray * homeAssistantDevicesHavingLanguageMismatch;                   //@synthesize homeAssistantDevicesHavingLanguageMismatch=_homeAssistantDevicesHavingLanguageMismatch - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL maxNumberOfVoicesReached;                                          //@synthesize maxNumberOfVoicesReached=_maxNumberOfVoicesReached - In the implementation block
@property (assign,nonatomic) BOOL shouldSetMultiUserIsEnabled;                                       //@synthesize shouldSetMultiUserIsEnabled=_shouldSetMultiUserIsEnabled - In the implementation block
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
-(void)setContinueButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)continueButton;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)hu_preloadContent;
-(OBLinkTrayButton *)customizeButton;
-(void)setCustomizeButton:(OBLinkTrayButton *)arg1 ;
-(void)_setupPersonalRequestsItemInfrastructure;
-(void)_cancelLanguageSetup;
-(void)setShouldSetMultiUserIsEnabled:(BOOL)arg1 ;
-(NSArray *)supportedMultiUserLanguages;
-(void)setHomeAssistantDevicesHavingLanguageMismatch:(NSArray *)arg1 ;
-(NSArray *)homeAssistantDevicesHavingLanguageMismatch;
-(void)setMaxNumberOfVoicesReached:(BOOL)arg1 ;
-(BOOL)maxNumberOfVoicesReached;
-(void)_changeLanguage;
-(void)_completeLanguageSetup;
-(HUPersonalRequestsEditorItemManager *)prEditorItemManager;
-(void)_cancelLanguageSetupWithoutWarningUser;
-(BOOL)shouldSetMultiUserIsEnabled;
-(void)setPrEditorItemManager:(HUPersonalRequestsEditorItemManager *)arg1 ;
-(void)_turnOffPersonalRequests;
-(void)userTappedContinueFromWarning;
-(void)userTappedCancelFromWarning;
-(void)setSupportedMultiUserLanguages:(NSArray *)arg1 ;
@end


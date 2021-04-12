/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class NSString, HMHome, OBTrayButton, OBLinkTrayButton, NSArray, NSDictionary;

@interface HUHomePersonalIdentityDeviceLanguageSetupViewController : OBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	NSString* _overrideTargetLanguage;
	HMHome* _home;
	NSString* _targetLanguage;
	OBTrayButton* _continueButton;
	OBLinkTrayButton* _customizeButton;
	NSArray* _supportedMultiUserLanguages;
	NSDictionary* _languageToHomePodsMapping;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSString * targetLanguage;                                              //@synthesize targetLanguage=_targetLanguage - In the implementation block
@property (nonatomic,retain) OBTrayButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                     //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) NSArray * supportedMultiUserLanguages;                                  //@synthesize supportedMultiUserLanguages=_supportedMultiUserLanguages - In the implementation block
@property (nonatomic,retain) NSDictionary * languageToHomePodsMapping;                               //@synthesize languageToHomePodsMapping=_languageToHomePodsMapping - In the implementation block
@property (nonatomic,retain) NSString * overrideTargetLanguage;                                      //@synthesize overrideTargetLanguage=_overrideTargetLanguage - In the implementation block
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
-(void)_cancelLanguageSetup;
-(NSArray *)supportedMultiUserLanguages;
-(void)_completeLanguageSetup;
-(void)setSupportedMultiUserLanguages:(NSArray *)arg1 ;
-(void)setOverrideTargetLanguage:(NSString *)arg1 ;
-(NSString *)targetLanguage;
-(NSDictionary *)languageToHomePodsMapping;
-(NSString *)overrideTargetLanguage;
-(void)setTargetLanguage:(NSString *)arg1 ;
-(void)setLanguageToHomePodsMapping:(NSDictionary *)arg1 ;
-(void)_changeSiriLanguage;
@end


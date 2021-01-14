/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _supportedVoiceRecognitionLanguages;
	NSDictionary* _languageToHomePodsMapping;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSString * targetLanguage;                                              //@synthesize targetLanguage=_targetLanguage - In the implementation block
@property (nonatomic,retain) OBTrayButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                     //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) NSArray * supportedVoiceRecognitionLanguages;                           //@synthesize supportedVoiceRecognitionLanguages=_supportedVoiceRecognitionLanguages - In the implementation block
@property (nonatomic,retain) NSDictionary * languageToHomePodsMapping;                               //@synthesize languageToHomePodsMapping=_languageToHomePodsMapping - In the implementation block
@property (nonatomic,retain) NSString * overrideTargetLanguage;                                      //@synthesize overrideTargetLanguage=_overrideTargetLanguage - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCustomizeButton:(OBLinkTrayButton *)arg1 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithHome:(id)arg1 ;
-(OBTrayButton *)continueButton;
-(OBLinkTrayButton *)customizeButton;
-(void)setTargetLanguage:(NSString *)arg1 ;
-(void)setContinueButton:(OBTrayButton *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(void)_cancelLanguageSetup;
-(NSArray *)supportedVoiceRecognitionLanguages;
-(void)_completeLanguageSetup;
-(void)setSupportedVoiceRecognitionLanguages:(NSArray *)arg1 ;
-(void)setOverrideTargetLanguage:(NSString *)arg1 ;
-(NSString *)targetLanguage;
-(NSDictionary *)languageToHomePodsMapping;
-(NSString *)overrideTargetLanguage;
-(void)setLanguageToHomePodsMapping:(NSDictionary *)arg1 ;
-(void)_changeSiriLanguage;
@end


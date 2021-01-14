/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class OBTrayButton, OBLinkTrayButton, NSArray, NSLayoutConstraint, UIActivityIndicatorView, NAFuture, NSTimer, NSString;

@interface HUHomeAssistantDeviceLanguageConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	OBTrayButton* _changeLanguageButton;
	OBLinkTrayButton* _cancelButton;
	NSArray* _supportedVoiceRecognitionLanguages;
	NSArray* _languageMismatchedHomeAssistantDevices;
	long long _selectedLanguageIndex;
	NSLayoutConstraint* _heightAnchor;
	UIActivityIndicatorView* _spinner;
	NAFuture* _changeLanguageFuture;
	NSTimer* _changeLanguageTimer;

}

@property (nonatomic,retain) OBTrayButton * changeLanguageButton;                                    //@synthesize changeLanguageButton=_changeLanguageButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * cancelButton;                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSArray * supportedVoiceRecognitionLanguages;                           //@synthesize supportedVoiceRecognitionLanguages=_supportedVoiceRecognitionLanguages - In the implementation block
@property (nonatomic,retain) NSArray * languageMismatchedHomeAssistantDevices;                       //@synthesize languageMismatchedHomeAssistantDevices=_languageMismatchedHomeAssistantDevices - In the implementation block
@property (assign,nonatomic) long long selectedLanguageIndex;                                        //@synthesize selectedLanguageIndex=_selectedLanguageIndex - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                      //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                      //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NAFuture * changeLanguageFuture;                                        //@synthesize changeLanguageFuture=_changeLanguageFuture - In the implementation block
@property (nonatomic,retain) NSTimer * changeLanguageTimer;                                          //@synthesize changeLanguageTimer=_changeLanguageTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(OBLinkTrayButton *)cancelButton;
-(void)setCancelButton:(OBLinkTrayButton *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(UIActivityIndicatorView *)spinner;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(void)_showSpinner;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)_hideSpinner;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)heightAnchor;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(NSArray *)supportedVoiceRecognitionLanguages;
-(void)_changeLanguage;
-(void)setSupportedVoiceRecognitionLanguages:(NSArray *)arg1 ;
-(long long)selectedLanguageIndex;
-(void)setSelectedLanguageIndex:(long long)arg1 ;
-(void)setChangeLanguageFuture:(NAFuture *)arg1 ;
-(NAFuture *)changeLanguageFuture;
-(id)_configureTitleDescriptionContentViewForCell:(id)arg1 ;
-(void)setChangeLanguageButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)changeLanguageButton;
-(void)_cancelLanguageChange;
-(NSTimer *)changeLanguageTimer;
-(NSArray *)languageMismatchedHomeAssistantDevices;
-(void)setChangeLanguageTimer:(NSTimer *)arg1 ;
-(id)initWithSupportedVoiceRecognitionLanguages:(id)arg1 languageMismatchedHomeAssistantDevices:(id)arg2 ;
-(void)setLanguageMismatchedHomeAssistantDevices:(NSArray *)arg1 ;
@end


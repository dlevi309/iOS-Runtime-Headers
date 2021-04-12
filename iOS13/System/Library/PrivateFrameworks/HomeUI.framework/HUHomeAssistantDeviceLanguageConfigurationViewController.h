/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSArray* _supportedMultiUserLanguages;
	NSArray* _languageMismatchedHomeAssistantDevices;
	long long _selectedLanguageIndex;
	NSLayoutConstraint* _heightAnchor;
	UIActivityIndicatorView* _spinner;
	NAFuture* _changeLanguageFuture;
	NSTimer* _changeLanguageTimer;

}

@property (nonatomic,retain) OBTrayButton * changeLanguageButton;                                    //@synthesize changeLanguageButton=_changeLanguageButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * cancelButton;                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSArray * supportedMultiUserLanguages;                                  //@synthesize supportedMultiUserLanguages=_supportedMultiUserLanguages - In the implementation block
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
-(void)dealloc;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(NSLayoutConstraint *)heightAnchor;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(OBLinkTrayButton *)cancelButton;
-(void)setCancelButton:(OBLinkTrayButton *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)_showSpinner;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)_hideSpinner;
-(id)hu_preloadContent;
-(NSArray *)supportedMultiUserLanguages;
-(void)_changeLanguage;
-(void)setSupportedMultiUserLanguages:(NSArray *)arg1 ;
-(long long)selectedLanguageIndex;
-(void)setSelectedLanguageIndex:(long long)arg1 ;
-(void)setChangeLanguageFuture:(NAFuture *)arg1 ;
-(NAFuture *)changeLanguageFuture;
-(void)_cancelLanguageChange;
-(id)_configureTitleDescriptionContentViewForCell:(id)arg1 ;
-(OBTrayButton *)changeLanguageButton;
-(void)setChangeLanguageButton:(OBTrayButton *)arg1 ;
-(NSTimer *)changeLanguageTimer;
-(NSArray *)languageMismatchedHomeAssistantDevices;
-(void)setChangeLanguageTimer:(NSTimer *)arg1 ;
-(id)initWithSupportedMultiUserLanguages:(id)arg1 languageMismatchedHomeAssistantDevices:(id)arg2 ;
-(void)setLanguageMismatchedHomeAssistantDevices:(NSArray *)arg1 ;
@end


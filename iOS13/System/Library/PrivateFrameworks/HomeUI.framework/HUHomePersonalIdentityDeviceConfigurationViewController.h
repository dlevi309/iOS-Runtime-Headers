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
@class OBTrayButton, OBLinkTrayButton, NSArray, NSLayoutConstraint, NSString;

@interface HUHomePersonalIdentityDeviceConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	OBTrayButton* _changeLanguageButton;
	OBLinkTrayButton* _cancelButton;
	NSArray* _mediaProfilesAndLanguageInfoList;
	long long _selectedLanguageIndex;
	NSLayoutConstraint* _heightAnchor;

}

@property (nonatomic,retain) OBTrayButton * changeLanguageButton;                                    //@synthesize changeLanguageButton=_changeLanguageButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * cancelButton;                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSArray * mediaProfilesAndLanguageInfoList;                             //@synthesize mediaProfilesAndLanguageInfoList=_mediaProfilesAndLanguageInfoList - In the implementation block
@property (assign,nonatomic) long long selectedLanguageIndex;                                        //@synthesize selectedLanguageIndex=_selectedLanguageIndex - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                      //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
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
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(id)hu_preloadContent;
-(void)_changeLanguage;
-(long long)selectedLanguageIndex;
-(void)setSelectedLanguageIndex:(long long)arg1 ;
-(void)_cancelLanguageChange;
-(NSArray *)mediaProfilesAndLanguageInfoList;
-(id)_configureTitleDescriptionContentViewForCell:(id)arg1 ;
-(id)initWithMediaProfileAndLanguageInfo:(id)arg1 ;
-(OBTrayButton *)changeLanguageButton;
-(void)setChangeLanguageButton:(OBTrayButton *)arg1 ;
-(void)setMediaProfilesAndLanguageInfoList:(NSArray *)arg1 ;
@end


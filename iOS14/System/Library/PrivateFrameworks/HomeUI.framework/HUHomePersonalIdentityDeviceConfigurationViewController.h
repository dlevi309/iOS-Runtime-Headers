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
-(OBLinkTrayButton *)cancelButton;
-(void)setCancelButton:(OBLinkTrayButton *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)heightAnchor;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)_changeLanguage;
-(long long)selectedLanguageIndex;
-(void)setSelectedLanguageIndex:(long long)arg1 ;
-(NSArray *)mediaProfilesAndLanguageInfoList;
-(id)_configureTitleDescriptionContentViewForCell:(id)arg1 ;
-(void)setChangeLanguageButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)changeLanguageButton;
-(void)_cancelLanguageChange;
-(id)initWithMediaProfileAndLanguageInfo:(id)arg1 ;
-(void)setMediaProfilesAndLanguageInfoList:(NSArray *)arg1 ;
@end


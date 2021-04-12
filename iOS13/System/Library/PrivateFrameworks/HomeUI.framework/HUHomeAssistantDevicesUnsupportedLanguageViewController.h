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
@class NSArray, NSLayoutConstraint, OBTrayButton, NSString;

@interface HUHomeAssistantDevicesUnsupportedLanguageViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	NSArray* _homeAssistantDevicesHavingLanguageMismatch;
	NSLayoutConstraint* _heightAnchor;
	OBTrayButton* _continueButton;

}

@property (nonatomic,retain) NSArray * homeAssistantDevicesHavingLanguageMismatch;                   //@synthesize homeAssistantDevicesHavingLanguageMismatch=_homeAssistantDevicesHavingLanguageMismatch - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                      //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (nonatomic,retain) OBTrayButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
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
-(void)setContinueButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)continueButton;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)_continue;
-(id)hu_preloadContent;
-(void)setHomeAssistantDevicesHavingLanguageMismatch:(NSArray *)arg1 ;
-(NSArray *)homeAssistantDevicesHavingLanguageMismatch;
-(id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg1 home:(id)arg2 ;
@end


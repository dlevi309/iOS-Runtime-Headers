/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_continue;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)heightAnchor;
-(OBTrayButton *)continueButton;
-(void)loadView;
-(void)setContinueButton:(OBTrayButton *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setHomeAssistantDevicesHavingLanguageMismatch:(NSArray *)arg1 ;
-(NSArray *)homeAssistantDevicesHavingLanguageMismatch;
-(id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg1 home:(id)arg2 ;
@end


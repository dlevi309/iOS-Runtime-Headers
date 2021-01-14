/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUItemTableModuleControllerHosting.h>
#import <libobjc.A.dylib/HUHomeTheaterAudioItemModuleDelegate.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMAccessory, HMHome, OBTrayButton, OBLinkTrayButton, UIImageView, HUSimpleItemModuleTableViewController, HUHomeTheaterAudioItemModule, NSLayoutConstraint, NSString;

@interface HUHomeTheaterSetupViewController : OBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUHomeTheaterAudioItemModuleDelegate, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMAccessory* _accessory;
	HMHome* _home;
	OBTrayButton* _useHomeTheaterButton;
	OBLinkTrayButton* _notNowButton;
	UIImageView* _contentImageView;
	HUSimpleItemModuleTableViewController* _tableViewController;
	HUHomeTheaterAudioItemModule* _tableViewControllerModule;
	NSLayoutConstraint* _tableViewHeightConstraint;
	NSLayoutConstraint* _contentViewHeightConstraint;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) HMAccessory * accessory;                                                      //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * useHomeTheaterButton;                                          //@synthesize useHomeTheaterButton=_useHomeTheaterButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * notNowButton;                                              //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) UIImageView * contentImageView;                                               //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,retain) HUSimpleItemModuleTableViewController * tableViewController;                  //@synthesize tableViewController=_tableViewController - In the implementation block
@property (assign,nonatomic,__weak) HUHomeTheaterAudioItemModule * tableViewControllerModule;              //@synthesize tableViewControllerModule=_tableViewControllerModule - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                   //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableViewHeightConstraint;                               //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewHeightConstraint;                             //@synthesize contentViewHeightConstraint=_contentViewHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(void)updateViewConstraints;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)viewWillLayoutSubviews;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(UIEdgeInsets)contentInsets;
-(id)hu_preloadContent;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(HMAccessory *)accessory;
-(NSLayoutConstraint *)contentViewHeightConstraint;
-(void)setContentViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(HUSimpleItemModuleTableViewController *)tableViewController;
-(void)setTableViewController:(HUSimpleItemModuleTableViewController *)arg1 ;
-(OBLinkTrayButton *)notNowButton;
-(void)setNotNowButton:(OBLinkTrayButton *)arg1 ;
-(void)viewDidLoad;
-(void)_updateHeightConstraints;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2 ;
-(id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(HMHome *)home;
-(id)initWithAppleTVAccessory:(id)arg1 inHome:(id)arg2 ;
-(id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2 ;
-(UIImageView *)contentImageView;
-(void)homeTheaterItemModuleDidChangeSelectedDestination:(id)arg1 ;
-(void)setContentImageView:(UIImageView *)arg1 ;
-(void)setUseHomeTheaterButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)useHomeTheaterButton;
-(void)_activateHomeTheater:(id)arg1 ;
-(void)_doNotActivateHomeTheater:(id)arg1 ;
-(void)setTableViewControllerModule:(HUHomeTheaterAudioItemModule *)arg1 ;
-(HUHomeTheaterAudioItemModule *)tableViewControllerModule;
@end


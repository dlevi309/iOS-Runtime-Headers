/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUItemTableModuleControllerHosting.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, OBLinkTrayButton, HUTVViewingProfilesEditorItemManager, NSString;

@interface HUTVViewingProfilesSetupViewController : HUImageOBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _useTVVPButton;
	OBLinkTrayButton* _customizeButton;
	HUTVViewingProfilesEditorItemManager* _tvVPEditorItemManager;

}

@property (nonatomic,retain) HMHome * home;                                                             //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * useTVVPButton;                                              //@synthesize useTVVPButton=_useTVVPButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                        //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) HUTVViewingProfilesEditorItemManager * tvVPEditorItemManager;              //@synthesize tvVPEditorItemManager=_tvVPEditorItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(void)setCustomizeButton:(OBLinkTrayButton *)arg1 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithHome:(id)arg1 ;
-(OBLinkTrayButton *)customizeButton;
-(void)setHome:(HMHome *)arg1 ;
-(id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2 ;
-(id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2 ;
-(HMHome *)home;
-(id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2 ;
-(void)setTvVPEditorItemManager:(HUTVViewingProfilesEditorItemManager *)arg1 ;
-(HUTVViewingProfilesEditorItemManager *)tvVPEditorItemManager;
-(void)setUseTVVPButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)useTVVPButton;
-(void)_turnOnAllTVViewingProfiles:(id)arg1 ;
-(void)_customizeOrOffButton:(id)arg1 ;
-(void)_setupTVViewingProfilesItemInfrastructure;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUItemTableModuleControllerHosting.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, OBLinkTrayButton, HULocationDevice, NSArray, HUPersonalRequestsEditorItemManager, HUPersonalRequestsDevicesModuleController, NSString;

@interface HUPersonalRequestsSetupViewController : HUImageOBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _usePRButton;
	OBLinkTrayButton* _customizeButton;
	HULocationDevice* _locationDevice;
	NSArray* _supportedMultiUserLanguages;
	HUPersonalRequestsEditorItemManager* _prEditorItemManager;
	HUPersonalRequestsDevicesModuleController* _prDevicesModuleController;

}

@property (nonatomic,retain) HMHome * home;                                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * usePRButton;                                                         //@synthesize usePRButton=_usePRButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                                 //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) HULocationDevice * locationDevice;                                                  //@synthesize locationDevice=_locationDevice - In the implementation block
@property (nonatomic,retain) NSArray * supportedMultiUserLanguages;                                              //@synthesize supportedMultiUserLanguages=_supportedMultiUserLanguages - In the implementation block
@property (nonatomic,retain) HUPersonalRequestsEditorItemManager * prEditorItemManager;                          //@synthesize prEditorItemManager=_prEditorItemManager - In the implementation block
@property (nonatomic,retain) HUPersonalRequestsDevicesModuleController * prDevicesModuleController;              //@synthesize prDevicesModuleController=_prDevicesModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(HMHome *)home;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2 ;
-(id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2 ;
-(id)hu_preloadContent;
-(OBTrayButton *)usePRButton;
-(void)setUsePRButton:(OBTrayButton *)arg1 ;
-(OBLinkTrayButton *)customizeButton;
-(void)setCustomizeButton:(OBLinkTrayButton *)arg1 ;
-(void)_setupPersonalRequestsItemInfrastructure;
-(NSArray *)supportedMultiUserLanguages;
-(HUPersonalRequestsEditorItemManager *)prEditorItemManager;
-(void)setPrEditorItemManager:(HUPersonalRequestsEditorItemManager *)arg1 ;
-(void)setSupportedMultiUserLanguages:(NSArray *)arg1 ;
-(id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2 ;
-(void)_turnOnAllPersonalRequests:(id)arg1 ;
-(void)_customizePersonalRequests:(id)arg1 ;
-(void)_dontUsePersonalRequests:(id)arg1 ;
-(void)setPrDevicesModuleController:(HUPersonalRequestsDevicesModuleController *)arg1 ;
-(HULocationDevice *)locationDevice;
-(HUPersonalRequestsDevicesModuleController *)prDevicesModuleController;
-(void)setLocationDevice:(HULocationDevice *)arg1 ;
-(BOOL)_allPersonalRequestsDevicesSupportVoiceRecognition;
@end


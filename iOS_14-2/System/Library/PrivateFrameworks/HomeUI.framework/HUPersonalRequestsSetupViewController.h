/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUItemTableModuleControllerHosting.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, OBLinkTrayButton, HULocationDevice, NSArray, HUPersonalRequestsEditorItemManager, HUPersonalRequestsDevicesModuleController, NSString;

@interface HUPersonalRequestsSetupViewController : OBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _usePRButton;
	OBLinkTrayButton* _customizeButton;
	HULocationDevice* _locationDevice;
	NSArray* _supportedVoiceRecognitionLanguages;
	HUPersonalRequestsEditorItemManager* _prEditorItemManager;
	HUPersonalRequestsDevicesModuleController* _prDevicesModuleController;

}

@property (nonatomic,retain) HMHome * home;                                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * usePRButton;                                                         //@synthesize usePRButton=_usePRButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                                 //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) HULocationDevice * locationDevice;                                                  //@synthesize locationDevice=_locationDevice - In the implementation block
@property (nonatomic,retain) NSArray * supportedVoiceRecognitionLanguages;                                       //@synthesize supportedVoiceRecognitionLanguages=_supportedVoiceRecognitionLanguages - In the implementation block
@property (nonatomic,retain) HUPersonalRequestsEditorItemManager * prEditorItemManager;                          //@synthesize prEditorItemManager=_prEditorItemManager - In the implementation block
@property (nonatomic,retain) HUPersonalRequestsDevicesModuleController * prDevicesModuleController;              //@synthesize prDevicesModuleController=_prDevicesModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
+(id)_bulletImageWithSystemName:(id)arg1 color:(id)arg2 ;
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
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(HMHome *)home;
-(void)setUsePRButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)usePRButton;
-(void)_setupPersonalRequestsItemInfrastructure;
-(NSArray *)supportedVoiceRecognitionLanguages;
-(HUPersonalRequestsEditorItemManager *)prEditorItemManager;
-(void)setPrEditorItemManager:(HUPersonalRequestsEditorItemManager *)arg1 ;
-(void)setSupportedVoiceRecognitionLanguages:(NSArray *)arg1 ;
-(id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2 ;
-(void)setPrDevicesModuleController:(HUPersonalRequestsDevicesModuleController *)arg1 ;
-(HULocationDevice *)locationDevice;
-(HUPersonalRequestsDevicesModuleController *)prDevicesModuleController;
-(void)setLocationDevice:(HULocationDevice *)arg1 ;
-(BOOL)_allPersonalRequestsDevicesSupportVoiceRecognition;
-(void)_turnOnAllPersonalRequests:(id)arg1 ;
-(void)_customizePersonalRequests:(id)arg1 ;
-(void)_dontUsePersonalRequests:(id)arg1 ;
@end


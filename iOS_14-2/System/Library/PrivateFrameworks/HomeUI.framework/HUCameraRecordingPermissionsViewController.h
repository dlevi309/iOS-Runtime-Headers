/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, NSString;

@interface HUCameraRecordingPermissionsViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _setupButton;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * setupButton;                                             //@synthesize setupButton=_setupButton - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(OBTrayButton *)setupButton;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 itemTableViewController:(id)arg4 home:(id)arg5 ;
-(void)setSetupButton:(OBTrayButton *)arg1 ;
-(void)_setupCameraRecording:(id)arg1 ;
@end


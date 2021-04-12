/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, OBLinkTrayButton, NSString;

@interface HUCameraRecordingIntroViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	unsigned long long _variant;
	HMHome* _home;
	OBTrayButton* _setupButton;
	OBLinkTrayButton* _notNowButton;

}

@property (assign,nonatomic) unsigned long long variant;                                             //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * setupButton;                                             //@synthesize setupButton=_setupButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * notNowButton;                                        //@synthesize notNowButton=_notNowButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(id)init;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(unsigned long long)variant;
-(HMHome *)home;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setHome:(HMHome *)arg1 ;
-(void)setVariant:(unsigned long long)arg1 ;
-(OBTrayButton *)setupButton;
-(OBLinkTrayButton *)notNowButton;
-(void)setNotNowButton:(OBLinkTrayButton *)arg1 ;
-(id)hu_preloadContent;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4 ;
-(id)initWithIntroVariant:(unsigned long long)arg1 home:(id)arg2 ;
-(void)setSetupButton:(OBTrayButton *)arg1 ;
-(void)_buttonOne:(id)arg1 ;
-(void)_buttonTwo:(id)arg1 ;
@end


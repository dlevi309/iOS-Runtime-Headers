/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>

@protocol HUConfigurationViewControllerDelegate, HMMediaDestination;
@class HMAccessory, HMHome, OBTrayButton, OBLinkTrayButton, NSString;

@interface HUHomeTheaterSimpleSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMAccessory* _accessory;
	HMHome* _home;
	id<HMMediaDestination> _destination;
	OBTrayButton* _confirmButton;
	OBLinkTrayButton* _skipButton;

}

@property (nonatomic,retain) HMAccessory * accessory;                                                //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HMMediaDestination> destination;                                     //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) OBTrayButton * confirmButton;                                           //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * skipButton;                                          //@synthesize skipButton=_skipButton - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDestination:(id<HMMediaDestination>)arg1 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(OBTrayButton *)confirmButton;
-(void)setConfirmButton:(OBTrayButton *)arg1 ;
-(HMAccessory *)accessory;
-(void)_skip:(id)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(OBLinkTrayButton *)skipButton;
-(void)setSkipButton:(OBLinkTrayButton *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(id<HMMediaDestination>)destination;
-(HMHome *)home;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4 ;
-(id)initWithAppleTVAccessory:(id)arg1 destination:(id)arg2 inHome:(id)arg3 ;
-(void)_confirm:(id)arg1 ;
@end


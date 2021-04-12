/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMNetworkRouterProfile, NSString;

@interface HUSetupNetworkRouterProtectionAutoViewController : HUImageOBWelcomeController <HUConfigurationViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMNetworkRouterProfile* _profile;

}

@property (nonatomic,readonly) HMNetworkRouterProfile * profile;                                     //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(HMNetworkRouterProfile *)profile;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_learnMorePressed:(id)arg1 ;
-(void)_continuePressed:(id)arg1 ;
-(BOOL)_hasNetworkCustomizableAccessories;
-(void)_customizePressed:(id)arg1 ;
-(void)_disablePressed:(id)arg1 ;
-(void)_updateNetworkProtection:(long long)arg1 andFinishWithActionResult:(unsigned long long)arg2 ;
-(id)initWithProfile:(id)arg1 configurationDelegate:(id)arg2 ;
@end


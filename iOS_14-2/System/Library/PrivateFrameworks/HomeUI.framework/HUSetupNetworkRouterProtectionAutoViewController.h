/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_continuePressed:(id)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)_learnMorePressed:(id)arg1 ;
-(HMNetworkRouterProfile *)profile;
-(void)viewDidLoad;
-(BOOL)_hasNetworkCustomizableAccessories;
-(void)_customizePressed:(id)arg1 ;
-(void)_disablePressed:(id)arg1 ;
-(void)_updateNetworkProtection:(long long)arg1 andFinishWithActionResult:(unsigned long long)arg2 ;
-(id)initWithProfile:(id)arg1 configurationDelegate:(id)arg2 ;
@end


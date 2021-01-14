/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class OBTrayButton, NSString;

@interface HUOwnerMustUpgradeViewController : OBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	OBTrayButton* _continueButton;

}

@property (nonatomic,retain) OBTrayButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(id)initWithUpgradeRequirements:(unsigned long long)arg1 ;
-(id)hu_preloadContent;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(OBTrayButton *)continueButton;
-(void)setContinueButton:(OBTrayButton *)arg1 ;
-(void)_continueButtonTapped:(id)arg1 ;
@end


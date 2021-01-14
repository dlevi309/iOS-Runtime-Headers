/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableOBWelcomeController.h>
#import <libobjc.A.dylib/HUNaturalLightingSetupModuleDelegate.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, HUNaturalLightingSetupModule, HUSimpleItemModuleTableViewController, NSString;

@interface HUNaturalLightingSetupViewController : HUItemTableOBWelcomeController <HUNaturalLightingSetupModuleDelegate, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> delegate;
	HMHome* _home;
	OBTrayButton* _useWithLightsButton;
	HUNaturalLightingSetupModule* _module;

}

@property (nonatomic,retain) HMHome * home;                                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * useWithLightsButton;                                           //@synthesize useWithLightsButton=_useWithLightsButton - In the implementation block
@property (nonatomic,retain) HUSimpleItemModuleTableViewController * itemTableViewController; 
@property (nonatomic,retain) HUNaturalLightingSetupModule * module;                                        //@synthesize module=_module - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL isFinalStep; 
+(id)moduleControllerInHome:(id)arg1 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(id)hu_preloadContent;
-(void)setModule:(HUNaturalLightingSetupModule *)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithHome:(id)arg1 ;
-(HUNaturalLightingSetupModule *)module;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 itemTableViewController:(id)arg4 ;
-(void)_doNotActivateNaturalLighting:(id)arg1 ;
-(void)_updateButtonWithNumberOfLightsSelected:(unsigned long long)arg1 ;
-(OBTrayButton *)useWithLightsButton;
-(id)_markAllAccessoriesAsOnboarded;
-(void)setUseWithLightsButton:(OBTrayButton *)arg1 ;
-(void)_activateNaturalLighting:(id)arg1 ;
-(void)naturalLanguageSetupModule:(id)arg1 didUpdateSelectedItems:(id)arg2 ;
@end


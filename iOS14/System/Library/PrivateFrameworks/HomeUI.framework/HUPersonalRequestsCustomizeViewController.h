/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, OBLinkTrayButton, NSString;

@interface HUPersonalRequestsCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _usePRButton;
	OBLinkTrayButton* _customizeButton;
	NSString* _finePrintFooterText;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * usePRButton;                                             //@synthesize usePRButton=_usePRButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                     //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) NSString * finePrintFooterText;                                         //@synthesize finePrintFooterText=_finePrintFooterText - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCustomizeButton:(OBLinkTrayButton *)arg1 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(OBLinkTrayButton *)customizeButton;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(void)setUsePRButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)usePRButton;
-(void)_setupPersonalRequests:(id)arg1 ;
-(void)_dontSetupPersonalRequests:(id)arg1 ;
-(NSString *)finePrintFooterText;
-(id)initWithLocationDevice:(id)arg1 home:(id)arg2 ;
-(void)setFinePrintFooterText:(NSString *)arg1 ;
@end


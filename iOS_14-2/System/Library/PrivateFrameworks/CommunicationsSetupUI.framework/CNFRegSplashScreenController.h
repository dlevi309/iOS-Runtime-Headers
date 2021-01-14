/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/CNFRegFirstRunExperience.h>

@protocol CNFRegFirstRunDelegate;
@class UIButton, CNFRegController, UIBarButtonItem, NSString;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {

	UIButton* _learnMoreButton;
	id<CNFRegFirstRunDelegate> _delegate;
	CNFRegController* _regController;

}

@property (nonatomic,retain) CNFRegController * regController;                 //@synthesize regController=_regController - In the implementation block
@property (assign,nonatomic) id<CNFRegFirstRunDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentAppearanceStyle; 
@property (nonatomic,retain) UIBarButtonItem * customLeftButton; 
@property (nonatomic,retain) UIBarButtonItem * customRightButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willBecomeActive;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)init;
-(id<CNFRegFirstRunDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<CNFRegFirstRunDelegate>)arg1 ;
-(void)_learnMorePressed:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)userInteractionColor;
-(long long)currentAppearanceStyle;
-(id)initWithRegController:(id)arg1 account:(id)arg2 ;
-(void)setCustomLeftButton:(UIBarButtonItem *)arg1 ;
-(void)setCustomRightButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)customLeftButton;
-(UIBarButtonItem *)customRightButton;
-(void)_getStartedPressed:(id)arg1 ;
@end


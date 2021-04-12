/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/CNFRegFirstRunExperience.h>

@protocol CNFRegFirstRunDelegate;
@class UIButton, CNFRegController, NSString, UIBarButtonItem;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {

	UIButton* _learnMoreButton;
	id<CNFRegFirstRunDelegate> _delegate;
	CNFRegController* _regController;

}

@property (nonatomic,retain) CNFRegController * regController;                 //@synthesize regController=_regController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<CNFRegFirstRunDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentAppearanceStyle; 
@property (nonatomic,retain) UIBarButtonItem * customLeftButton; 
@property (nonatomic,retain) UIBarButtonItem * customRightButton; 
-(id)init;
-(void)dealloc;
-(id<CNFRegFirstRunDelegate>)delegate;
-(void)setDelegate:(id<CNFRegFirstRunDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willBecomeActive;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_learnMorePressed:(id)arg1 ;
-(CNFRegController *)regController;
-(id)userInteractionColor;
-(void)setRegController:(CNFRegController *)arg1 ;
-(long long)currentAppearanceStyle;
-(id)initWithRegController:(id)arg1 account:(id)arg2 ;
-(void)setCustomLeftButton:(UIBarButtonItem *)arg1 ;
-(void)setCustomRightButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)customLeftButton;
-(UIBarButtonItem *)customRightButton;
-(void)_getStartedPressed:(id)arg1 ;
@end


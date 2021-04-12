/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VTUITurnOnSiriViewDelegate.h>
#import <libobjc.A.dylib/VTUISiriDataSharingOptInPresentationDelegate.h>

@protocol AFUISiriSetupViewControllerDelegate;
@class UIView, VTUITurnOnSiriView, VTUISiriDataSharingOptInPresenter, OBWelcomeController, _UIBackdropView, UIStatusBar, NSString;

@interface AFUISiriSetupViewController : UIViewController <VTUITurnOnSiriViewDelegate, VTUISiriDataSharingOptInPresentationDelegate> {

	UIView* _contentView;
	VTUITurnOnSiriView* _setupView;
	VTUISiriDataSharingOptInPresenter* _dataSharingOptInPresenter;
	OBWelcomeController* _dataSharingOptInViewController;
	_UIBackdropView* _backdropView;
	BOOL _backdropViewVisible;
	BOOL _visible;
	BOOL _lastTimeShown;
	id<AFUISiriSetupViewControllerDelegate> _delegate;
	UIView* _siriSetupView;
	UIStatusBar* _statusBar;

}

@property (setter=_setStatusBar:,getter=_statusBar,nonatomic,retain) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriSetupViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL lastTimeShown;                                                           //@synthesize lastTimeShown=_lastTimeShown - In the implementation block
@property (nonatomic,retain) UIView * siriSetupView;                                                       //@synthesize siriSetupView=_siriSetupView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<AFUISiriSetupViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AFUISiriSetupViewControllerDelegate>)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)_statusBar;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1 ;
-(void)siriDataSharingOptInViewControllerDidDismissFromPresenter:(id)arg1 ;
-(CGRect)_statusBarFrame;
-(void)setFluidDismissalState:(id)arg1 ;
-(void)animatedAppearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animatedDisappearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLastTimeShown:(BOOL)arg1 ;
-(id)dimBackdropSettings;
-(void)_setStatusBar:(id)arg1 ;
-(void)_removeStatusBar;
-(void)_continueTapped:(id)arg1 ;
-(void)_laterTapped:(id)arg1 ;
-(void)setSiriSetupView:(UIView *)arg1 ;
-(BOOL)_siriDataSharingOptInFeatureFlagEnabled;
-(void)_addStatusBar;
-(UIView *)siriSetupView;
-(void)_presentDataSharingOptInViewController;
-(void)aboutSelectedInTurnOnSiriView:(id)arg1 ;
-(BOOL)lastTimeShown;
@end


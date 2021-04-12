/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VTUITurnOnSiriViewDelegate.h>
#import <libobjc.A.dylib/VTUISiriDataSharingOptInPresentationDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol AFUISiriSetupViewControllerDelegate;
@class UIView, VTUITurnOnSiriView, VTUISiriDataSharingOptInPresenter, OBWelcomeController, UIStatusBar, NSString;

@interface AFUISiriSetupViewController : UIViewController <VTUITurnOnSiriViewDelegate, VTUISiriDataSharingOptInPresentationDelegate, UIAdaptivePresentationControllerDelegate> {

	UIView* _contentView;
	VTUITurnOnSiriView* _setupView;
	VTUISiriDataSharingOptInPresenter* _dataSharingOptInPresenter;
	OBWelcomeController* _dataSharingOptInViewController;
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(id<AFUISiriSetupViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<AFUISiriSetupViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(BOOL)isVisible;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1 ;
-(void)siriDataSharingOptInViewControllerDidDismissFromPresenter:(id)arg1 ;
-(id)_statusBar;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)_setStatusBar:(id)arg1 ;
-(void)animatedAppearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animatedDisappearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_continueTapped:(id)arg1 ;
-(void)_laterTapped:(id)arg1 ;
-(void)setSiriSetupView:(UIView *)arg1 ;
-(UIView *)siriSetupView;
-(void)_presentDataSharingOptInViewController;
-(void)aboutSelectedInTurnOnSiriView:(id)arg1 ;
-(void)setLastTimeShown:(BOOL)arg1 ;
-(BOOL)lastTimeShown;
@end


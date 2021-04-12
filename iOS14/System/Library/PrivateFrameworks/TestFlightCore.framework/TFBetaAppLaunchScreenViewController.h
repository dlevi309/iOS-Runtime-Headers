/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TFBetaAppLaunchPresenterView.h>
#import <libobjc.A.dylib/TFHostedBetaAppLaunchScreenView.h>

@protocol TFBetaAppLaunchScreenHost;
@class TFBetaAppLaunchPresenter, TFBetaAppLaunchScreenView, UIBarButtonItem, NSString;

@interface TFBetaAppLaunchScreenViewController : UIViewController <TFBetaAppLaunchPresenterView, TFHostedBetaAppLaunchScreenView> {

	id<TFBetaAppLaunchScreenHost> _launchScreenHost;
	TFBetaAppLaunchPresenter* _presenter;
	TFBetaAppLaunchScreenView* _launchScreenView;
	UIBarButtonItem* _cancelBarButtonItem;

}

@property (nonatomic,readonly) TFBetaAppLaunchPresenter * presenter;                             //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) TFBetaAppLaunchScreenView * launchScreenView;                       //@synthesize launchScreenView=_launchScreenView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelBarButtonItem;                            //@synthesize cancelBarButtonItem=_cancelBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<TFBetaAppLaunchScreenHost> launchScreenHost;              //@synthesize launchScreenHost=_launchScreenHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)_currentInterfaceOrientation;
-(TFBetaAppLaunchPresenter *)presenter;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(id)initWithPresenter:(id)arg1 ;
-(UIBarButtonItem *)cancelBarButtonItem;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setLaunchScreenHost:(id<TFBetaAppLaunchScreenHost>)arg1 ;
-(void)showLoadingAnimated:(BOOL)arg1 ;
-(void)showTestNotesWithTitle:(id)arg1 lockup:(id)arg2 testNotesTitle:(id)arg3 testNotesText:(id)arg4 primaryButtonTitle:(id)arg5 primaryButtonEvent:(unsigned long long)arg6 animated:(BOOL)arg7 fetchingOnImageFetcher:(id)arg8 ;
-(void)showHowToWithTitle:(id)arg1 subtitle:(id)arg2 imageIdentifier:(id)arg3 primaryButtonTitle:(id)arg4 primaryButtonEvent:(unsigned long long)arg5 secondaryButtonTitle:(id)arg6 secondaryButtonEvent:(unsigned long long)arg7 animated:(BOOL)arg8 ;
-(void)_didPressNavigationItemCancel;
-(void)setLaunchScreenView:(TFBetaAppLaunchScreenView *)arg1 ;
-(TFBetaAppLaunchScreenView *)launchScreenView;
-(id<TFBetaAppLaunchScreenHost>)launchScreenHost;
-(void)_updateForContainmentInHostEnvironment:(id)arg1 ;
-(void)_updateNavigationBarForHostTraitCollection:(id)arg1 ;
-(id)_fadeTransition;
-(void)_animateLaunchScreenViewWithUpdateBlock:(/*^block*/id)arg1 transition:(id)arg2 ;
-(SEL)_selectorForPresentorViewEvent:(unsigned long long)arg1 ;
-(id)_pushTransition;
-(void)_didPressShowHowToButton;
-(void)_didPressOpenHowToSupportLinkButton;
-(void)_didPressExitLaunchScreenButton;
-(void)launchScreenHost:(id)arg1 traitCollectionDidChange:(id)arg2 ;
@end


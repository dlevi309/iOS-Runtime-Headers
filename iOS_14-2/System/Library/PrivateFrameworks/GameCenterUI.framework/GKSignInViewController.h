/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKViewController.h>
#import <libobjc.A.dylib/AKInlineSignInViewControllerDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/GKAuthenticateViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString, UIViewController, UIActivityIndicatorView, UILabel, GKLabel, GKSignInInputView, UIImageView, AKInlineSignInViewController, AKAppleIDAuthenticationInAppContext, NSMutableArray, RemoteUIController, UINavigationController, GKDispatchGroup, UIScrollView, GKGame, GKAccountRemoteUIController;

@interface GKSignInViewController : GKViewController <AKInlineSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate, RemoteUIControllerDelegate, GKAuthenticateViewController, UIScrollViewDelegate> {

	BOOL _disablesSignIn;
	BOOL _loadingRemoteUI;
	BOOL _constraintsCreated;
	BOOL _userShouldSkipCreateAppleID;
	NSString* _appleID;
	/*^block*/id _completionHandler;
	UIViewController* _remoteUIPresentingViewController;
	UIActivityIndicatorView* _progressIndicator;
	UILabel* _signInLabel;
	GKLabel* _loginPromptLabel;
	GKSignInInputView* _signInInputView;
	UIImageView* _bubbleImageView;
	AKInlineSignInViewController* _inlineSignInViewController;
	AKAppleIDAuthenticationInAppContext* _authContext;
	double _fullWidthContentWidthConstraintConstant;
	double _horizontalPaddingConstraintConstant;
	double _labelWidthConstraintConstant;
	NSMutableArray* _fullWidthViewConstraints;
	RemoteUIController* _remoteU13Controller;
	UINavigationController* _u13NavigationController;
	NSMutableArray* _u13ObjectModels;
	GKDispatchGroup* _u13Group;
	UIScrollView* _scrollView;
	GKGame* _game;
	GKAccountRemoteUIController* _accountController;
	UIEdgeInsets _currentContentInsets;
	UIEdgeInsets _contentInsetsBeforeKeyboard;
	UIEdgeInsets _scrollIndicatorInsetsBeforeKeyboard;

}

@property (nonatomic,retain) NSString * appleID;                                                     //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * progressIndicator;                            //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,retain) UILabel * signInLabel;                                                  //@synthesize signInLabel=_signInLabel - In the implementation block
@property (nonatomic,retain) GKLabel * loginPromptLabel;                                             //@synthesize loginPromptLabel=_loginPromptLabel - In the implementation block
@property (nonatomic,retain) GKSignInInputView * signInInputView;                                    //@synthesize signInInputView=_signInInputView - In the implementation block
@property (assign,nonatomic) BOOL constraintsCreated;                                                //@synthesize constraintsCreated=_constraintsCreated - In the implementation block
@property (assign,nonatomic) UIEdgeInsets currentContentInsets;                                      //@synthesize currentContentInsets=_currentContentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsetsBeforeKeyboard;                               //@synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollIndicatorInsetsBeforeKeyboard;                       //@synthesize scrollIndicatorInsetsBeforeKeyboard=_scrollIndicatorInsetsBeforeKeyboard - In the implementation block
@property (nonatomic,retain) UIImageView * bubbleImageView;                                          //@synthesize bubbleImageView=_bubbleImageView - In the implementation block
@property (nonatomic,retain) AKInlineSignInViewController * inlineSignInViewController;              //@synthesize inlineSignInViewController=_inlineSignInViewController - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationInAppContext * authContext;                      //@synthesize authContext=_authContext - In the implementation block
@property (assign,nonatomic) double fullWidthContentWidthConstraintConstant;                         //@synthesize fullWidthContentWidthConstraintConstant=_fullWidthContentWidthConstraintConstant - In the implementation block
@property (assign,nonatomic) double horizontalPaddingConstraintConstant;                             //@synthesize horizontalPaddingConstraintConstant=_horizontalPaddingConstraintConstant - In the implementation block
@property (assign,nonatomic) double labelWidthConstraintConstant;                                    //@synthesize labelWidthConstraintConstant=_labelWidthConstraintConstant - In the implementation block
@property (nonatomic,retain) NSMutableArray * fullWidthViewConstraints;                              //@synthesize fullWidthViewConstraints=_fullWidthViewConstraints - In the implementation block
@property (nonatomic,retain) RemoteUIController * remoteU13Controller;                               //@synthesize remoteU13Controller=_remoteU13Controller - In the implementation block
@property (nonatomic,retain) UINavigationController * u13NavigationController;                       //@synthesize u13NavigationController=_u13NavigationController - In the implementation block
@property (nonatomic,retain) NSMutableArray * u13ObjectModels;                                       //@synthesize u13ObjectModels=_u13ObjectModels - In the implementation block
@property (nonatomic,retain) GKDispatchGroup * u13Group;                                             //@synthesize u13Group=_u13Group - In the implementation block
@property (assign,nonatomic) BOOL userShouldSkipCreateAppleID;                                       //@synthesize userShouldSkipCreateAppleID=_userShouldSkipCreateAppleID - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                          //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKAccountRemoteUIController * accountController;                        //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) UIViewController * remoteUIPresentingViewController;                    //@synthesize remoteUIPresentingViewController=_remoteUIPresentingViewController - In the implementation block
@property (assign,getter=isLoadingRemoteUI,nonatomic) BOOL loadingRemoteUI;                          //@synthesize loadingRemoteUI=_loadingRemoteUI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL disablesSignIn;                                                    //@synthesize disablesSignIn=_disablesSignIn - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIEdgeInsets)scrollIndicatorInsetsBeforeKeyboard;
-(void)setScrollIndicatorInsetsBeforeKeyboard:(UIEdgeInsets)arg1 ;
-(void)setInlineSignInViewController:(AKInlineSignInViewController *)arg1 ;
-(double)horizontalPaddingConstraintConstant;
-(void)setHorizontalPaddingConstraintConstant:(double)arg1 ;
-(void)setLabelWidthConstraintConstant:(double)arg1 ;
-(RemoteUIController *)remoteU13Controller;
-(void)setRemoteU13Controller:(RemoteUIController *)arg1 ;
-(UINavigationController *)u13NavigationController;
-(NSMutableArray *)u13ObjectModels;
-(void)setU13NavigationController:(UINavigationController *)arg1 ;
-(void)setU13ObjectModels:(NSMutableArray *)arg1 ;
-(BOOL)userShouldSkipCreateAppleID;
-(void)setUserShouldSkipCreateAppleID:(BOOL)arg1 ;
-(GKGame *)game;
-(void)signIn;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(GKDispatchGroup *)u13Group;
-(void)setBubbleImageView:(UIImageView *)arg1 ;
-(id)completionHandler;
-(UIEdgeInsets)contentInsetsBeforeKeyboard;
-(void)setContentInsetsBeforeKeyboard:(UIEdgeInsets)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(GKAccountRemoteUIController *)accountController;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(GKSignInInputView *)signInInputView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)_systemContentSizeSettingDidChange:(id)arg1 ;
-(void)addCancelButtonToNavigationItem:(id)arg1 ;
-(void)cancelSignIn;
-(void)createSubviews;
-(void)setupAuthKitInlineViewController;
-(id)barBackgroundImage;
-(void)iForgotTapped;
-(void)createAppleID;
-(void)startLoadingIndicator;
-(void)stopLoadingIndicator;
-(void)authenticateRequestCompletedWithErrorResponse:(id)arg1 error:(id)arg2 ;
-(void)showLoginFailedAlert;
-(void)setU13Group:(GKDispatchGroup *)arg1 ;
-(void)updateConstraintConstantsForTraitCollection:(id)arg1 ;
-(NSMutableArray *)fullWidthViewConstraints;
-(double)fullWidthContentWidthConstraintConstant;
-(UIActivityIndicatorView *)progressIndicator;
-(void)loadView;
-(void)setFullWidthContentWidthConstraintConstant:(double)arg1 ;
-(void)setFullWidthViewConstraints:(NSMutableArray *)arg1 ;
-(void)finishAuthenticationWithError:(id)arg1 ;
-(void)showAccountRemoteUIForAccountName:(id)arg1 mode:(long long)arg2 ;
-(void)showPasswordChangeAlertWithURL:(id)arg1 ;
-(BOOL)handleUnderlyingAuthenticationError:(id)arg1 accountName:(id)arg2 ;
-(void)showConnectionFailedAlert;
-(void)setAccountController:(GKAccountRemoteUIController *)arg1 ;
-(void)loadAccountRemoteUIForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)showAuthKitAlertFromGreenBuddyWithAuthInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountRemoteUIController:(id)arg1 finishedWithError:(id)arg2 ;
-(void)showAccountRemoteUIForAccountName:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 ;
-(void)presentAccountRemoteUIControllerAnimated:(BOOL)arg1 ;
-(void)showAccountDisabledAlert;
-(void)showPasswordAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(AKAppleIDAuthenticationInAppContext *)authContext;
-(void)setAuthContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(void)createConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(UIImageView *)bubbleImageView;
-(void)showPasswordResetAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(AKInlineSignInViewController *)inlineSignInViewController;
-(BOOL)disablesSignIn;
-(void)setDisablesSignIn:(BOOL)arg1 ;
-(void)createNewAccount;
-(void)presentError:(id)arg1 forAccountRemoteUIController:(id)arg2 ;
-(void)loadAccountRemoteUIForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showViewController:(id)arg1 ;
-(void)showForgotPasswordAlert;
-(UIViewController *)remoteUIPresentingViewController;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(void)dealloc;
-(void)setRemoteUIPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)isLoadingRemoteUI;
-(void)setLoadingRemoteUI:(BOOL)arg1 ;
-(void)setProgressIndicator:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)signInLabel;
-(void)setSignInLabel:(UILabel *)arg1 ;
-(GKLabel *)loginPromptLabel;
-(void)setLoginPromptLabel:(GKLabel *)arg1 ;
-(void)setSignInInputView:(GKSignInInputView *)arg1 ;
-(BOOL)constraintsCreated;
-(void)setConstraintsCreated:(BOOL)arg1 ;
-(UIEdgeInsets)currentContentInsets;
-(void)setCurrentContentInsets:(UIEdgeInsets)arg1 ;
-(double)labelWidthConstraintConstant;
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
@end


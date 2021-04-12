/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/GKDaemonProxyDataUpdateDelegate.h>
#import <libobjc.A.dylib/GKExtensionProtocol.h>
#import <libobjc.A.dylib/GKExtensionHostProtocol.h>
#import <libobjc.A.dylib/GKDashboardServiceInterface.h>

@class UIViewController, GKGame, UIVisualEffectView, NSLayoutConstraint, NSString;

@interface GKExtensionViewController : UINavigationController <GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface> {

	BOOL _alwaysShowDoneButton;
	BOOL _adjustTopConstraint;
	BOOL _hasInitialData;
	int _hostPID;
	double _statusBarHeight;
	UIViewController* _contentViewController;
	GKGame* _game;
	UIVisualEffectView* _effectView;
	NSLayoutConstraint* _effectBottomConstraint;
	NSLayoutConstraint* _effectTopConstraint;

}

@property (assign,nonatomic) BOOL hasInitialData;                                      //@synthesize hasInitialData=_hasInitialData - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                          //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * effectBottomConstraint;              //@synthesize effectBottomConstraint=_effectBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * effectTopConstraint;                 //@synthesize effectTopConstraint=_effectTopConstraint - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowDoneButton;                                //@synthesize alwaysShowDoneButton=_alwaysShowDoneButton - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                                   //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                 //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) GKGame * game;                                            //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) int hostPID;                                              //@synthesize hostPID=_hostPID - In the implementation block
@property (assign,nonatomic) BOOL adjustTopConstraint;                                 //@synthesize adjustTopConstraint=_adjustTopConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)statusBarHeight;
-(void)finish;
-(UIVisualEffectView *)effectView;
-(void)donePressed:(id)arg1 ;
-(int)hostPID;
-(BOOL)_useBackdropViewForWindowBackground;
-(GKGame *)game;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)_statusBarHeightForCurrentInterfaceOrientation;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)extensionIsCanceling;
-(void)setHostPID:(int)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(UIViewController *)contentViewController;
-(id)blurEffectForTraitCollection:(id)arg1 ;
-(BOOL)alwaysShowDoneButton;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)setToLightBackground;
-(void)setToDarkBackground;
-(void)didBecomeActive:(id)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)viewDidLoad;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupVisualEffects;
-(void)setEffectBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)hasInitialData;
-(void)setEffectTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)constructContentViewController;
-(BOOL)adjustTopConstraint;
-(NSLayoutConstraint *)effectTopConstraint;
-(void)setHasInitialData:(BOOL)arg1 ;
-(void)configureContentViewController;
-(void)addDoneButtonToViewController:(id)arg1 ;
-(id)hostObjectProxy;
-(void)sendMessageToClient:(id)arg1 ;
-(void)clientDidFinish;
-(void)clientDidCancel;
-(void)clientWillTerminate;
-(void)setAdjustTopConstraint:(BOOL)arg1 ;
-(NSLayoutConstraint *)effectBottomConstraint;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)messageFromClient:(id)arg1 ;
-(void)extensionIsFinishing;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAlwaysShowDoneButton:(BOOL)arg1 ;
-(void)dealloc;
@end


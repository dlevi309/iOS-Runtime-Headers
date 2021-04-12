/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@protocol SBLogoutProgressDataSource, SBLogoutProgressDelegate;
@class SBLogoutDebugBlockingViewController, SBMultiUserDefaults, SBPlatformController, SBLogoutProgressView, SBTransientOverlayWallpaperEffectView, UMUser, NSString;

@interface SBLogoutProgressTransientOverlayViewController : SBTransientOverlayViewController <CSExternalBehaviorProviding> {

	SBLogoutDebugBlockingViewController* _debugTasksViewController;
	SBMultiUserDefaults* _multiUserDefaults;
	SBPlatformController* _platformController;
	SBLogoutProgressView* _progressView;
	SBTransientOverlayWallpaperEffectView* _wallpaperEffectView;
	id<SBLogoutProgressDataSource> _dataSource;
	UMUser* _user;
	id<SBLogoutProgressDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLogoutProgressDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SBLogoutProgressDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UMUser * user;                                               //@synthesize user=_user - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(UMUser *)user;
-(id<SBLogoutProgressDelegate>)delegate;
-(void)setDelegate:(id<SBLogoutProgressDelegate>)arg1 ;
-(id<SBLogoutProgressDataSource>)dataSource;
-(void)setDataSource:(id<SBLogoutProgressDataSource>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isContentOpaque;
-(long long)preferredStatusBarStyle;
-(id)_legibilitySettings;
-(void)_updateData;
-(long long)idleTimerMode;
-(void)setContainerOrientation:(long long)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(void)_updateLegibility;
-(void)refreshData;
-(long long)participantState;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(void)prepareForRestart;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)initWithUserAccount:(id)arg1 ;
-(BOOL)_supportsDebugUI;
-(void)_updateDebugTasksViewControllerSizeFromSize:(CGSize)arg1 ;
@end


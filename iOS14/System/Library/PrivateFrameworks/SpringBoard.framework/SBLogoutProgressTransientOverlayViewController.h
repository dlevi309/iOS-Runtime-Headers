/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)setContainerOrientation:(long long)arg1 ;
-(id)_legibilitySettings;
-(void)conformsToCSExternalBehaviorProviding;
-(void)_updateData;
-(id<SBLogoutProgressDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(id<SBLogoutProgressDataSource>)dataSource;
-(long long)proximityDetectionMode;
-(NSString *)coverSheetIdentifier;
-(void)setDelegate:(id<SBLogoutProgressDelegate>)arg1 ;
-(void)setDataSource:(id<SBLogoutProgressDataSource>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(UMUser *)user;
-(long long)participantState;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(long long)idleWarnMode;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isContentOpaque;
-(void)_updateLegibility;
-(long long)scrollingStrategy;
-(void)refreshData;
-(void)viewDidLayoutSubviews;
-(unsigned long long)restrictedCapabilities;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(void)prepareForRestart;
-(id)initWithUserAccount:(id)arg1 ;
-(BOOL)_supportsDebugUI;
-(void)_updateDebugTasksViewControllerSizeFromSize:(CGSize)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSAuthenticationManaging.h>
#import <libobjc.A.dylib/CSCarPlayStatusProviding.h>
#import <libobjc.A.dylib/CSMediaControlling.h>
#import <libobjc.A.dylib/CSReachabilityControlling.h>
#import <libobjc.A.dylib/CSResetRestoreStatusProviding.h>
#import <libobjc.A.dylib/CSTelephonyStatusProviding.h>
#import <libobjc.A.dylib/CSTouchEnvironmentStatusProviding.h>
#import <libobjc.A.dylib/CSUnlockRequesting.h>
#import <libobjc.A.dylib/CSUserSessionControlling.h>
#import <libobjc.A.dylib/CSWallpaperLogging.h>
#import <libobjc.A.dylib/CSTodayOverlayProviding.h>
#import <libobjc.A.dylib/CSSystemCursorInteractionManaging.h>
#import <libobjc.A.dylib/CSCoverSheetContextProviding.h>

@protocol SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFPasscodeFieldChangeObserver, SBFDateProviding, SBFLockOutStatusProvider, CSLegibilityProviding, CSPowerStatusProviding, CSThermalStatusProviding, SBUIBiometricResource, CSScreenStateProviding, SBFScreenWakeAnimationControlling, CSHomeAffordanceControlling, CSModalHomeAffordanceControlling, CSStatusBarControlling, CSWallpaperViewProviding, SBFActionProviding, CSApplicationInforming;
@class NSString, NSArray, SBSyncController, SBWallpaperAggdLogger, SBDashBoardNotificationPresenter;

@interface SBDefaultCoverSheetContext : NSObject <CSAuthenticationManaging, CSCarPlayStatusProviding, CSMediaControlling, CSReachabilityControlling, CSResetRestoreStatusProviding, CSTelephonyStatusProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSTodayOverlayProviding, CSSystemCursorInteractionManaging, CSCoverSheetContextProviding> {

	SBSyncController* _syncController;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;
	SBDashBoardNotificationPresenter* _notificationPresenter;
	id<SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
	id<SBFPasscodeFieldChangeObserver> _passcodeFieldChangeObserver;
	id<SBFDateProviding> _dateProvider;
	id<SBFLockOutStatusProvider> _lockOutStatusProvider;
	id<CSLegibilityProviding> _legibilityProvider;
	id<CSPowerStatusProviding> _powerStatusProvider;
	NSString* _powerStatusChangeNotificationName;
	id<CSThermalStatusProviding> _thermalStatusProvider;
	id<SBUIBiometricResource> _biometricResource;
	id<CSScreenStateProviding> _screenStateProvider;
	id<SBFScreenWakeAnimationControlling> _screenWakeAnimationController;
	id<CSHomeAffordanceControlling> _homeAffordanceController;
	id<CSModalHomeAffordanceControlling> _modalHomeAffordanceController;
	id<CSStatusBarControlling> _statusBarController;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;
	id<SBFActionProviding> _contentActionProvider;
	id<CSApplicationInforming> _applicationInformer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCarPlayActiveForNotifications,nonatomic,readonly) BOOL carPlayActiveForNotifications; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@property (nonatomic,readonly) long long restoreState; 
@property (getter=isResetting,nonatomic,readonly) BOOL resetting; 
@property (nonatomic,readonly) long long resetState; 
@property (nonatomic,readonly) BOOL expectsPocketTouches; 
@property (getter=isLogoutSupported,nonatomic,readonly) BOOL logoutSupported; 
@property (nonatomic,readonly) BOOL wantsTodayOverlay; 
@property (nonatomic,readonly) id<SBFAuthenticationAssertionProviding> authenticationAssertionProvider;                //@synthesize authenticationAssertionProvider=_authenticationAssertionProvider - In the implementation block
@property (nonatomic,readonly) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                       //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,readonly) id<SBFPasscodeFieldChangeObserver> passcodeFieldChangeObserver;                         //@synthesize passcodeFieldChangeObserver=_passcodeFieldChangeObserver - In the implementation block
@property (nonatomic,readonly) id<SBFLockOutStatusProvider> lockOutStatusProvider;                                     //@synthesize lockOutStatusProvider=_lockOutStatusProvider - In the implementation block
@property (nonatomic,readonly) id<SBFDateProviding> dateProvider;                                                      //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) id<CSLegibilityProviding> legibilityProvider;                                           //@synthesize legibilityProvider=_legibilityProvider - In the implementation block
@property (nonatomic,readonly) id<CSPowerStatusProviding> powerStatusProvider;                                         //@synthesize powerStatusProvider=_powerStatusProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * powerStatusChangeNotificationName;                                      //@synthesize powerStatusChangeNotificationName=_powerStatusChangeNotificationName - In the implementation block
@property (nonatomic,readonly) id<CSResetRestoreStatusProviding> resetRestoreStatusProvider; 
@property (nonatomic,readonly) id<CSThermalStatusProviding> thermalStatusProvider;                                     //@synthesize thermalStatusProvider=_thermalStatusProvider - In the implementation block
@property (nonatomic,readonly) id<SBUIBiometricResource> biometricResource;                                            //@synthesize biometricResource=_biometricResource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dismissableOverlays; 
@property (nonatomic,readonly) id<CSScreenStateProviding> screenStateProvider;                                         //@synthesize screenStateProvider=_screenStateProvider - In the implementation block
@property (nonatomic,readonly) id<SBFScreenWakeAnimationControlling> screenWakeAnimationController;                    //@synthesize screenWakeAnimationController=_screenWakeAnimationController - In the implementation block
@property (nonatomic,readonly) id<CSWallpaperViewProviding> wallpaperViewProvider;                                     //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
@property (nonatomic,readonly) id<CSTelephonyStatusProviding> telephonyStatusProvider; 
@property (nonatomic,readonly) id<CSAuthenticationManaging> authenticationManager; 
@property (nonatomic,readonly) id<CSHomeAffordanceControlling> homeAffordanceController;                               //@synthesize homeAffordanceController=_homeAffordanceController - In the implementation block
@property (nonatomic,readonly) id<CSModalHomeAffordanceControlling> modalHomeAffordanceController;                     //@synthesize modalHomeAffordanceController=_modalHomeAffordanceController - In the implementation block
@property (nonatomic,readonly) id<CSStatusBarControlling> statusBarController;                                         //@synthesize statusBarController=_statusBarController - In the implementation block
@property (nonatomic,readonly) id<CSMediaControlling> mediaController; 
@property (nonatomic,readonly) id<CSUnlockRequesting> unlockRequester; 
@property (nonatomic,readonly) id<CSWallpaperLogging> wallpaperLogger; 
@property (nonatomic,readonly) id<SBFActionProviding> contentActionProvider;                                           //@synthesize contentActionProvider=_contentActionProvider - In the implementation block
@property (nonatomic,readonly) id<CSApplicationInforming> applicationInformer;                                         //@synthesize applicationInformer=_applicationInformer - In the implementation block
@property (nonatomic,readonly) id<CSNotificationPresenting> notificationPresenter; 
@property (nonatomic,readonly) id<CSTouchEnvironmentStatusProviding> touchEnvironmentStatusProvider; 
@property (nonatomic,readonly) id<CSUserSessionControlling> userSessionController; 
@property (nonatomic,readonly) id<CSReachabilityControlling> reachabilityController; 
@property (nonatomic,readonly) id<CSCarPlayStatusProviding> carPlayStatusProvider; 
@property (nonatomic,readonly) id<CSTodayOverlayProviding> todayOverlayProvider; 
@property (nonatomic,readonly) id<CSSystemCursorInteractionManaging> systemCursorInterationManager; 
-(id)init;
-(long long)restoreState;
-(id<CSMediaControlling>)mediaController;
-(long long)resetState;
-(BOOL)isRestoring;
-(id<SBFDateProviding>)dateProvider;
-(void)logout;
-(id<SBUIBiometricResource>)biometricResource;
-(BOOL)isResetting;
-(id<CSSystemCursorInteractionManaging>)systemCursorInterationManager;
-(void)registerView:(id)arg1 delegate:(id)arg2 ;
-(void)unregisterView:(id)arg1 ;
-(id<CSUserSessionControlling>)userSessionController;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(id<CSHomeAffordanceControlling>)homeAffordanceController;
-(BOOL)expectsPocketTouches;
-(BOOL)isLogoutSupported;
-(id<CSTouchEnvironmentStatusProviding>)touchEnvironmentStatusProvider;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(id<CSPowerStatusProviding>)powerStatusProvider;
-(NSString *)powerStatusChangeNotificationName;
-(id<CSCarPlayStatusProviding>)carPlayStatusProvider;
-(id<CSLegibilityProviding>)legibilityProvider;
-(id<SBFLockOutStatusProvider>)lockOutStatusProvider;
-(id<SBFScreenWakeAnimationControlling>)screenWakeAnimationController;
-(id<CSTodayOverlayProviding>)todayOverlayProvider;
-(BOOL)wantsTodayOverlay;
-(id<CSStatusBarControlling>)statusBarController;
-(id)newTodayOverlayController;
-(id<CSUnlockRequesting>)unlockRequester;
-(id)createUnlockRequestForActionContext:(id)arg1 ;
-(void)unlockWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<CSReachabilityControlling>)reachabilityController;
-(void)deactivateReachability;
-(id)createUnlockRequest;
-(id<CSWallpaperLogging>)wallpaperLogger;
-(void)incrementIrisPlayCount;
-(id<CSApplicationInforming>)applicationInformer;
-(id<SBFActionProviding>)contentActionProvider;
-(id<CSNotificationPresenting>)notificationPresenter;
-(id<CSModalHomeAffordanceControlling>)modalHomeAffordanceController;
-(id<CSScreenStateProviding>)screenStateProvider;
-(id<CSThermalStatusProviding>)thermalStatusProvider;
-(void)stopMediaPlaybackForSource:(long long)arg1 ;
-(id<CSResetRestoreStatusProviding>)resetRestoreStatusProvider;
-(NSArray *)dismissableOverlays;
-(id<CSAuthenticationManaging>)authenticationManager;
-(void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id<CSTelephonyStatusProviding>)telephonyStatusProvider;
-(BOOL)isEmergencyCallSupported;
-(void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<SBFPasscodeFieldChangeObserver>)passcodeFieldChangeObserver;
-(id<SBFAuthenticationAssertionProviding>)authenticationAssertionProvider;
-(void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isCarPlayActiveForNotifications;
@end


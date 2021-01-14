/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
#import <libobjc.A.dylib/CSOverlayProviding.h>
#import <libobjc.A.dylib/CSAppHostConfiguring.h>
#import <libobjc.A.dylib/CSSystemPointerInteractionManaging.h>
#import <libobjc.A.dylib/CSProximitySensorProviding.h>
#import <libobjc.A.dylib/CSDeviceOrientationProviding.h>
#import <libobjc.A.dylib/SBProximitySensorManagerObserver.h>
#import <libobjc.A.dylib/SBFOverlayObserving.h>
#import <libobjc.A.dylib/CSCoverSheetContextProviding.h>

@protocol SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFPasscodeFieldChangeObserver, SBFDateProviding, SBFLockOutStatusProvider, CSLegibilityProviding, CSPowerStatusProviding, CSAccessoryStatusProviding, CSThermalStatusProviding, SBUIBiometricResource, CSScreenStateProviding, SBFScreenWakeAnimationControlling, CSHomeAffordanceControlling, CSModalHomeAffordanceControlling, CSStatusBarControlling, CSWallpaperViewProviding, SBFActionProviding, CSApplicationInforming;
@class NSString, NSArray, SBSyncController, SBWallpaperAggdLogger, SBDashBoardNotificationPresenter, SBProximitySensorManager, NSMutableSet;

@interface SBDefaultCoverSheetContext : NSObject <CSAuthenticationManaging, CSCarPlayStatusProviding, CSMediaControlling, CSReachabilityControlling, CSResetRestoreStatusProviding, CSTelephonyStatusProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSOverlayProviding, CSAppHostConfiguring, CSSystemPointerInteractionManaging, CSProximitySensorProviding, CSDeviceOrientationProviding, SBProximitySensorManagerObserver, SBFOverlayObserving, CSCoverSheetContextProviding> {

	SBSyncController* _syncController;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;
	SBDashBoardNotificationPresenter* _notificationPresenter;
	SBProximitySensorManager* _proximitySensorManager;
	NSMutableSet* _proximitySensorProviderObservers;
	BOOL _objectInProximity;
	id<SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
	id<SBFPasscodeFieldChangeObserver> _passcodeFieldChangeObserver;
	id<SBFDateProviding> _dateProvider;
	id<SBFLockOutStatusProvider> _lockOutStatusProvider;
	id<CSLegibilityProviding> _legibilityProvider;
	id<CSPowerStatusProviding> _powerStatusProvider;
	NSString* _powerStatusChangeNotificationName;
	id<CSAccessoryStatusProviding> _accessoryStatusProvider;
	NSString* _accessoryAttachedNotificationName;
	NSString* _accessoryDetachedNotificationName;
	NSString* _accessoryAnimationStatusChangedNotificationName;
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
	long long _rawDeviceOrientationIgnoringOrientationLocks;

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
@property (nonatomic,readonly) BOOL wantsHomeScreenOverlay; 
@property (getter=isObjectInProximity,nonatomic,readonly) BOOL objectInProximity;                                      //@synthesize objectInProximity=_objectInProximity - In the implementation block
@property (nonatomic,readonly) long long rawDeviceOrientationIgnoringOrientationLocks;                                 //@synthesize rawDeviceOrientationIgnoringOrientationLocks=_rawDeviceOrientationIgnoringOrientationLocks - In the implementation block
@property (nonatomic,readonly) id<SBFAuthenticationAssertionProviding> authenticationAssertionProvider;                //@synthesize authenticationAssertionProvider=_authenticationAssertionProvider - In the implementation block
@property (nonatomic,readonly) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                       //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,readonly) id<SBFPasscodeFieldChangeObserver> passcodeFieldChangeObserver;                         //@synthesize passcodeFieldChangeObserver=_passcodeFieldChangeObserver - In the implementation block
@property (nonatomic,readonly) id<SBFLockOutStatusProvider> lockOutStatusProvider;                                     //@synthesize lockOutStatusProvider=_lockOutStatusProvider - In the implementation block
@property (nonatomic,readonly) id<SBFDateProviding> dateProvider;                                                      //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) id<CSLegibilityProviding> legibilityProvider;                                           //@synthesize legibilityProvider=_legibilityProvider - In the implementation block
@property (nonatomic,readonly) id<CSPowerStatusProviding> powerStatusProvider;                                         //@synthesize powerStatusProvider=_powerStatusProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * powerStatusChangeNotificationName;                                      //@synthesize powerStatusChangeNotificationName=_powerStatusChangeNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryAttachedNotificationName;                                      //@synthesize accessoryAttachedNotificationName=_accessoryAttachedNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryDetachedNotificationName;                                      //@synthesize accessoryDetachedNotificationName=_accessoryDetachedNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryAnimationStatusChangedNotificationName;                        //@synthesize accessoryAnimationStatusChangedNotificationName=_accessoryAnimationStatusChangedNotificationName - In the implementation block
@property (nonatomic,readonly) id<CSAccessoryStatusProviding> accessoryStatusProvider;                                 //@synthesize accessoryStatusProvider=_accessoryStatusProvider - In the implementation block
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
@property (nonatomic,readonly) id<CSOverlayProviding> homeScreenOverlayProvider; 
@property (nonatomic,readonly) id<CSAppHostConfiguring> appHostConfiguring; 
@property (nonatomic,readonly) id<CSSystemPointerInteractionManaging> systemPointerInteractionManager; 
@property (nonatomic,readonly) id<CSProximitySensorProviding> proximitySensorProvider; 
@property (nonatomic,readonly) id<CSDeviceOrientationProviding> deviceOrientationProvider; 
-(void)logout;
-(id<CSUnlockRequesting>)unlockRequester;
-(id<CSUserSessionControlling>)userSessionController;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(NSString *)accessoryAnimationStatusChangedNotificationName;
-(id<CSNotificationPresenting>)notificationPresenter;
-(id<SBFActionProviding>)contentActionProvider;
-(id<CSHomeAffordanceControlling>)homeAffordanceController;
-(BOOL)isRestoring;
-(void)addProximitySensorProviderObserver:(id)arg1 ;
-(void)overlayController:(id)arg1 didChangePresentationProgress:(double)arg2 fromLeading:(BOOL)arg3 ;
-(id<CSApplicationInforming>)applicationInformer;
-(id<CSCarPlayStatusProviding>)carPlayStatusProvider;
-(id<CSScreenStateProviding>)screenStateProvider;
-(id)createUnlockRequestForActionContext:(id)arg1 ;
-(id)init;
-(BOOL)wantsHomeScreenOverlay;
-(id<CSAppHostConfiguring>)appHostConfiguring;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg1 ;
-(void)incrementIrisPlayCount;
-(id<CSPowerStatusProviding>)powerStatusProvider;
-(id<CSDeviceOrientationProviding>)deviceOrientationProvider;
-(void)overlayController:(id)arg1 visibilityDidChange:(BOOL)arg2 ;
-(BOOL)isEmergencyCallSupported;
-(void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<CSMediaControlling>)mediaController;
-(void)stopMediaPlaybackForSource:(long long)arg1 ;
-(id<SBFAuthenticationAssertionProviding>)authenticationAssertionProvider;
-(id<CSSystemPointerInteractionManaging>)systemPointerInteractionManager;
-(id<SBUIBiometricResource>)biometricResource;
-(BOOL)expectsPocketTouches;
-(long long)restoreState;
-(id<CSModalHomeAffordanceControlling>)modalHomeAffordanceController;
-(id<CSStatusBarControlling>)statusBarController;
-(id<CSThermalStatusProviding>)thermalStatusProvider;
-(BOOL)isObjectInProximity;
-(NSString *)accessoryDetachedNotificationName;
-(NSString *)powerStatusChangeNotificationName;
-(void)unlockWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProximitySensorProviderObserver:(id)arg1 ;
-(long long)rawDeviceOrientationIgnoringOrientationLocks;
-(long long)resetState;
-(BOOL)isCarPlayActiveForNotifications;
-(BOOL)isResetting;
-(BOOL)dismissModalContentIfVisibleAnimated:(BOOL)arg1 ;
-(id)createUnlockRequest;
-(id<SBFScreenWakeAnimationControlling>)screenWakeAnimationController;
-(NSArray *)dismissableOverlays;
-(id<CSWallpaperLogging>)wallpaperLogger;
-(id<CSTouchEnvironmentStatusProviding>)touchEnvironmentStatusProvider;
-(id<CSAccessoryStatusProviding>)accessoryStatusProvider;
-(id<SBFDateProviding>)dateProvider;
-(void)deactivateReachability;
-(void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id<CSProximitySensorProviding>)proximitySensorProvider;
-(id<CSLegibilityProviding>)legibilityProvider;
-(void)registerView:(id)arg1 delegate:(id)arg2 ;
-(id<CSTelephonyStatusProviding>)telephonyStatusProvider;
-(id)_todayViewControllerIfAvailable;
-(id)applicationHosterForBundleIdentifier:(id)arg1 ;
-(BOOL)isLogoutSupported;
-(id)newOverlayController;
-(NSString *)accessoryAttachedNotificationName;
-(void)proximitySensorManager:(id)arg1 crudeProximityDidChange:(BOOL)arg2 ;
-(id<CSAuthenticationManaging>)authenticationManager;
-(void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id<CSResetRestoreStatusProviding>)resetRestoreStatusProvider;
-(id<SBFPasscodeFieldChangeObserver>)passcodeFieldChangeObserver;
-(id<CSOverlayProviding>)homeScreenOverlayProvider;
-(id<SBFLockOutStatusProvider>)lockOutStatusProvider;
-(void)unregisterView:(id)arg1 ;
-(id<CSReachabilityControlling>)reachabilityController;
@end


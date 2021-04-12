/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString, NSArray;


@protocol CSCoverSheetContextProviding <NSObject>
@property (nonatomic,readonly) id<SBFAuthenticationAssertionProviding> authenticationAssertionProvider; 
@property (nonatomic,readonly) id<SBFAuthenticationStatusProvider> authenticationStatusProvider; 
@property (nonatomic,readonly) id<SBFPasscodeFieldChangeObserver> passcodeFieldChangeObserver; 
@property (nonatomic,readonly) id<SBFLockOutStatusProvider> lockOutStatusProvider; 
@property (nonatomic,readonly) id<SBFDateProviding> dateProvider; 
@property (nonatomic,readonly) id<CSLegibilityProviding> legibilityProvider; 
@property (nonatomic,readonly) id<CSPowerStatusProviding> powerStatusProvider; 
@property (nonatomic,copy,readonly) NSString * powerStatusChangeNotificationName; 
@property (nonatomic,readonly) id<CSResetRestoreStatusProviding> resetRestoreStatusProvider; 
@property (nonatomic,readonly) id<CSThermalStatusProviding> thermalStatusProvider; 
@property (nonatomic,readonly) id<SBUIBiometricResource> biometricResource; 
@property (nonatomic,copy,readonly) NSArray * dismissableOverlays; 
@property (nonatomic,readonly) id<CSScreenStateProviding> screenStateProvider; 
@property (nonatomic,readonly) id<SBFScreenWakeAnimationControlling> screenWakeAnimationController; 
@property (nonatomic,readonly) id<CSWallpaperViewProviding> wallpaperViewProvider; 
@property (nonatomic,readonly) id<CSTelephonyStatusProviding> telephonyStatusProvider; 
@property (nonatomic,readonly) id<CSAuthenticationManaging> authenticationManager; 
@property (nonatomic,readonly) id<CSHomeAffordanceControlling> homeAffordanceController; 
@property (nonatomic,readonly) id<CSModalHomeAffordanceControlling> modalHomeAffordanceController; 
@property (nonatomic,readonly) id<CSStatusBarControlling> statusBarController; 
@property (nonatomic,readonly) id<CSMediaControlling> mediaController; 
@property (nonatomic,readonly) id<CSUnlockRequesting> unlockRequester; 
@property (nonatomic,readonly) id<CSWallpaperLogging> wallpaperLogger; 
@property (nonatomic,readonly) id<SBFActionProviding> contentActionProvider; 
@property (nonatomic,readonly) id<CSApplicationInforming> applicationInformer; 
@property (nonatomic,readonly) id<CSNotificationPresenting> notificationPresenter; 
@property (nonatomic,readonly) id<CSTouchEnvironmentStatusProviding> touchEnvironmentStatusProvider; 
@property (nonatomic,readonly) id<CSUserSessionControlling> userSessionController; 
@property (nonatomic,readonly) id<CSReachabilityControlling> reachabilityController; 
@property (nonatomic,readonly) id<CSCarPlayStatusProviding> carPlayStatusProvider; 
@property (nonatomic,readonly) id<CSTodayOverlayProviding> todayOverlayProvider; 
@property (nonatomic,readonly) id<CSSystemCursorInteractionManaging> systemCursorInterationManager; 
@required
-(id<CSMediaControlling>)mediaController;
-(id<SBFDateProviding>)dateProvider;
-(id<SBUIBiometricResource>)biometricResource;
-(id<CSSystemCursorInteractionManaging>)systemCursorInterationManager;
-(id<CSUserSessionControlling>)userSessionController;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(id<CSHomeAffordanceControlling>)homeAffordanceController;
-(id<CSTouchEnvironmentStatusProviding>)touchEnvironmentStatusProvider;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(id<CSPowerStatusProviding>)powerStatusProvider;
-(NSString *)powerStatusChangeNotificationName;
-(id<CSCarPlayStatusProviding>)carPlayStatusProvider;
-(id<CSLegibilityProviding>)legibilityProvider;
-(id<SBFLockOutStatusProvider>)lockOutStatusProvider;
-(id<SBFScreenWakeAnimationControlling>)screenWakeAnimationController;
-(id<CSTodayOverlayProviding>)todayOverlayProvider;
-(id<CSStatusBarControlling>)statusBarController;
-(id<CSUnlockRequesting>)unlockRequester;
-(id<CSReachabilityControlling>)reachabilityController;
-(id<CSWallpaperLogging>)wallpaperLogger;
-(id<CSApplicationInforming>)applicationInformer;
-(id<SBFActionProviding>)contentActionProvider;
-(id<CSNotificationPresenting>)notificationPresenter;
-(id<CSModalHomeAffordanceControlling>)modalHomeAffordanceController;
-(id<CSScreenStateProviding>)screenStateProvider;
-(id<CSThermalStatusProviding>)thermalStatusProvider;
-(id<CSResetRestoreStatusProviding>)resetRestoreStatusProvider;
-(NSArray *)dismissableOverlays;
-(id<CSAuthenticationManaging>)authenticationManager;
-(id<CSTelephonyStatusProviding>)telephonyStatusProvider;
-(id<SBFPasscodeFieldChangeObserver>)passcodeFieldChangeObserver;
-(id<SBFAuthenticationAssertionProviding>)authenticationAssertionProvider;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * accessoryAttachedNotificationName; 
@property (nonatomic,copy,readonly) NSString * accessoryDetachedNotificationName; 
@property (nonatomic,copy,readonly) NSString * accessoryAnimationStatusChangedNotificationName; 
@property (nonatomic,readonly) id<CSAccessoryStatusProviding> accessoryStatusProvider; 
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
@property (nonatomic,readonly) id<CSOverlayProviding> homeScreenOverlayProvider; 
@property (nonatomic,readonly) id<CSAppHostConfiguring> appHostConfiguring; 
@property (nonatomic,readonly) id<CSSystemPointerInteractionManaging> systemPointerInteractionManager; 
@property (nonatomic,readonly) id<CSProximitySensorProviding> proximitySensorProvider; 
@property (nonatomic,readonly) id<CSDeviceOrientationProviding> deviceOrientationProvider; 
@required
-(id<CSUnlockRequesting>)unlockRequester;
-(id<CSUserSessionControlling>)userSessionController;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(NSString *)accessoryAnimationStatusChangedNotificationName;
-(id<CSNotificationPresenting>)notificationPresenter;
-(id<SBFActionProviding>)contentActionProvider;
-(id<CSHomeAffordanceControlling>)homeAffordanceController;
-(id<CSApplicationInforming>)applicationInformer;
-(id<CSCarPlayStatusProviding>)carPlayStatusProvider;
-(id<CSScreenStateProviding>)screenStateProvider;
-(id<CSAppHostConfiguring>)appHostConfiguring;
-(id<CSPowerStatusProviding>)powerStatusProvider;
-(id<CSDeviceOrientationProviding>)deviceOrientationProvider;
-(id<CSMediaControlling>)mediaController;
-(id<SBFAuthenticationAssertionProviding>)authenticationAssertionProvider;
-(id<CSSystemPointerInteractionManaging>)systemPointerInteractionManager;
-(id<SBUIBiometricResource>)biometricResource;
-(id<CSModalHomeAffordanceControlling>)modalHomeAffordanceController;
-(id<CSStatusBarControlling>)statusBarController;
-(id<CSThermalStatusProviding>)thermalStatusProvider;
-(NSString *)accessoryDetachedNotificationName;
-(NSString *)powerStatusChangeNotificationName;
-(id<SBFScreenWakeAnimationControlling>)screenWakeAnimationController;
-(NSArray *)dismissableOverlays;
-(id<CSWallpaperLogging>)wallpaperLogger;
-(id<CSTouchEnvironmentStatusProviding>)touchEnvironmentStatusProvider;
-(id<CSAccessoryStatusProviding>)accessoryStatusProvider;
-(id<SBFDateProviding>)dateProvider;
-(id<CSProximitySensorProviding>)proximitySensorProvider;
-(id<CSLegibilityProviding>)legibilityProvider;
-(id<CSTelephonyStatusProviding>)telephonyStatusProvider;
-(NSString *)accessoryAttachedNotificationName;
-(id<CSAuthenticationManaging>)authenticationManager;
-(id<CSResetRestoreStatusProviding>)resetRestoreStatusProvider;
-(id<SBFPasscodeFieldChangeObserver>)passcodeFieldChangeObserver;
-(id<CSOverlayProviding>)homeScreenOverlayProvider;
-(id<SBFLockOutStatusProvider>)lockOutStatusProvider;
-(id<CSReachabilityControlling>)reachabilityController;

@end


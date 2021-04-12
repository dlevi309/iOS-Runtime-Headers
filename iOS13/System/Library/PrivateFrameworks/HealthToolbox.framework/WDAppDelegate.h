/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/HKProfileIconObserver.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, WDProfile, HKNavigationController, WDTabBarController, WDHealthDataViewController, NSString;

@interface WDAppDelegate : UIResponder <HKProfileIconObserver, WDFavoriteDisplayTypesControllerObserver, UIApplicationDelegate> {

	WDProfile* _profile;
	HKNavigationController* _profileNavigationController;
	HKNavigationController* _medicalIDNavigationController;
	HKNavigationController* _sourcesNavigationController;
	WDTabBarController* _tabBarController;
	WDHealthDataViewController* _healthDataViewController;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) WDProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDelegate;
-(WDProfile *)profile;
-(UIWindow *)window;
-(id)tabBarController;
-(void)setWindow:(UIWindow *)arg1 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)_postAWDOnboardingMetricForType:(int)arg1 ;
-(void)presentProfileViewController;
-(void)_buildUIWithProfile:(id)arg1 ;
-(void)restoreStoreDemoModeFavoritesIfNeeded;
-(void)_configureNotificationPolicies;
-(void)_configureUserActivityPolicies;
-(BOOL)_openURL:(id)arg1 options:(id)arg2 ;
-(BOOL)_restoreApplicationStateWithOnboardingUserActivity:(id)arg1 ;
-(void)_restoreApplicationStateWithUserActivity:(id)arg1 ;
-(void)_restoreToBaseStateAndSelectTabAtIndex:(long long)arg1 ;
-(void)resetStoreDemoModeFavorites;
-(id)_storeDemoModeFavoriteDisplayTypes;
-(void)didTapProfileIcon;
-(void)openHealthAppURL:(id)arg1 ;
-(void)_postAWDMetricForFinishedAddingAccount;
-(void)_postAWDMetricForUsingDeepLink;
@end


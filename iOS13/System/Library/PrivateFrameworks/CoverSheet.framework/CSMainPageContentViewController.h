/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSPageViewController.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/CSCombinedListViewControllerDelegate.h>
#import <libobjc.A.dylib/CSUserPresenceMonitorObserver.h>
#import <libobjc.A.dylib/CSNotificationDestination.h>
#import <libobjc.A.dylib/CSPageViewControllerProtocol.h>

@protocol SBFAuthenticationStatusProvider, CSWallpaperColorProvider, CSTouchEnvironmentStatusProviding, CSUserSessionControlling, CSWallpaperViewProviding;
@class CSLayoutStrategy, NSString, CSUserPictureViewController, CSCombinedListViewController, CSUserPresenceMonitor, CSLogoutButtonViewController, CSLockScreenSettings, NSSet, _UILegibilitySettings, UIColor, NSArray, CSAppearance, CSBehavior, CSPresentation;

@interface CSMainPageContentViewController : CSPageViewController <PTSettingsKeyObserver, CSCombinedListViewControllerDelegate, CSUserPresenceMonitorObserver, CSNotificationDestination, CSPageViewControllerProtocol> {

	CSUserPictureViewController* _userPictureViewController;
	CSCombinedListViewController* _combinedListViewController;
	CSUserPresenceMonitor* _userPresenceMontior;
	CSLogoutButtonViewController* _logoutButtonViewController;
	id<SBFAuthenticationStatusProvider> _authenticationProvider;
	CSLockScreenSettings* _testSettings;
	long long _smoothestPermittedStrategy;
	BOOL _useFakeBlur;
	CSLayoutStrategy* _layoutStrategy;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;
	CSUserPresenceMonitor* _userPresenceMonitor;
	id<CSTouchEnvironmentStatusProviding> _touchEnvironmentStatusProvider;
	id<CSUserSessionControlling> _userSessionController;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;

}

@property (assign,nonatomic) BOOL useFakeBlur;                                                                         //@synthesize useFakeBlur=_useFakeBlur - In the implementation block
@property (getter=isShowingMediaControls,nonatomic,readonly) BOOL showingMediaControls; 
@property (nonatomic,readonly) CSCombinedListViewController * combinedListViewController;                              //@synthesize combinedListViewController=_combinedListViewController - In the implementation block
@property (nonatomic,retain) CSUserPresenceMonitor * userPresenceMonitor;                                              //@synthesize userPresenceMonitor=_userPresenceMonitor - In the implementation block
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                        //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (assign,nonatomic,__weak) id<CSTouchEnvironmentStatusProviding> touchEnvironmentStatusProvider;              //@synthesize touchEnvironmentStatusProvider=_touchEnvironmentStatusProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSUserSessionControlling> userSessionController;                                //@synthesize userSessionController=_userSessionController - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;                               //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperViewProviding> wallpaperViewProvider;                                //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewPresenting> presenter; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerProtocol> coverSheetViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
@property (nonatomic,copy,readonly) NSString * pageRole; 
+(Class)viewClass;
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
+(double)_phoneListWidth;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)handleEvent:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)_isPortrait;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id<CSNotificationDispatcher>)arg1 ;
-(void)updateForPresentation:(id)arg1 ;
-(unsigned long long)listLayout;
-(unsigned long long)listWidthStrategy;
-(double)listInsetX;
-(double)customListWidth;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)setWallpaperViewProvider:(id<CSWallpaperViewProviding>)arg1 ;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSUserSessionControlling>)userSessionController;
-(void)setUserSessionController:(id<CSUserSessionControlling>)arg1 ;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(BOOL)isShowingMediaControls;
-(void)_updateSmoothestPermittedPagingStrategy;
-(void)_addOrRemoveViewsAsAppropriate;
-(id)_mainPageView;
-(void)postNotificationRequest:(id)arg1 ;
-(void)updateNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(void)_addOrRemoveNotificationsListIfNecessaryAnimated:(BOOL)arg1 ;
-(BOOL)_pagingStyleRequiresUserPresenceDetection;
-(BOOL)_listBelowDateTime;
-(void)_addOrRemoveUserPictureViewController;
-(void)_addOrRemoveLogoutButtonViewController;
-(void)combinedListViewController:(id)arg1 hasContent:(BOOL)arg2 ;
-(id)notificationSectionSettingsForCombinedListViewController:(id)arg1 ;
-(void)userPresenceDetectedSinceWakeDidChange:(id)arg1 ;
-(unsigned long long)dateTimeLayout;
-(double)dateTimeInsetX;
-(double)minimumDateToListSpacing;
-(id)initWithAuthenticationProvider:(id)arg1 ;
-(void)setUserPresenceMonitor:(CSUserPresenceMonitor *)arg1 ;
-(void)setUseFakeBlur:(BOOL)arg1 ;
-(CSCombinedListViewController *)combinedListViewController;
-(BOOL)useFakeBlur;
-(CSUserPresenceMonitor *)userPresenceMonitor;
-(id<CSTouchEnvironmentStatusProviding>)touchEnvironmentStatusProvider;
-(void)setTouchEnvironmentStatusProvider:(id<CSTouchEnvironmentStatusProviding>)arg1 ;
@end


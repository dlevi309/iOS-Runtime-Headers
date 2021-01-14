/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/_UIApplicationInfo.h>

@class NSString, NSArray, CRCarPlayAppDeclaration, NSSet, NSURL, NSUserDefaults, XBSnapshotContainerIdentity;

@interface SBApplicationInfo : _UIApplicationInfo {

	NSString* _applicationShortcutWidgetBundleIdentifier;
	NSArray* _staticApplicationShortcutItems;
	NSString* _displayName;
	Class _iconClass;
	CRCarPlayAppDeclaration* _carPlayDeclaration;
	NSArray* _domainsToPreheat;
	NSArray* _launchImageInfo;
	NSString* _launchInterfaceFileName;
	NSSet* _urlSchemes;
	NSSet* _supportedContentTypes;
	NSURL* _restorationArchiveContainerURL;
	NSURL* _dataContainerURLOverride;
	NSUserDefaults* _lazy_userDefaults;
	NSString* _installInstanceID;
	unsigned long long _applicationSizeInBytes;
	unsigned long long _dynamicApplicationShortcutItemsVersion;
	unsigned long long _visibilityOverride;
	long long _defaultStatusBarStyle;
	unsigned long long _uninstallCapability;
	unsigned long long _voipClass;
	long long _whitePointAdaptivityStyle;
	unsigned long long _allowedNKNotificationsPerDay;
	long long _forcedUserInterfaceStyle;
	int _networkUsageTypes;
	unsigned long long _supportedTypes;
	int _ignoredStatusBarStyleOverrides;
	BOOL _isLaunchableDuringSetup;
	BOOL _usesSplashBoard;
	BOOL _disablesClassicMode;
	BOOL _representsWebApplication;
	BOOL _isOkemoLinked;
	BOOL _isMonarchLinked;
	BOOL _isTigrisLinked;
	BOOL _isPeaceLinked;
	BOOL _isPeaceBLinked;
	BOOL _isYukonLinked;
	BOOL _isYukonELinked;
	BOOL _isAzulLinked;
	BOOL _isAzulBLinked;
	BOOL _isAzulHWLinked;
	BOOL _prefersSavedSnapshots;
	BOOL _wantsLaunchWithoutPNG;
	BOOL _wantsFullScreen;
	BOOL _isGameCenterEnabled;
	BOOL _wasGameCenterEverEnabled;
	BOOL _statusBarIsLegacy;
	BOOL _preventsLaunchInterfaceSplitting;
	BOOL _requiresHiDPI;
	BOOL _alwaysLaunchesSuspended;
	BOOL _systemAppSupportsLocalNotifications;
	BOOL _disallowsNotificationCenter;
	BOOL _disallowsControlCenter;
	BOOL _staticApplicationShortcutItemsHaveBeenLocalized;
	BOOL _hasHiddenTag;
	BOOL _usesRLNDataProvider;
	BOOL _shouldSkipCrossfadeToLive;
	BOOL _supports64Bit;
	BOOL _supportsMultiwindow;
	BOOL _isNewsstand;
	BOOL _canChangeBackgroundStyle;
	BOOL _allowNonDefaultBackgroundStyle;
	BOOL _supportsDirectToAirplay;
	BOOL _alwaysReceivesOpenURLSource;
	BOOL _alwaysDeliversOpenURLActionsUsingWorkspace;
	BOOL _arcadeApplication;
	BOOL _appClip;
	BOOL _shouldLaunchWithLiveContentASAP;
	BOOL _cloudDemoted;
	BOOL _wantsExclusiveForeground;
	NSURL* _documentInboxURL;
	NSArray* _iTunesCategoriesOrderedByRelevancy;
	XBSnapshotContainerIdentity* _manifestContainerIdentity;
	NSString* _vendorName;

}

@property (nonatomic,readonly) BOOL supportsDirectToAirplayOrIsAllowListed; 
@property (getter=isSystemApplication,nonatomic,readonly) BOOL systemApplication; 
@property (getter=isInternalApplication,nonatomic,readonly) BOOL internalApplication; 
@property (getter=isAppleApplication,nonatomic,readonly) BOOL appleApplication; 
@property (getter=isArcadeApplication,nonatomic,readonly) BOOL arcadeApplication;                      //@synthesize arcadeApplication=_arcadeApplication - In the implementation block
@property (getter=isAppClip,nonatomic,readonly) BOOL appClip;                                          //@synthesize appClip=_appClip - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                            //@synthesize displayName=_displayName - In the implementation block
@property (getter=isMonarchLinked,nonatomic,readonly) BOOL monarchLinked;                              //@synthesize isMonarchLinked=_isMonarchLinked - In the implementation block
@property (getter=isTigrisLinked,nonatomic,readonly) BOOL tigrisLinked;                                //@synthesize isTigrisLinked=_isTigrisLinked - In the implementation block
@property (getter=isPeaceLinked,nonatomic,readonly) BOOL peaceLinked;                                  //@synthesize isPeaceLinked=_isPeaceLinked - In the implementation block
@property (getter=isPeaceBLinked,nonatomic,readonly) BOOL peaceBLinked;                                //@synthesize isPeaceBLinked=_isPeaceBLinked - In the implementation block
@property (getter=isYukonLinked,nonatomic,readonly) BOOL yukonLinked;                                  //@synthesize isYukonLinked=_isYukonLinked - In the implementation block
@property (getter=isYukonELinked,nonatomic,readonly) BOOL yukonELinked;                                //@synthesize isYukonELinked=_isYukonELinked - In the implementation block
@property (getter=isAzulLinked,nonatomic,readonly) BOOL azulLinked;                                    //@synthesize isAzulLinked=_isAzulLinked - In the implementation block
@property (getter=isAzulBLinked,nonatomic,readonly) BOOL azulBLinked;                                  //@synthesize isAzulBLinked=_isAzulBLinked - In the implementation block
@property (getter=isAzulHWLinked,nonatomic,readonly) BOOL azulHWLinked;                                //@synthesize isAzulHWLinked=_isAzulHWLinked - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedTypes;                                      //@synthesize supportedTypes=_supportedTypes - In the implementation block
@property (nonatomic,readonly) NSSet * urlSchemes;                                                     //@synthesize urlSchemes=_urlSchemes - In the implementation block
@property (nonatomic,readonly) NSURL * restorationArchiveContainerURL;                                 //@synthesize restorationArchiveContainerURL=_restorationArchiveContainerURL - In the implementation block
@property (nonatomic,readonly) NSString * installInstanceID;                                           //@synthesize installInstanceID=_installInstanceID - In the implementation block
@property (nonatomic,readonly) BOOL representsWebApplication;                                          //@synthesize representsWebApplication=_representsWebApplication - In the implementation block
@property (nonatomic,readonly) BOOL supports64Bit;                                                     //@synthesize supports64Bit=_supports64Bit - In the implementation block
@property (nonatomic,readonly) BOOL supportsMultiwindow;                                               //@synthesize supportsMultiwindow=_supportsMultiwindow - In the implementation block
@property (getter=isNewsstand,nonatomic,readonly) BOOL newsstand;                                      //@synthesize isNewsstand=_isNewsstand - In the implementation block
@property (nonatomic,readonly) unsigned long long applicationSizeInBytes;                              //@synthesize applicationSizeInBytes=_applicationSizeInBytes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iTunesCategoriesOrderedByRelevancy;                      //@synthesize iTunesCategoriesOrderedByRelevancy=_iTunesCategoriesOrderedByRelevancy - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityOverride;                                  //@synthesize visibilityOverride=_visibilityOverride - In the implementation block
@property (nonatomic,readonly) BOOL hasHiddenTag;                                                      //@synthesize hasHiddenTag=_hasHiddenTag - In the implementation block
@property (nonatomic,readonly) BOOL usesRLNDataProvider;                                               //@synthesize usesRLNDataProvider=_usesRLNDataProvider - In the implementation block
@property (nonatomic,readonly) BOOL systemAppSupportsLocalNotifications;                               //@synthesize systemAppSupportsLocalNotifications=_systemAppSupportsLocalNotifications - In the implementation block
@property (nonatomic,readonly) BOOL suppressUserNotificationPermissionAlert; 
@property (nonatomic,readonly) unsigned long long allowedNKNotificationsPerDay;                        //@synthesize allowedNKNotificationsPerDay=_allowedNKNotificationsPerDay - In the implementation block
@property (getter=isStatusBarLegacy,nonatomic,readonly) BOOL statusBarIsLegacy;                        //@synthesize statusBarIsLegacy=_statusBarIsLegacy - In the implementation block
@property (nonatomic,readonly) long long defaultStatusBarStyle;                                        //@synthesize defaultStatusBarStyle=_defaultStatusBarStyle - In the implementation block
@property (nonatomic,readonly) int ignoredStatusBarStyleOverrides;                                     //@synthesize ignoredStatusBarStyleOverrides=_ignoredStatusBarStyleOverrides - In the implementation block
@property (nonatomic,readonly) BOOL shouldLaunchSuspendedAlways;                                       //@synthesize alwaysLaunchesSuspended=_alwaysLaunchesSuspended - In the implementation block
@property (nonatomic,readonly) NSArray * domainsToPreheat;                                             //@synthesize domainsToPreheat=_domainsToPreheat - In the implementation block
@property (getter=isLaunchableDuringSetup,nonatomic,readonly) BOOL launchableDuringSetup;              //@synthesize isLaunchableDuringSetup=_isLaunchableDuringSetup - In the implementation block
@property (nonatomic,readonly) BOOL shouldLaunchWithLiveContentASAP;                                   //@synthesize shouldLaunchWithLiveContentASAP=_shouldLaunchWithLiveContentASAP - In the implementation block
@property (nonatomic,readonly) XBSnapshotContainerIdentity * manifestContainerIdentity;                //@synthesize manifestContainerIdentity=_manifestContainerIdentity - In the implementation block
@property (nonatomic,readonly) BOOL usesSplashBoard;                                                   //@synthesize usesSplashBoard=_usesSplashBoard - In the implementation block
@property (nonatomic,readonly) BOOL wantsLaunchWithoutPNG;                                             //@synthesize wantsLaunchWithoutPNG=_wantsLaunchWithoutPNG - In the implementation block
@property (nonatomic,readonly) BOOL wantsFullScreen;                                                   //@synthesize wantsFullScreen=_wantsFullScreen - In the implementation block
@property (nonatomic,readonly) BOOL prefersSavedSnapshots;                                             //@synthesize prefersSavedSnapshots=_prefersSavedSnapshots - In the implementation block
@property (nonatomic,readonly) BOOL preventsLaunchInterfaceSplitting;                                  //@synthesize preventsLaunchInterfaceSplitting=_preventsLaunchInterfaceSplitting - In the implementation block
@property (nonatomic,readonly) BOOL disablesClassicMode;                                               //@synthesize disablesClassicMode=_disablesClassicMode - In the implementation block
@property (nonatomic,readonly) NSString * launchInterfaceFileName;                                     //@synthesize launchInterfaceFileName=_launchInterfaceFileName - In the implementation block
@property (nonatomic,readonly) NSArray * launchImageInfo;                                              //@synthesize launchImageInfo=_launchImageInfo - In the implementation block
@property (nonatomic,readonly) long long whitePointAdaptivityStyle;                                    //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (nonatomic,readonly) BOOL requiresHiDPI;                                                     //@synthesize requiresHiDPI=_requiresHiDPI - In the implementation block
@property (nonatomic,readonly) BOOL disallowsNotificationCenter;                                       //@synthesize disallowsNotificationCenter=_disallowsNotificationCenter - In the implementation block
@property (nonatomic,readonly) BOOL disallowsControlCenter;                                            //@synthesize disallowsControlCenter=_disallowsControlCenter - In the implementation block
@property (nonatomic,readonly) Class iconClass;                                                        //@synthesize iconClass=_iconClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationShortcutWidgetBundleIdentifier;              //@synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * staticApplicationShortcutItems; 
@property (nonatomic,readonly) unsigned long long dynamicApplicationShortcutItemsVersion;              //@synthesize dynamicApplicationShortcutItemsVersion=_dynamicApplicationShortcutItemsVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long uninstallCapability;                                 //@synthesize uninstallCapability=_uninstallCapability - In the implementation block
@property (nonatomic,readonly) int networkUsageTypes;                                                  //@synthesize networkUsageTypes=_networkUsageTypes - In the implementation block
@property (nonatomic,readonly) unsigned long long voipClass;                                           //@synthesize voipClass=_voipClass - In the implementation block
@property (nonatomic,readonly) BOOL supportsLegacyVOIPBackgroundMode; 
@property (nonatomic,readonly) BOOL supportsAudioBackgroundMode; 
@property (nonatomic,readonly) BOOL supportsFetchBackgroundMode; 
@property (nonatomic,readonly) BOOL supportsRemoteNotificationBackgroundMode; 
@property (nonatomic,readonly) BOOL supportsNewsstandContentBackgroundMode; 
@property (nonatomic,readonly) CRCarPlayAppDeclaration * carPlayDeclaration;                           //@synthesize carPlayDeclaration=_carPlayDeclaration - In the implementation block
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled;                      //@synthesize isGameCenterEnabled=_isGameCenterEnabled - In the implementation block
@property (nonatomic,readonly) BOOL wasGameCenterEverEnabled;                                          //@synthesize wasGameCenterEverEnabled=_wasGameCenterEverEnabled - In the implementation block
@property (getter=isCloudDemoted,nonatomic,readonly) BOOL cloudDemoted;                                //@synthesize cloudDemoted=_cloudDemoted - In the implementation block
@property (nonatomic,readonly) BOOL wantsExclusiveForeground;                                          //@synthesize wantsExclusiveForeground=_wantsExclusiveForeground - In the implementation block
@property (nonatomic,readonly) BOOL shouldSkipCrossfadeToLive;                                         //@synthesize shouldSkipCrossfadeToLive=_shouldSkipCrossfadeToLive - In the implementation block
@property (nonatomic,readonly) NSURL * documentInboxURL;                                               //@synthesize documentInboxURL=_documentInboxURL - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults; 
@property (nonatomic,readonly) BOOL supportsDirectToAirplay;                                           //@synthesize supportsDirectToAirplay=_supportsDirectToAirplay - In the implementation block
@property (nonatomic,readonly) BOOL alwaysReceivesOpenURLSource;                                       //@synthesize alwaysReceivesOpenURLSource=_alwaysReceivesOpenURLSource - In the implementation block
@property (nonatomic,readonly) BOOL alwaysDeliversOpenURLActionsUsingWorkspace;                        //@synthesize alwaysDeliversOpenURLActionsUsingWorkspace=_alwaysDeliversOpenURLActionsUsingWorkspace - In the implementation block
@property (nonatomic,copy,readonly) NSString * vendorName;                                             //@synthesize vendorName=_vendorName - In the implementation block
+(id)_directToAirPlayBundleIDs;
-(BOOL)isSystemApplication;
-(Class)iconClass;
-(NSArray *)staticApplicationShortcutItems;
-(BOOL)wasGameCenterEverEnabled;
-(NSSet *)urlSchemes;
-(BOOL)isInternalApplication;
-(BOOL)supportsNewsstandContentBackgroundMode;
-(id)dataContainerURL;
-(NSString *)vendorName;
-(unsigned long long)supportedTypes;
-(BOOL)isAppClip;
-(BOOL)disallowsControlCenter;
-(NSArray *)iTunesCategoriesOrderedByRelevancy;
-(BOOL)systemAppSupportsLocalNotifications;
-(NSString *)installInstanceID;
-(BOOL)supportsLegacyVOIPBackgroundMode;
-(int)networkUsageTypes;
-(BOOL)isYukonLinked;
-(BOOL)wantsLaunchWithoutPNG;
-(NSURL *)restorationArchiveContainerURL;
-(unsigned long long)uninstallCapability;
-(long long)backgroundStyle;
-(BOOL)canChangeBackgroundStyle;
-(BOOL)isPeaceLinked;
-(BOOL)alwaysReceivesOpenURLSource;
-(BOOL)suppressUserNotificationPermissionAlert;
-(NSURL *)documentInboxURL;
-(NSString *)applicationShortcutWidgetBundleIdentifier;
-(BOOL)supports64Bit;
-(unsigned long long)voipClass;
-(BOOL)supportsMultiwindow;
-(BOOL)supportsAudioBackgroundMode;
-(BOOL)isLaunchableDuringSetup;
-(BOOL)isAppleApplication;
-(NSUserDefaults *)userDefaults;
-(BOOL)isGameCenterEnabled;
-(void)_loadFromProxy:(id)arg1 ;
-(BOOL)isAzulBLinked;
-(BOOL)usesSplashBoard;
-(BOOL)supportsDirectToAirplayOrIsAllowListed;
-(long long)backgroundStyleForRequestedBackgroundStyle:(long long)arg1 ;
-(BOOL)isMonarchLinked;
-(BOOL)shouldLaunchSuspendedAlways;
-(BOOL)usesRLNDataProvider;
-(BOOL)supportsDirectToAirplay;
-(unsigned long long)applicationSizeInBytes;
-(NSArray *)domainsToPreheat;
-(BOOL)disallowsNotificationCenter;
-(BOOL)isAzulLinked;
-(unsigned long long)allowedNKNotificationsPerDay;
-(BOOL)isTigrisLinked;
-(long long)whitePointAdaptivityStyle;
-(BOOL)isPeaceBLinked;
-(BOOL)statusBarHiddenWhenVerticallyCompact;
-(BOOL)shouldSkipCrossfadeToLive;
-(BOOL)isYukonELinked;
-(BOOL)isArcadeApplication;
-(BOOL)supportsRemoteNotificationBackgroundMode;
-(BOOL)shouldLaunchWithLiveContentASAP;
-(int)ignoredStatusBarStyleOverrides;
-(unsigned long long)dynamicApplicationShortcutItemsVersion;
-(BOOL)supportsFetchBackgroundMode;
-(long long)defaultStatusBarStyle;
-(NSArray *)launchImageInfo;
-(BOOL)alwaysDeliversOpenURLActionsUsingWorkspace;
-(BOOL)hasHiddenTag;
-(BOOL)isNewsstand;
-(XBSnapshotContainerIdentity *)manifestContainerIdentity;
-(BOOL)wantsFullScreen;
-(BOOL)representsWebApplication;
-(BOOL)requiresHiDPI;
-(BOOL)preventsLaunchInterfaceSplitting;
-(BOOL)isAzulHWLinked;
-(BOOL)isCloudDemoted;
-(BOOL)isStatusBarLegacy;
-(CRCarPlayAppDeclaration *)carPlayDeclaration;
-(unsigned long long)visibilityOverride;
-(NSString *)displayName;
-(NSString *)launchInterfaceFileName;
-(BOOL)disablesClassicMode;
-(BOOL)prefersSavedSnapshots;
-(BOOL)wantsExclusiveForeground;
@end


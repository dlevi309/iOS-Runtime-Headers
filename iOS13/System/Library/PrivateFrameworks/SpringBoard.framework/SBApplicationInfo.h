/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _iconMasqueradeIdentifier;
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
	int _supportedTypes;
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
	BOOL _isNewsstand;
	BOOL _canChangeBackgroundStyle;
	BOOL _allowNonDefaultBackgroundStyle;
	BOOL _supportsDirectToAirplay;
	BOOL _alwaysReceivesOpenURLSource;
	BOOL _ocelotApplication;
	BOOL _shouldLaunchWithLiveContentASAP;
	BOOL _cloudDemoted;
	BOOL _wantsExclusiveForeground;
	NSURL* _documentInboxURL;
	XBSnapshotContainerIdentity* _manifestContainerIdentity;

}

@property (nonatomic,readonly) BOOL supportsDirectToAirplayOrIsWhitelisted; 
@property (getter=isSystemApplication,nonatomic,readonly) BOOL systemApplication; 
@property (getter=isInternalApplication,nonatomic,readonly) BOOL internalApplication; 
@property (getter=isAppleApplication,nonatomic,readonly) BOOL appleApplication; 
@property (getter=isOcelotApplication,nonatomic,readonly) BOOL ocelotApplication;                      //@synthesize ocelotApplication=_ocelotApplication - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                            //@synthesize displayName=_displayName - In the implementation block
@property (getter=isMonarchLinked,nonatomic,readonly) BOOL monarchLinked;                              //@synthesize isMonarchLinked=_isMonarchLinked - In the implementation block
@property (getter=isTigrisLinked,nonatomic,readonly) BOOL tigrisLinked;                                //@synthesize isTigrisLinked=_isTigrisLinked - In the implementation block
@property (getter=isPeaceLinked,nonatomic,readonly) BOOL peaceLinked;                                  //@synthesize isPeaceLinked=_isPeaceLinked - In the implementation block
@property (getter=isPeaceBLinked,nonatomic,readonly) BOOL peaceBLinked;                                //@synthesize isPeaceBLinked=_isPeaceBLinked - In the implementation block
@property (getter=isYukonLinked,nonatomic,readonly) BOOL yukonLinked;                                  //@synthesize isYukonLinked=_isYukonLinked - In the implementation block
@property (getter=isYukonELinked,nonatomic,readonly) BOOL yukonELinked;                                //@synthesize isYukonELinked=_isYukonELinked - In the implementation block
@property (nonatomic,readonly) int supportedTypes;                                                     //@synthesize supportedTypes=_supportedTypes - In the implementation block
@property (nonatomic,readonly) NSSet * urlSchemes;                                                     //@synthesize urlSchemes=_urlSchemes - In the implementation block
@property (nonatomic,readonly) NSURL * restorationArchiveContainerURL;                                 //@synthesize restorationArchiveContainerURL=_restorationArchiveContainerURL - In the implementation block
@property (nonatomic,readonly) NSString * installInstanceID;                                           //@synthesize installInstanceID=_installInstanceID - In the implementation block
@property (nonatomic,readonly) BOOL representsWebApplication;                                          //@synthesize representsWebApplication=_representsWebApplication - In the implementation block
@property (nonatomic,readonly) BOOL supports64Bit;                                                     //@synthesize supports64Bit=_supports64Bit - In the implementation block
@property (getter=isNewsstand,nonatomic,readonly) BOOL newsstand;                                      //@synthesize isNewsstand=_isNewsstand - In the implementation block
@property (nonatomic,readonly) unsigned long long applicationSizeInBytes;                              //@synthesize applicationSizeInBytes=_applicationSizeInBytes - In the implementation block
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
@property (nonatomic,copy,readonly) NSString * iconMasqueradeIdentifier;                               //@synthesize iconMasqueradeIdentifier=_iconMasqueradeIdentifier - In the implementation block
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
+(unsigned long long)_visibilityOverrideFromInfo:(id)arg1 entitlements:(id)arg2 ;
+(int)_calculateApplicationSupportedTypesFromProxy:(id)arg1 ;
-(NSString *)displayName;
-(BOOL)isGameCenterEnabled;
-(id)dataContainerURL;
-(NSUserDefaults *)userDefaults;
-(BOOL)isSystemApplication;
-(long long)whitePointAdaptivityStyle;
-(void)_loadFromProxy:(id)arg1 ;
-(BOOL)canChangeBackgroundStyle;
-(long long)backgroundStyle;
-(BOOL)statusBarHiddenWhenVerticallyCompact;
-(long long)defaultStatusBarStyle;
-(BOOL)wantsExclusiveForeground;
-(NSArray *)staticApplicationShortcutItems;
-(int)supportedTypes;
-(BOOL)isNewsstand;
-(NSString *)applicationShortcutWidgetBundleIdentifier;
-(BOOL)isCloudDemoted;
-(Class)iconClass;
-(NSSet *)urlSchemes;
-(BOOL)isAppleApplication;
-(BOOL)isInternalApplication;
-(BOOL)wantsFullScreen;
-(BOOL)usesSplashBoard;
-(BOOL)requiresHiDPI;
-(BOOL)_supportsApplicationType:(int)arg1 ;
-(BOOL)isPeaceBLinked;
-(BOOL)disablesClassicMode;
-(BOOL)isMonarchLinked;
-(BOOL)isTigrisLinked;
-(BOOL)isYukonLinked;
-(BOOL)isPeaceLinked;
-(BOOL)isYukonELinked;
-(BOOL)supportsAudioBackgroundMode;
-(unsigned long long)voipClass;
-(BOOL)hasHiddenTag;
-(BOOL)shouldLaunchSuspendedAlways;
-(BOOL)supportsLegacyVOIPBackgroundMode;
-(unsigned long long)applicationSizeInBytes;
-(BOOL)isLaunchableDuringSetup;
-(NSArray *)domainsToPreheat;
-(BOOL)supports64Bit;
-(BOOL)isOcelotApplication;
-(BOOL)supportsFetchBackgroundMode;
-(BOOL)isStatusBarLegacy;
-(unsigned long long)uninstallCapability;
-(unsigned long long)dynamicApplicationShortcutItemsVersion;
-(int)networkUsageTypes;
-(BOOL)disallowsControlCenter;
-(BOOL)disallowsNotificationCenter;
-(BOOL)alwaysReceivesOpenURLSource;
-(NSURL *)restorationArchiveContainerURL;
-(CRCarPlayAppDeclaration *)carPlayDeclaration;
-(id)_configureTags:(id)arg1 hasVisibilityOverride:(BOOL)arg2 ;
-(BOOL)representsWebApplication;
-(unsigned long long)_calculateVoipClassWithEntitlements:(id)arg1 ;
-(BOOL)systemAppSupportsLocalNotifications;
-(NSString *)iconMasqueradeIdentifier;
-(long long)backgroundStyleForRequestedBackgroundStyle:(long long)arg1 ;
-(BOOL)supportsRemoteNotificationBackgroundMode;
-(BOOL)supportsNewsstandContentBackgroundMode;
-(BOOL)suppressUserNotificationPermissionAlert;
-(NSString *)installInstanceID;
-(unsigned long long)visibilityOverride;
-(BOOL)prefersSavedSnapshots;
-(BOOL)wantsLaunchWithoutPNG;
-(int)ignoredStatusBarStyleOverrides;
-(BOOL)wasGameCenterEverEnabled;
-(BOOL)preventsLaunchInterfaceSplitting;
-(NSArray *)launchImageInfo;
-(NSString *)launchInterfaceFileName;
-(NSURL *)documentInboxURL;
-(unsigned long long)allowedNKNotificationsPerDay;
-(BOOL)usesRLNDataProvider;
-(BOOL)shouldSkipCrossfadeToLive;
-(BOOL)supportsDirectToAirplay;
-(BOOL)shouldLaunchWithLiveContentASAP;
-(XBSnapshotContainerIdentity *)manifestContainerIdentity;
-(BOOL)supportsDirectToAirplayOrIsWhitelisted;
@end


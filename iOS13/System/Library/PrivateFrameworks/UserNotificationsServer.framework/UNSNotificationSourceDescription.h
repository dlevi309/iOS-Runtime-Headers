/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSString, NSURL, NSDictionary, NSArray, UNSNotificationSourceSettingsDescription;

@interface UNSNotificationSourceDescription : NSObject {

	BOOL _allowCriticalAlerts;
	BOOL _allowPrivateProperties;
	BOOL _allowUnlimitedContentBody;
	BOOL _allowServiceExtensionFiltering;
	BOOL _hideSettings;
	BOOL _automaticallyShowSettings;
	BOOL _suppressDismissalSync;
	BOOL _suppressIconMask;
	BOOL _suppressUserAuthorizationPrompt;
	BOOL _useDefaultDataProvider;
	BOOL _usesCloudKit;
	BOOL _supportsContentAvailableRemoteNotifications;
	BOOL _restricted;
	BOOL _daemonShouldReceiveBackgroundResponses;
	BOOL _daemonShouldReceiveNotificationSettingsUpdates;
	BOOL _daemonShouldReceiveApplicationEvents;
	BOOL _allowUnlimitedPendingNotifications;
	NSString* _bundleIdentifier;
	NSString* _processBundleIdentifier;
	NSString* _universalApplicationIdentifier;
	NSString* _displayName;
	NSString* _pushEnvironment;
	NSString* _defaultIconFile;
	NSString* _settingsIconFile;
	NSString* _settingsSheetIconFile;
	NSString* _carPlayIconFile;
	NSString* _watchQuickLookSmallIconFile;
	NSString* _watchQuickLookLargeIconFile;
	NSString* _watchListSmallIconFile;
	NSString* _watchListLargeIconFile;
	NSString* _watchQuickLook394hIconFile;
	NSString* _watchQuickLook448hIconFile;
	NSString* _watchList394hIconFile;
	NSString* _watchList448hIconFile;
	NSURL* _bundleURL;
	NSURL* _dataContainerURL;
	NSDictionary* _groupContainerURLS;
	NSArray* _defaultCategories;
	UNSNotificationSourceSettingsDescription* _defaultSettings;
	NSArray* _defaultTopics;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * processBundleIdentifier;                                        //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * universalApplicationIdentifier;                                 //@synthesize universalApplicationIdentifier=_universalApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pushEnvironment;                                                //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
@property (nonatomic,copy) NSString * defaultIconFile;                                                //@synthesize defaultIconFile=_defaultIconFile - In the implementation block
@property (nonatomic,copy) NSString * settingsIconFile;                                               //@synthesize settingsIconFile=_settingsIconFile - In the implementation block
@property (nonatomic,copy) NSString * settingsSheetIconFile;                                          //@synthesize settingsSheetIconFile=_settingsSheetIconFile - In the implementation block
@property (nonatomic,copy) NSString * carPlayIconFile;                                                //@synthesize carPlayIconFile=_carPlayIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchQuickLookSmallIconFile;                                    //@synthesize watchQuickLookSmallIconFile=_watchQuickLookSmallIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchQuickLookLargeIconFile;                                    //@synthesize watchQuickLookLargeIconFile=_watchQuickLookLargeIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchListSmallIconFile;                                         //@synthesize watchListSmallIconFile=_watchListSmallIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchListLargeIconFile;                                         //@synthesize watchListLargeIconFile=_watchListLargeIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchQuickLook394hIconFile;                                     //@synthesize watchQuickLook394hIconFile=_watchQuickLook394hIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchQuickLook448hIconFile;                                     //@synthesize watchQuickLook448hIconFile=_watchQuickLook448hIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchList394hIconFile;                                          //@synthesize watchList394hIconFile=_watchList394hIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchList448hIconFile;                                          //@synthesize watchList448hIconFile=_watchList448hIconFile - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                         //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSURL * dataContainerURL;                                                  //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,copy) NSDictionary * groupContainerURLS;                                         //@synthesize groupContainerURLS=_groupContainerURLS - In the implementation block
@property (nonatomic,retain) NSArray * defaultCategories;                                             //@synthesize defaultCategories=_defaultCategories - In the implementation block
@property (nonatomic,retain) UNSNotificationSourceSettingsDescription * defaultSettings;              //@synthesize defaultSettings=_defaultSettings - In the implementation block
@property (nonatomic,retain) NSArray * defaultTopics;                                                 //@synthesize defaultTopics=_defaultTopics - In the implementation block
@property (assign,nonatomic) BOOL automaticallyShowSettings;                                          //@synthesize automaticallyShowSettings=_automaticallyShowSettings - In the implementation block
@property (assign,nonatomic) BOOL hideSettings;                                                       //@synthesize hideSettings=_hideSettings - In the implementation block
@property (assign,nonatomic) BOOL useDefaultDataProvider;                                             //@synthesize useDefaultDataProvider=_useDefaultDataProvider - In the implementation block
@property (assign,nonatomic) BOOL suppressDismissalSync;                                              //@synthesize suppressDismissalSync=_suppressDismissalSync - In the implementation block
@property (assign,nonatomic) BOOL suppressIconMask;                                                   //@synthesize suppressIconMask=_suppressIconMask - In the implementation block
@property (assign,nonatomic) BOOL suppressUserAuthorizationPrompt;                                    //@synthesize suppressUserAuthorizationPrompt=_suppressUserAuthorizationPrompt - In the implementation block
@property (assign,nonatomic) BOOL allowCriticalAlerts;                                                //@synthesize allowCriticalAlerts=_allowCriticalAlerts - In the implementation block
@property (assign,nonatomic) BOOL allowServiceExtensionFiltering;                                     //@synthesize allowServiceExtensionFiltering=_allowServiceExtensionFiltering - In the implementation block
@property (assign,nonatomic) BOOL allowPrivateProperties;                                             //@synthesize allowPrivateProperties=_allowPrivateProperties - In the implementation block
@property (assign,nonatomic) BOOL allowUnlimitedPendingNotifications;                                 //@synthesize allowUnlimitedPendingNotifications=_allowUnlimitedPendingNotifications - In the implementation block
@property (assign,nonatomic) BOOL allowUnlimitedContentBody;                                          //@synthesize allowUnlimitedContentBody=_allowUnlimitedContentBody - In the implementation block
@property (assign,nonatomic) BOOL usesCloudKit;                                                       //@synthesize usesCloudKit=_usesCloudKit - In the implementation block
@property (assign,nonatomic) BOOL supportsContentAvailableRemoteNotifications;                        //@synthesize supportsContentAvailableRemoteNotifications=_supportsContentAvailableRemoteNotifications - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                                     //@synthesize restricted=_restricted - In the implementation block
@property (assign,nonatomic) BOOL daemonShouldReceiveBackgroundResponses;                             //@synthesize daemonShouldReceiveBackgroundResponses=_daemonShouldReceiveBackgroundResponses - In the implementation block
@property (assign,nonatomic) BOOL daemonShouldReceiveNotificationSettingsUpdates;                     //@synthesize daemonShouldReceiveNotificationSettingsUpdates=_daemonShouldReceiveNotificationSettingsUpdates - In the implementation block
@property (assign,nonatomic) BOOL daemonShouldReceiveApplicationEvents;                               //@synthesize daemonShouldReceiveApplicationEvents=_daemonShouldReceiveApplicationEvents - In the implementation block
+(id)systemSourceDirectoryURLs;
+(id)systemSourcePathExtension;
+(id)systemSourceDescriptionWithBundleURL:(id)arg1 ;
+(id)applicationSourceDescriptionWithApplication:(id)arg1 ;
+(id)sourceDescriptionWithBundleIdentifier:(id)arg1 ;
+(id)_validEnvironmentFromEnvironment:(id)arg1 ;
+(id)systemSourceDescriptionWithBundleIdentifier:(id)arg1 ;
+(id)applicationSourceDescriptionWithBundleIdentifier:(id)arg1 ;
+(id)descriptionWithBundleIdentifier:(id)arg1 path:(id)arg2 allowServiceExtensionFiltering:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSString *)displayName;
-(void)setBundleURL:(NSURL *)arg1 ;
-(BOOL)isRestricted;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDataContainerURL:(NSURL *)arg1 ;
-(NSURL *)dataContainerURL;
-(void)setDisplayName:(NSString *)arg1 ;
-(UNSNotificationSourceSettingsDescription *)defaultSettings;
-(NSArray *)defaultCategories;
-(void)setRestricted:(BOOL)arg1 ;
-(NSString *)pushEnvironment;
-(void)setPushEnvironment:(NSString *)arg1 ;
-(NSString *)processBundleIdentifier;
-(BOOL)suppressUserAuthorizationPrompt;
-(BOOL)allowCriticalAlerts;
-(BOOL)usesCloudKit;
-(BOOL)supportsContentAvailableRemoteNotifications;
-(BOOL)allowServiceExtensionFiltering;
-(BOOL)useDefaultDataProvider;
-(void)setGroupContainerURLS:(NSDictionary *)arg1 ;
-(void)setAllowServiceExtensionFiltering:(BOOL)arg1 ;
-(void)setProcessBundleIdentifier:(NSString *)arg1 ;
-(void)setUsesCloudKit:(BOOL)arg1 ;
-(void)setAllowCriticalAlerts:(BOOL)arg1 ;
-(void)setSupportsContentAvailableRemoteNotifications:(BOOL)arg1 ;
-(void)setSystemPropertiesFromDictionary:(id)arg1 bundle:(id)arg2 ;
-(void)setSuppressUserAuthorizationPrompt:(BOOL)arg1 ;
-(void)setAllowUnlimitedPendingNotifications:(BOOL)arg1 ;
-(void)setAllowPrivateProperties:(BOOL)arg1 ;
-(void)setUseDefaultDataProvider:(BOOL)arg1 ;
-(NSString *)defaultIconFile;
-(NSString *)settingsIconFile;
-(NSString *)settingsSheetIconFile;
-(NSString *)carPlayIconFile;
-(NSString *)watchQuickLookSmallIconFile;
-(NSString *)watchQuickLookLargeIconFile;
-(NSString *)watchListSmallIconFile;
-(NSString *)watchListLargeIconFile;
-(NSString *)watchQuickLook394hIconFile;
-(NSString *)watchQuickLook448hIconFile;
-(NSString *)watchList394hIconFile;
-(NSString *)watchList448hIconFile;
-(NSString *)universalApplicationIdentifier;
-(NSArray *)defaultTopics;
-(BOOL)automaticallyShowSettings;
-(BOOL)hideSettings;
-(BOOL)suppressDismissalSync;
-(BOOL)suppressIconMask;
-(BOOL)allowUnlimitedPendingNotifications;
-(BOOL)allowUnlimitedContentBody;
-(BOOL)allowPrivateProperties;
-(void)setDefaultCategoriesFromArray:(id)arg1 bundle:(id)arg2 ;
-(void)setDefaultSettings:(UNSNotificationSourceSettingsDescription *)arg1 ;
-(void)setDefaultTopicsFromArray:(id)arg1 bundle:(id)arg2 ;
-(void)setIconFilesFromDictionary:(id)arg1 ;
-(void)setAutomaticallyShowSettings:(BOOL)arg1 ;
-(void)setHideSettings:(BOOL)arg1 ;
-(void)setUniversalApplicationIdentifier:(NSString *)arg1 ;
-(void)setSuppressDismissalSync:(BOOL)arg1 ;
-(void)setSuppressIconMask:(BOOL)arg1 ;
-(void)setAllowUnlimitedContentBody:(BOOL)arg1 ;
-(void)setDaemonShouldReceiveBackgroundResponses:(BOOL)arg1 ;
-(void)setDaemonShouldReceiveNotificationSettingsUpdates:(BOOL)arg1 ;
-(void)setDaemonShouldReceiveApplicationEvents:(BOOL)arg1 ;
-(void)setDefaultIconFile:(NSString *)arg1 ;
-(void)setSettingsIconFile:(NSString *)arg1 ;
-(void)setSettingsSheetIconFile:(NSString *)arg1 ;
-(void)setCarPlayIconFile:(NSString *)arg1 ;
-(void)setWatchQuickLookSmallIconFile:(NSString *)arg1 ;
-(void)setWatchQuickLookLargeIconFile:(NSString *)arg1 ;
-(void)setWatchListSmallIconFile:(NSString *)arg1 ;
-(void)setWatchListLargeIconFile:(NSString *)arg1 ;
-(void)setWatchQuickLook394hIconFile:(NSString *)arg1 ;
-(void)setWatchQuickLook448hIconFile:(NSString *)arg1 ;
-(void)setWatchList394hIconFile:(NSString *)arg1 ;
-(void)setWatchList448hIconFile:(NSString *)arg1 ;
-(void)setDefaultCategories:(NSArray *)arg1 ;
-(void)setDefaultTopics:(NSArray *)arg1 ;
-(BOOL)daemonShouldReceiveBackgroundResponses;
-(BOOL)daemonShouldReceiveNotificationSettingsUpdates;
-(BOOL)daemonShouldReceiveApplicationEvents;
-(NSDictionary *)groupContainerURLS;
@end


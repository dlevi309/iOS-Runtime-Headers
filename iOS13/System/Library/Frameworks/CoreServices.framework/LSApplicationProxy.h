/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSNumber, NSDictionary, _LSLazyPropertyList, NSDate, _LSDiskUsage, _LSApplicationState, NSSet, NSUUID, NSProgress;

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding> {

	NSString* _deviceIdentifierVendorName;
	NSArray* _pluginUUIDs;
	NSNumber* _versionID;
	NSDictionary* _claimHandlerRanks;
	unsigned _platform;
	NSArray* _managedPersonas;
	_LSLazyPropertyList* _siriActionDefinitionURLs;
	BOOL _standaloneWatchApp;
	BOOL _runsIndependentlyOfCompanionApp;
	BOOL _userInitiatedUninstall;
	int _bundleModTime;
	NSArray* _plugInKitPlugins;
	NSString* _signerOrganization;
	NSString* _companionApplicationIdentifier;
	NSArray* _counterpartIdentifiers;
	NSDate* _registeredDate;
	NSNumber* _itemID;
	NSString* _vendorName;
	NSString* _itemName;
	NSString* _genre;
	NSNumber* _genreID;
	NSString* _minimumSystemVersion;
	NSString* _maximumSystemVersion;
	NSString* _shortVersionString;
	NSString* _preferredArchitecture;
	_LSDiskUsage* _diskUsage;
	_LSApplicationState* _appState;
	NSNumber* _purchaserDSID;
	NSNumber* _downloaderDSID;
	NSNumber* _familyID;
	unsigned long long _installType;
	unsigned long long _originalInstallType;
	NSArray* _deviceFamily;
	NSArray* _activityTypes;
	NSString* _teamID;
	NSNumber* _storeFront;
	NSNumber* _ratingRank;
	NSString* _ratingLabel;
	NSString* _sourceAppIdentifier;
	NSString* _applicationVariant;
	NSString* _watchKitVersion;
	NSString* _complicationPrincipalClass;
	NSArray* _supportedComplicationFamilies;
	NSNumber* _installFailureReason;
	NSString* _appStoreToolsBuildVersion;
	NSSet* _claimedDocumentContentTypes;
	NSSet* _claimedURLSchemes;
	NSArray* _backgroundTaskSchedulerPermittedIdentifiers;

}

@property (assign,nonatomic) BOOL userInitiatedUninstall;                                          //@synthesize userInitiatedUninstall=_userInitiatedUninstall - In the implementation block
@property (nonatomic,readonly) BOOL supportsAlternateIconNames; 
@property (nonatomic,readonly) int bundleModTime;                                                  //@synthesize bundleModTime=_bundleModTime - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier; 
@property (nonatomic,readonly) NSString * companionApplicationIdentifier;                          //@synthesize companionApplicationIdentifier=_companionApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * counterpartIdentifiers;                                   //@synthesize counterpartIdentifiers=_counterpartIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDate * registeredDate;                                            //@synthesize registeredDate=_registeredDate - In the implementation block
@property (nonatomic,readonly) NSNumber * itemID;                                                  //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSString * vendorName;                                              //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,readonly) NSString * itemName;                                                //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,readonly) NSString * storeCohortMetadata; 
@property (nonatomic,readonly) NSString * genre;                                                   //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) NSNumber * genreID;                                                 //@synthesize genreID=_genreID - In the implementation block
@property (nonatomic,readonly) NSArray * subgenres; 
@property (nonatomic,readonly) NSArray * staticShortcutItems; 
@property (nonatomic,readonly) NSString * minimumSystemVersion;                                    //@synthesize minimumSystemVersion=_minimumSystemVersion - In the implementation block
@property (nonatomic,readonly) NSString * maximumSystemVersion;                                    //@synthesize maximumSystemVersion=_maximumSystemVersion - In the implementation block
@property (nonatomic,readonly) NSString * shortVersionString;                                      //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,readonly) NSString * preferredArchitecture;                                   //@synthesize preferredArchitecture=_preferredArchitecture - In the implementation block
@property (nonatomic,readonly) NSString * applicationType; 
@property (nonatomic,readonly) NSArray * directionsModes; 
@property (nonatomic,readonly) NSArray * UIBackgroundModes; 
@property (nonatomic,readonly) NSArray * audioComponents; 
@property (nonatomic,readonly) NSUUID * deviceIdentifierForVendor; 
@property (nonatomic,readonly) NSUUID * deviceIdentifierForAdvertising; 
@property (nonatomic,readonly) NSProgress * installProgress; 
@property (nonatomic,readonly) NSNumber * staticDiskUsage; 
@property (nonatomic,readonly) NSNumber * dynamicDiskUsage; 
@property (nonatomic,readonly) NSNumber * ODRDiskUsage; 
@property (nonatomic,readonly) _LSDiskUsage * diskUsage;                                           //@synthesize diskUsage=_diskUsage - In the implementation block
@property (nonatomic,readonly) _LSApplicationState * appState;                                     //@synthesize appState=_appState - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isRemovedSystemApp,nonatomic,readonly) BOOL removedSystemApp; 
@property (nonatomic,readonly) NSArray * VPNPlugins; 
@property (nonatomic,readonly) NSArray * plugInKitPlugins;                                         //@synthesize plugInKitPlugins=_plugInKitPlugins - In the implementation block
@property (nonatomic,readonly) NSArray * appTags; 
@property (nonatomic,readonly) NSString * applicationDSID; 
@property (nonatomic,readonly) NSNumber * purchaserDSID;                                           //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * downloaderDSID;                                          //@synthesize downloaderDSID=_downloaderDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * familyID;                                                //@synthesize familyID=_familyID - In the implementation block
@property (nonatomic,readonly) unsigned long long installType;                                     //@synthesize installType=_installType - In the implementation block
@property (nonatomic,readonly) unsigned long long originalInstallType;                             //@synthesize originalInstallType=_originalInstallType - In the implementation block
@property (nonatomic,readonly) NSArray * requiredDeviceCapabilities; 
@property (nonatomic,readonly) NSArray * deviceFamily;                                             //@synthesize deviceFamily=_deviceFamily - In the implementation block
@property (nonatomic,readonly) NSArray * activityTypes;                                            //@synthesize activityTypes=_activityTypes - In the implementation block
@property (nonatomic,readonly) NSArray * externalAccessoryProtocols; 
@property (nonatomic,readonly) NSString * teamID;                                                  //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,readonly) NSString * appIDPrefix; 
@property (nonatomic,readonly) NSNumber * storeFront;                                              //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) NSNumber * externalVersionIdentifier; 
@property (nonatomic,readonly) NSNumber * betaExternalVersionIdentifier; 
@property (nonatomic,readonly) NSNumber * ratingRank;                                              //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,readonly) NSString * ratingLabel;                                             //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,readonly) NSString * sourceAppIdentifier;                                     //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * applicationVariant;                                      //@synthesize applicationVariant=_applicationVariant - In the implementation block
@property (getter=isAppUpdate,nonatomic,readonly) BOOL appUpdate; 
@property (nonatomic,readonly) BOOL hasParallelPlaceholder; 
@property (getter=isNewsstandApp,nonatomic,readonly) BOOL newsstandApp; 
@property (getter=isWhitelisted,nonatomic,readonly) BOOL whitelisted; 
@property (getter=isAppStoreVendable,nonatomic,readonly) BOOL appStoreVendable; 
@property (getter=isDeviceBasedVPP,nonatomic,readonly) BOOL deviceBasedVPP; 
@property (getter=isBetaApp,nonatomic,readonly) BOOL betaApp; 
@property (getter=isAdHocCodeSigned,nonatomic,readonly) BOOL adHocCodeSigned; 
@property (nonatomic,readonly) BOOL supportsAudiobooks; 
@property (getter=isLaunchProhibited,nonatomic,readonly) BOOL launchProhibited; 
@property (nonatomic,readonly) BOOL supportsODR; 
@property (nonatomic,readonly) BOOL hasSettingsBundle; 
@property (nonatomic,readonly) BOOL supportsExternallyPlayableContent; 
@property (nonatomic,readonly) BOOL supportsOpenInPlace; 
@property (nonatomic,readonly) BOOL fileSharingEnabled; 
@property (nonatomic,readonly) BOOL iconIsPrerendered; 
@property (nonatomic,readonly) BOOL iconUsesAssetCatalog; 
@property (getter=isPurchasedReDownload,nonatomic,readonly) BOOL purchasedReDownload; 
@property (nonatomic,readonly) BOOL hasMIDBasedSINF; 
@property (nonatomic,readonly) BOOL missingRequiredSINF; 
@property (nonatomic,readonly) BOOL supportsPurgeableLocalStorage; 
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable; 
@property (nonatomic,readonly) NSArray * managedPersonas; 
@property (getter=isRemoveableSystemApp,nonatomic,readonly) BOOL removeableSystemApp; 
@property (getter=isWatchKitApp,nonatomic,readonly) BOOL watchKitApp; 
@property (nonatomic,readonly) NSString * watchKitVersion;                                         //@synthesize watchKitVersion=_watchKitVersion - In the implementation block
@property (nonatomic,readonly) NSString * complicationPrincipalClass;                              //@synthesize complicationPrincipalClass=_complicationPrincipalClass - In the implementation block
@property (nonatomic,readonly) NSArray * supportedComplicationFamilies;                            //@synthesize supportedComplicationFamilies=_supportedComplicationFamilies - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomNotification; 
@property (nonatomic,readonly) BOOL hasComplication; 
@property (nonatomic,readonly) BOOL hasGlance; 
@property (nonatomic,readonly) BOOL shouldSkipWatchAppInstall; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (nonatomic,readonly) BOOL gameCenterEverEnabled; 
@property (nonatomic,readonly) NSNumber * installFailureReason;                                    //@synthesize installFailureReason=_installFailureReason - In the implementation block
@property (nonatomic,readonly) long long deviceManagementPolicy; 
@property (nonatomic,readonly) NSDictionary * siriActionDefinitionURLs; 
@property (nonatomic,readonly) NSString * appStoreToolsBuildVersion;                               //@synthesize appStoreToolsBuildVersion=_appStoreToolsBuildVersion - In the implementation block
@property (nonatomic,readonly) NSSet * claimedDocumentContentTypes;                                //@synthesize claimedDocumentContentTypes=_claimedDocumentContentTypes - In the implementation block
@property (nonatomic,readonly) NSSet * claimedURLSchemes;                                          //@synthesize claimedURLSchemes=_claimedURLSchemes - In the implementation block
@property (nonatomic,readonly) BOOL canHandleWebAuthentication; 
@property (nonatomic,readonly) BOOL supportsMultiwindow; 
@property (nonatomic,readonly) NSNumber * platform; 
@property (nonatomic,readonly) NSArray * backgroundTaskSchedulerPermittedIdentifiers;              //@synthesize backgroundTaskSchedulerPermittedIdentifiers=_backgroundTaskSchedulerPermittedIdentifiers - In the implementation block
@property (getter=isStandaloneWatchApp,nonatomic,readonly) BOOL standaloneWatchApp;                //@synthesize standaloneWatchApp=_standaloneWatchApp - In the implementation block
@property (nonatomic,readonly) BOOL runsIndependentlyOfCompanionApp;                               //@synthesize runsIndependentlyOfCompanionApp=_runsIndependentlyOfCompanionApp - In the implementation block
@property (getter=isArcadeApp,nonatomic,readonly) BOOL arcadeApp; 
@property (nonatomic,readonly) NSArray * carPlayInstrumentClusterURLSchemes; 
+(BOOL)supportsSecureCoding;
+(id)applicationProxyForIdentifier:(id)arg1 placeholder:(BOOL)arg2 ;
+(id)applicationProxyForSystemPlaceholder:(id)arg1 ;
+(id)applicationProxyForIdentifier:(id)arg1 ;
+(id)applicationProxyForBundleURL:(id)arg1 ;
+(id)applicationProxyWithBundleUnitID:(unsigned)arg1 withContext:(LSContext*)arg2 ;
+(id)applicationProxyForIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
+(id)applicationProxyForBundleType:(unsigned long long)arg1 identifier:(id)arg2 isCompanion:(BOOL)arg3 URL:(id)arg4 itemID:(id)arg5 bundleUnit:(unsigned*)arg6 ;
+(id)iconQueue;
+(id)applicationProxyForCompanionIdentifier:(id)arg1 ;
+(id)applicationProxyForItemID:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)teamID;
-(id)uniqueIdentifier;
-(_LSApplicationState *)appState;
-(BOOL)isInstalled;
-(BOOL)isRestricted;
-(unsigned long long)installType;
-(NSString *)applicationIdentifier;
-(BOOL)isPlaceholder;
-(NSArray *)plugInKitPlugins;
-(NSNumber *)ratingRank;
-(BOOL)isDeletableIgnoringRestrictions;
-(void)clearAdvertisingIdentifier;
-(NSUUID *)deviceIdentifierForAdvertising;
-(NSUUID *)deviceIdentifierForVendor;
-(BOOL)isLaunchProhibited;
-(NSProgress *)installProgress;
-(int)bundleModTime;
-(id)_initWithBundleUnit:(unsigned)arg1 context:(LSContext*)arg2 applicationIdentifier:(id)arg3 ;
-(_LSDiskUsage *)diskUsage;
-(id)_managedPersonas;
-(BOOL)isBetaApp;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(NSString *)applicationType;
-(BOOL)isDeletable;
-(NSNumber *)itemID;
-(NSArray *)supportedComplicationFamilies;
-(NSString *)complicationPrincipalClass;
-(NSString *)storeCohortMetadata;
-(NSArray *)subgenres;
-(NSArray *)staticShortcutItems;
-(NSString *)applicationDSID;
-(NSArray *)directionsModes;
-(NSArray *)UIBackgroundModes;
-(NSArray *)audioComponents;
-(NSArray *)externalAccessoryProtocols;
-(NSString *)appIDPrefix;
-(NSNumber *)staticDiskUsage;
-(NSNumber *)dynamicDiskUsage;
-(NSNumber *)ODRDiskUsage;
-(NSArray *)VPNPlugins;
-(NSArray *)managedPersonas;
-(BOOL)_usesSystemPersona;
-(NSArray *)appTags;
-(NSArray *)requiredDeviceCapabilities;
-(void)setAlternateIconName:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)alternateIconName;
-(id)getBundleMetadata;
-(NSNumber *)externalVersionIdentifier;
-(NSNumber *)betaExternalVersionIdentifier;
-(id)installProgressSync;
-(id)iconDataForVariant:(int)arg1 ;
-(id)primaryIconDataForVariant:(int)arg1 ;
-(BOOL)supportsAlternateIconNames;
-(BOOL)iconIsPrerendered;
-(BOOL)iconUsesAssetCatalog;
-(BOOL)fileSharingEnabled;
-(BOOL)profileValidated;
-(BOOL)UPPValidated;
-(BOOL)isAdHocCodeSigned;
-(BOOL)isAppUpdate;
-(BOOL)hasParallelPlaceholder;
-(BOOL)isNewsstandApp;
-(BOOL)supportsAudiobooks;
-(BOOL)supportsODR;
-(BOOL)supportsExternallyPlayableContent;
-(BOOL)supportsOpenInPlace;
-(BOOL)hasSettingsBundle;
-(BOOL)isWhitelisted;
-(BOOL)isAppStoreVendable;
-(BOOL)isDeviceBasedVPP;
-(BOOL)isPurchasedReDownload;
-(BOOL)isWatchKitApp;
-(BOOL)hasCustomNotification;
-(BOOL)hasComplication;
-(BOOL)hasGlance;
-(BOOL)shouldSkipWatchAppInstall;
-(BOOL)hasMIDBasedSINF;
-(BOOL)missingRequiredSINF;
-(BOOL)supportsPurgeableLocalStorage;
-(BOOL)isGameCenterEnabled;
-(BOOL)gameCenterEverEnabled;
-(BOOL)isRemoveableSystemApp;
-(BOOL)isRemovedSystemApp;
-(long long)deviceManagementPolicy;
-(void)getDeviceManagementPolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)siriActionDefinitionURLs;
-(id)handlerRankOfClaimForContentType:(id)arg1 ;
-(BOOL)canHandleWebAuthentication;
-(BOOL)supportsMultiwindow;
-(NSNumber *)platform;
-(BOOL)isArcadeApp;
-(NSArray *)carPlayInstrumentClusterURLSchemes;
-(id)signerOrganization;
-(NSString *)companionApplicationIdentifier;
-(NSArray *)counterpartIdentifiers;
-(NSDate *)registeredDate;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSString *)genre;
-(NSNumber *)genreID;
-(NSString *)minimumSystemVersion;
-(NSString *)maximumSystemVersion;
-(NSString *)shortVersionString;
-(NSString *)preferredArchitecture;
-(NSNumber *)purchaserDSID;
-(NSNumber *)downloaderDSID;
-(NSNumber *)familyID;
-(unsigned long long)originalInstallType;
-(NSArray *)deviceFamily;
-(NSArray *)activityTypes;
-(NSNumber *)storeFront;
-(NSString *)ratingLabel;
-(NSString *)sourceAppIdentifier;
-(NSString *)applicationVariant;
-(NSString *)watchKitVersion;
-(NSNumber *)installFailureReason;
-(NSString *)appStoreToolsBuildVersion;
-(NSSet *)claimedDocumentContentTypes;
-(NSSet *)claimedURLSchemes;
-(NSArray *)backgroundTaskSchedulerPermittedIdentifiers;
-(BOOL)isStandaloneWatchApp;
-(BOOL)runsIndependentlyOfCompanionApp;
-(BOOL)userInitiatedUninstall;
-(void)setUserInitiatedUninstall:(BOOL)arg1 ;
-(id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2 useShortNameOnly:(BOOL)arg3 ;
-(id)localizedNameForContext:(id)arg1 ;
-(id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
@end


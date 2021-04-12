/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleRecord.h>

@class NSURL, NSDictionary, LSiTunesMetadata, NSUUID, NSArray, _LSLazyPropertyList, NSString, NSData, LSApplicationProxy, _LSApplicationState, NSSet, _LSDiskUsage, LSAppClipMetadata;

@interface LSApplicationRecord : LSBundleRecord

@property (readonly) NSURL * bundleContainerURL; 
@property (readonly) NSDictionary * additionalEnvironmentVariables; 
@property (readonly) LSiTunesMetadata * iTunesMetadata; 
@property (nonatomic,readonly) NSUUID * deviceIdentifierForVendor; 
@property (nonatomic,readonly) NSUUID * deviceIdentifierForAdvertising; 
@property (readonly) NSArray * directionsModes; 
@property (readonly) NSArray * audioComponents; 
@property (readonly) NSArray * externalAccessoryProtocols; 
@property (readonly) NSArray * staticShortcutItems; 
@property (readonly) NSArray * VPNPlugins; 
@property (readonly) NSArray * appTags; 
@property (readonly) NSDictionary * requiredDeviceCapabilities; 
@property (readonly) NSArray * deviceFamilies; 
@property (readonly) BOOL supportsExternallyPlayableContent; 
@property (readonly) BOOL supportsOpenInPlace; 
@property (getter=isFileSharingEnabled,readonly) BOOL fileSharingEnabled; 
@property (readonly) BOOL supportsPurgeableLocalStorage; 
@property (getter=wasRenamed,readonly) BOOL renamed; 
@property (readonly) _LSLazyPropertyList * _rawIconDictionary; 
@property (readonly) BOOL supportsAlternateIconNames; 
@property (readonly) NSString * alternateIconName; 
@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) BOOL supportsControllerUserInteraction; 
@property (readonly) NSArray * supportedGameControllers; 
@property (getter=isWrapper,readonly) BOOL wrapper; 
@property (getter=isWrapped,readonly) BOOL wrapped; 
@property (readonly) unsigned long long applicationDSID; 
@property (readonly) unsigned long long applicationDownloaderDSID; 
@property (readonly) unsigned long long applicationFamilyID; 
@property (readonly) unsigned long long installType; 
@property (getter=isAdHocCodeSigned,readonly) BOOL adHocCodeSigned; 
@property (readonly) BOOL hasSettingsBundle; 
@property (readonly) BOOL applicationHasMIDBasedSINF; 
@property (readonly) BOOL applicationMissingRequiredSINF; 
@property (readonly) BOOL hasCustomNotification; 
@property (readonly) unsigned long long placeholderFailureReason; 
@property (getter=isRemovableByInstallMachinery,readonly) BOOL removableByInstallMachinery; 
@property (readonly) NSData * uniqueInstallIdentifier; 
@property (readonly) NSData * installSessionIdentifier; 
@property (readonly) unsigned codeSignatureVersion; 
@property (readonly) NSString * companionBundleIdentifier; 
@property (readonly) unsigned char watchKitApplicationType; 
@property (readonly) NSString * watchKitVersion; 
@property (readonly) NSString * complicationPrincipalClassName; 
@property (readonly) NSArray * supportedComplicationFamilies; 
@property (readonly) BOOL hasComplication; 
@property (readonly) BOOL hasGlance; 
@property (readonly) BOOL shouldSkipWatchAppInstall; 
@property (getter=isWatchOnly,readonly) BOOL watchOnly; 
@property (readonly) BOOL runsIndependentlyOfCompanionApp; 
@property (readonly) NSString * watchKitApplicationTintColorName; 
@property (readonly) NSString * typeForInstallMachinery; 
@property (readonly) NSDictionary * _localizedNamesWithContext; 
@property (readonly) NSString * _deviceIdentifierVendorName; 
@property (readonly) _LSLazyPropertyList * _rawEnvironmentVariables; 
@property (readonly) unsigned long long _rawBundleFlags; 
@property (readonly) unsigned _rawPlistFlags; 
@property (readonly) unsigned char _rawIconFlags; 
@property (readonly) LSBundleMoreFlags _rawMoreFlags; 
@property (readonly) int _bundleModTime; 
@property (readonly) NSArray * _iconFileNames; 
@property (readonly) NSString * _preferredLaunchArchitecture; 
@property (nonatomic,readonly) LSApplicationProxy * compatibilityObject; 
@property (readonly) NSString * teamIdentifier; 
@property (readonly) NSArray * counterpartIdentifiers; 
@property (readonly) NSString * minimumSystemVersion; 
@property (readonly) NSString * maximumSystemVersion; 
@property (readonly) NSString * exactBundleVersion; 
@property (readonly) NSString * shortVersionString; 
@property (getter=isBeta,readonly) BOOL beta; 
@property (getter=isUpdate,readonly) BOOL update; 
@property (getter=isPlaceholder,readonly) BOOL placeholder; 
@property (getter=isSystemPlaceholder,readonly) BOOL systemPlaceholder; 
@property (readonly) BOOL hasParallelPlaceholder; 
@property (readonly) _LSApplicationState * applicationState; 
@property (getter=isDeletable,readonly) BOOL deletable; 
@property (getter=isDeletableSystemApplication,readonly) BOOL deletableSystemApplication; 
@property (getter=isAppStoreVendable,nonatomic,readonly) BOOL appStoreVendable; 
@property (getter=isLaunchProhibited,readonly) BOOL launchProhibited; 
@property (readonly) NSString * appStoreToolsBuildVersion; 
@property (readonly) NSSet * userActivityTypes; 
@property (readonly) BOOL canHandleWebAuthentication; 
@property (readonly) NSSet * applicationExtensionRecords; 
@property (readonly) BOOL supportsMultiwindow; 
@property (getter=isArcadeApp,readonly) BOOL arcadeApp; 
@property (readonly) _LSDiskUsage * diskUsage; 
@property (readonly) BOOL supportsOnDemandResources; 
@property (readonly) BOOL supportsAudiobooks; 
@property (readonly) NSArray * backgroundTaskSchedulerPermittedIdentifiers; 
@property (readonly) NSArray * carPlayInstrumentClusterURLSchemes; 
@property (readonly) BOOL supportsCarPlayDashboardScene; 
@property (readonly) BOOL supportsCarPlayInstrumentClusterScene; 
@property (readonly) LSAppClipMetadata * appClipMetadata; 
@property (readonly) BOOL shouldShowSecurityPromptsOnSignIn; 
@property (getter=isWebBrowser,readonly) BOOL webBrowser; 
@property (getter=isMailClient,readonly) BOOL mailClient; 
@property (readonly) BOOL supportsSpotlightQueryContinuation; 
@property (readonly) BOOL requiresNativeExecution; 
+(id)applicationRecordsForUserActivityDomainName:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)applicationRecordsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)enumeratorOnVolumeAtURL:(id)arg1 options:(unsigned long long)arg2 ;
+(id)enumeratorWithOptions:(unsigned long long)arg1 ;
+(id)systemPlaceholderEnumerator;
+(id)_alternateIconQueue;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(_LSApplicationState *)applicationState;
-(BOOL)isBeta;
-(NSArray *)appTags;
-(_LSDiskUsage *)diskUsage;
-(BOOL)isUpdate;
-(BOOL)isWrapper;
-(BOOL)hasGlance;
-(unsigned long long)installType;
-(BOOL)isWebBrowser;
-(BOOL)isMailClient;
-(NSArray *)VPNPlugins;
-(BOOL)wasRenamed;
-(id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 placeholderBehavior:(long long)arg3 systemPlaceholder:(BOOL)arg4 itemID:(unsigned long long)arg5 forceInBundleContainer:(BOOL)arg6 context:(LSContext*)arg7 error:(id*)arg8 ;
-(BOOL)isArcadeApp;
-(BOOL)isWatchOnly;
-(id)appStoreToolsBuildVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)carPlayInstrumentClusterURLSchemesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_compatibilityObjectWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)_localizedNamesWithContextWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSSet *)userActivityTypes;
-(unsigned long long)applicationDownloaderDSIDWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSString *)alternateIconName;
-(void)getDeviceManagementPolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isDeletableSystemApplicationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSArray *)_iconFileNames;
-(LSiTunesMetadata *)iTunesMetadata;
-(id)externalAccessoryProtocolsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(int)_bundleModTime;
-(id)requiredDeviceCapabilitiesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(LSContext*)arg3 tableID:(unsigned)arg4 unitID:(unsigned)arg5 bundleBaseData:(const LSBundleBaseData*)arg6 error:(id*)arg7 ;
-(unsigned long long)applicationDSID;
-(unsigned long long)_rawBundleFlags;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)managedPersonas;
-(id)_rawEnvironmentVariablesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)backgroundTaskSchedulerPermittedIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_preferredLaunchArchitectureWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_backgroundTaskSchedulerPermittedIdentifiers;
-(id)managedPersonasWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)applicationFamilyID;
-(LSBundleMoreFlags)_rawMoreFlags;
-(id)supportedGameControllersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned char)_rawIconFlags;
-(void)_LSRecord_resolve_iconDictionary;
-(unsigned long long)placeholderFailureReason;
-(id)minimumSystemVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)placeholderFailureReasonWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)clearAdvertisingIdentifier;
-(id)exactBundleVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_managedPersonas;
-(id)_initWithContext:(LSContext*)arg1 bundleID:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 error:(id*)arg4 ;
-(id)companionBundleIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)installSessionIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)initForInstallMachineryWithBundleIdentifier:(id)arg1 placeholder:(BOOL)arg2 error:(id*)arg3 ;
-(unsigned long long)_containerClass;
-(id)applicationExtensionRecordsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)setAlternateIconName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isSystemPlaceholderWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)shortVersionStringWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)staticShortcutItemsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)applicationFamilyIDWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)counterpartIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)_persistentIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)maximumSystemVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_deviceIdentifierVendorNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned)codeSignatureVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(BOOL)getGenericTranslocationTargetURL:(id*)arg1 error:(id*)arg2 ;
-(BOOL)isDeletableWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve__rawEnvironmentVariables;
-(BOOL)isFileSharingEnabled;
-(BOOL)applicationHasMIDBasedSINF;
-(void)_LSRecord_resolve_uniqueInstallIdentifier;
-(NSUUID *)deviceIdentifierForVendor;
-(id)appClipMetadataWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_typeForInstallMachinery;
-(NSArray *)carPlayInstrumentClusterURLSchemes;
-(BOOL)_containerized;
-(id)initWithBundleIdentifier:(id)arg1 allowPlaceholder:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isAppStoreVendableWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)bundleContainerURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSString *)_preferredLaunchArchitecture;
-(void)_LSRecord_resolve_supportedGameControllers;
-(NSDictionary *)iconDictionary;
-(id)initWithURL:(id)arg1 allowPlaceholder:(BOOL)arg2 error:(id*)arg3 ;
-(id)teamIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)_rawBundleFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)bundleMetadataReturningError:(id*)arg1 ;
-(id)userActivityTypesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_placeholderFailureReason;
-(id)_rawIconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)localizedNameWithContext:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)diskUsageWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned)_rawPlistFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)installTypeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(LSAppClipMetadata *)appClipMetadata;
-(void)_LSRecord_resolve_carPlayInstrumentClusterURLSchemes;
-(void)_LSRecord_resolve__localizedNamesWithContext;
-(void)_LSRecord_resolve_appClipMetadata;
-(NSArray *)directionsModes;
-(BOOL)shouldShowSecurityPromptsOnSignIn;
-(void)_LSRecord_resolve_installSessionIdentifier;
-(NSArray *)audioComponents;
-(NSString *)watchKitVersion;
-(BOOL)hasComplication;
-(id)directionsModesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)uniqueInstallIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)typeForInstallMachineryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)initWithStoreItemIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)appTagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_isDeletableSystemApplication;
-(void)_LSRecord_resolve_externalAccessoryProtocols;
-(void)_LSRecord_resolve__rawBundleFlags;
-(NSString *)typeForInstallMachinery;
-(NSArray *)backgroundTaskSchedulerPermittedIdentifiers;
-(id)audioComponentsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve__preferredLaunchArchitecture;
-(NSURL *)bundleContainerURL;
-(unsigned long long)applicationDownloaderDSID;
-(NSString *)exactBundleVersion;
-(unsigned char)_rawIconFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(LSBundleMoreFlags)_rawMoreFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(int)_bundleModTimeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)applicationDSIDWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)initWithBundleIdentifierOfSystemPlaceholder:(id)arg1 error:(id*)arg2 ;
-(id)bundleVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(BOOL)supportsOnDemandResources;
-(id)_iconFileNamesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_requiredDeviceCapabilities;
-(id)iTunesMetadataWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)deviceFamiliesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_applicationState;
-(id)initForInstallMachineryWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)applicationStateWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_directionsModes;
-(id)initWithBundleIdentifierOfCompanionApplication:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsSpotlightQueryContinuation;
-(BOOL)_usesSystemPersona;
-(id)intentsRestrictedWhileLocked;
-(void)_LSRecord_resolve_appStoreToolsBuildVersion;
-(BOOL)hasCustomNotification;
-(id)VPNPluginsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_teamIdentifier;
-(NSUUID *)deviceIdentifierForAdvertising;
-(void)_LSRecord_resolve_audioComponents;
-(void)_LSRecord_resolve_userActivityTypes;
-(BOOL)supportsExternallyPlayableContent;
-(BOOL)supportsControllerUserInteraction;
-(void)_LSRecord_resolve__rawPlistFlags;
-(void)_LSRecord_resolve_applicationDownloaderDSID;
-(NSSet *)applicationExtensionRecords;
-(void)_LSRecord_resolve_counterpartIdentifiers;
-(void)_LSRecord_resolve_applicationDSID;
-(NSString *)_deviceIdentifierVendorName;
-(void)_LSRecord_resolve_companionBundleIdentifier;
-(void)_LSRecord_resolve_isSystemPlaceholder;
-(void)_LSRecord_resolve__bundleModTime;
-(void)_LSRecord_resolve__iconFileNames;
-(unsigned)_rawPlistFlags;
-(void)_LSRecord_resolve_applicationExtensionRecords;
-(BOOL)supportsCarPlayInstrumentClusterScene;
-(void)_LSRecord_resolve_iTunesMetadata;
-(void)_LSRecord_resolve_staticShortcutItems;
-(NSDictionary *)_localizedNamesWithContext;
-(BOOL)isAdHocCodeSigned;
-(BOOL)isSystemPlaceholder;
-(void)_LSRecord_resolve__deviceIdentifierVendorName;
-(BOOL)hasSettingsBundle;
-(void)_LSRecord_resolve_minimumSystemVersion;
-(void)_LSRecord_resolve_deviceFamilies;
-(void)_LSRecord_resolve_applicationFamilyID;
-(void)_LSRecord_resolve_maximumSystemVersion;
-(BOOL)canHandleWebAuthentication;
-(void)_LSRecord_resolve_exactBundleVersion;
-(NSArray *)externalAccessoryProtocols;
-(void)_LSRecord_resolve_codeSignatureVersion;
-(void)_LSRecord_resolve_shortVersionString;
-(void)_LSRecord_resolve_isAppStoreVendable;
-(BOOL)supportsAlternateIconNames;
-(NSString *)watchKitApplicationTintColorName;
-(void)_LSRecord_resolve_bundleContainerURL;
-(void)_LSRecord_resolve__rawIconFlags;
-(void)_LSRecord_resolve__rawIconDictionary;
-(BOOL)applicationMissingRequiredSINF;
-(NSDictionary *)additionalEnvironmentVariables;
-(BOOL)isDeletableSystemApplication;
-(NSString *)appStoreToolsBuildVersion;
-(void)_LSRecord_resolve_appTags;
-(void)_LSRecord_resolve_VPNPlugins;
-(id)supportedIntentMediaCategories;
-(id)localizedNameWithContext:(id)arg1 ;
-(void)_LSRecord_resolve__rawMoreFlags;
-(NSString *)companionBundleIdentifier;
-(_LSLazyPropertyList *)_rawEnvironmentVariables;
-(void)_LSRecord_resolve_isDeletable;
-(BOOL)runsIndependentlyOfCompanionApp;
-(NSArray *)supportedGameControllers;
-(NSData *)installSessionIdentifier;
-(BOOL)isAppStoreVendable;
-(NSString *)complicationPrincipalClassName;
-(BOOL)shouldSkipWatchAppInstall;
-(BOOL)isPlaceholder;
-(BOOL)supportsCarPlayDashboardScene;
-(BOOL)supportsAudiobooks;
-(BOOL)supportsPurgeableLocalStorage;
-(_LSLazyPropertyList *)_rawIconDictionary;
-(NSString *)minimumSystemVersion;
-(void)_LSRecord_resolve_diskUsage;
-(NSString *)maximumSystemVersion;
-(unsigned)codeSignatureVersion;
-(BOOL)hasParallelPlaceholder;
-(NSArray *)staticShortcutItems;
-(void)_LSRecord_resolve_installType;
-(BOOL)supportsOpenInPlace;
-(BOOL)isRemovableByInstallMachinery;
-(NSArray *)deviceFamilies;
-(NSArray *)supportedComplicationFamilies;
-(BOOL)requiresNativeExecution;
-(NSData *)uniqueInstallIdentifier;
-(unsigned char)watchKitApplicationType;
-(NSArray *)counterpartIdentifiers;
-(BOOL)supportsMultiwindow;
-(BOOL)isWrapped;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)requiredDeviceCapabilities;
-(id)supportedIntents;
-(BOOL)isLaunchProhibited;
-(NSString *)teamIdentifier;
-(BOOL)isDeletable;
-(NSString *)shortVersionString;
@end

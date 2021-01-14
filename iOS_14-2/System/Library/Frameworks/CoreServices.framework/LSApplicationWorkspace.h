/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSMutableDictionary, LSInstallProgressList;

@interface LSApplicationWorkspace : NSObject {

	NSMutableDictionary* _createdInstallProgresses;
	LSInstallProgressList* _observedInstallProgresses;

}

@property (readonly) LSInstallProgressList * observedInstallProgresses;              //@synthesize observedInstallProgresses=_observedInstallProgresses - In the implementation block
@property (readonly) NSMutableDictionary * createdInstallProgresses;                 //@synthesize createdInstallProgresses=_createdInstallProgresses - In the implementation block
+(id)activeManagedConfigurationRestrictionUUIDs;
+(id)_remoteObserver;
+(id)_defaultAppQueue;
+(id)progressQueue;
+(id)callbackQueue;
+(id)defaultWorkspace;
-(void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const SCD_Struct_LS15*)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 ;
-(void)openUserActivity:(id)arg1 usingApplicationRecord:(id)arg2 configuration:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7 ;
-(BOOL)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(BOOL)arg2 error:(id*)arg3 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 ;
-(BOOL)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2 ;
-(BOOL)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_getBundleIdentifierForBundleAtURL:(id)arg1 invokeUpdateBlockAndReregister:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)installContainerizedApplicationArtifactAtURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)relaxApplicationTypeRequirements:(BOOL)arg1 forApplicationRecord:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5 ;
-(BOOL)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failure:(unsigned long long)arg3 underlyingError:(id)arg4 source:(unsigned long long)arg5 outError:(id*)arg6 ;
-(id)observerProxy;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openUserActivityWithUUID:(id)arg1 activityType:(id)arg2 usingApplicationRecord:(id)arg3 configuration:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 error:(id*)arg6 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 delegate:(id)arg6 ;
-(BOOL)uninstallContainerizedApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(BOOL)_LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3 ;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(/*^block*/id)arg4 ;
-(BOOL)updateiTunesMetadataWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)rebuildDatabaseContentForFrameworkAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_LSPrivateSetRemovedSystemAppIdentifiers:(id)arg1 ;
-(id)remoteObserver;
-(BOOL)registerPlugin:(id)arg1 ;
-(id)syncObserverProxy;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)unregisterPlugin:(id)arg1 ;
-(id)scanForApplicationStateChangesFromRank:(id)arg1 toRank:(id)arg2 ;
-(BOOL)installPhaseFinishedForProgress:(id)arg1 ;
-(id)privateURLSchemes;
-(id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2 ;
-(void)clearCreatedProgressForBundleID:(id)arg1 ;
-(BOOL)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2 ;
-(BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)applicationsWithUIBackgroundModes;
-(void)enumerateApplicationsOfType:(unsigned long long)arg1 legacySPI:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)updateiTunesMetadataWithData:(id)arg1 forApplicationAtURL:(id)arg2 error:(id*)arg3 ;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 ;
-(void)setDefaultWebBrowserToApplicationRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultMailClientToApplicationRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)pluginsMatchingQuery:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
-(BOOL)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)establishConnection;
-(void)addObserver:(id)arg1 ;
-(BOOL)initiateProgressForApp:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)ls_injectUTTypeWithDeclaration:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(void)placeholderInstalledForIdentifier:(id)arg1 filterDowngrades:(BOOL)arg2 ;
-(BOOL)updatePlaceholderWithBundleIdentifier:(id)arg1 withInstallType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)garbageCollectDatabaseWithError:(id*)arg1 ;
-(void)sendApplicationStateChangedNotificationsFor:(id)arg1 ;
-(id)installedPlugins;
-(id)applicationsOfType:(unsigned long long)arg1 ;
-(id)createDeviceIdentifierWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)applicationForUserActivityDomainName:(id)arg1 ;
-(id)publicURLSchemes;
-(void)_openUserActivity:(id)arg1 orUserActivityUUID:(id)arg2 activityTypeForUUID:(id)arg3 withApplicationProxy:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateApplicationsOfType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void*)ls_testWithCleanDatabaseWithError:(id*)arg1 ;
-(BOOL)openURL:(id)arg1 withOptions:(id)arg2 ;
-(void)removeAllDefaultApplicationPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)scanForApplicationStateChangesWithWhitelist:(id)arg1 ;
-(NSMutableDictionary *)createdInstallProgresses;
-(BOOL)registerApplication:(id)arg1 ;
-(void)enumerateBundlesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3 ;
-(BOOL)invalidateIconCache:(id)arg1 ;
-(BOOL)openURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(id)unrestrictedApplications;
-(void)enumerateBundlesOfType:(unsigned long long)arg1 legacySPI:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(/*^block*/id)arg4 ;
-(void)_LSClearSchemaCaches;
-(id)applicationsWithVPNPlugins;
-(void)removeDeviceIdentifierForVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)openApplicationWithBundleID:(id)arg1 ;
-(id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id*)arg2 ;
-(void)_LSPrivateSyncWithMobileInstallation;
-(void)clearAdvertisingIdentifier;
-(id)applicationsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 ;
-(id)optionsFromOpenConfiguration:(id)arg1 ;
-(BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)openURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enumerateBundlesOfType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)removedSystemApplications;
-(void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)applicationsAvailableForOpeningDocument:(id)arg1 ;
-(BOOL)restoreSystemApplication:(id)arg1 ;
-(BOOL)isVersion:(id)arg1 greaterThanOrEqualToVersion:(id)arg2 ;
-(BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(id)applicationProxiesWithPlistFlags:(unsigned)arg1 bundleFlags:(unsigned long long)arg2 ;
-(id)_LSPrivateRemovedSystemAppIdentifiers;
-(void)ls_resetTestingDatabase;
-(id)placeholderApplications;
-(void)_LSPrivateUpdateAppRemovalRestrictions;
-(BOOL)isApplicationAvailableToOpenURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2 ;
-(id)deviceIdentifierForVendor;
-(id)scanForForDeletableSystemApps;
-(id)legacyApplicationProxiesListWithType:(unsigned long long)arg1 ;
-(id)applicationForUserActivityType:(id)arg1 ;
-(LSInstallProgressList *)observedInstallProgresses;
-(id)applicationsWithAudioComponents;
-(id)directionsApplications;
-(void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2 ;
-(BOOL)unregisterApplication:(id)arg1 ;
-(id)applicationsAvailableForOpeningURL:(id)arg1 ;
-(BOOL)installApplication:(id)arg1 withOptions:(id)arg2 ;
-(void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2 ;
-(BOOL)updateSINFWithData:(id)arg1 forApplicationAtURL:(id)arg2 error:(id*)arg3 ;
-(id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(BOOL)arg2 ;
-(BOOL)registerApplicationDictionary:(id)arg1 ;
-(id)deviceIdentifierForAdvertising;
-(BOOL)_LSPrivateDatabaseNeedsRebuild;
-(id)URLOverrideForURL:(id)arg1 ;
-(id)applicationForOpeningResource:(id)arg1 ;
-(id)URLOverrideForNewsURL:(id)arg1 ;
-(id)allApplications;
-(BOOL)allowsAlternateIcons;
-(void)removeObserver:(id)arg1 ;
-(id)allInstalledApplications;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(id)applicationsForUserActivityType:(id)arg1 ;
@end


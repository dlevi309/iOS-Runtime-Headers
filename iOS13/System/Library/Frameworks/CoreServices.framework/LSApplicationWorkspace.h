/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)progressQueue;
+(id)_remoteObserver;
+(id)callbackQueue;
+(id)defaultWorkspace;
+(id)activeManagedConfigurationRestrictionUUIDs;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)establishConnection;
-(id)remoteObserver;
-(id)observerProxy;
-(id)applicationProxiesWithPlistFlags:(unsigned)arg1 bundleFlags:(unsigned long long)arg2 ;
-(id)applicationsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)openURL:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)openURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(id)applicationForUserActivityType:(id)arg1 ;
-(void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const SCD_Struct_LS11*)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 ;
-(id)optionsFromOpenConfiguration:(id)arg1 ;
-(void)enumerateBundlesOfType:(unsigned long long)arg1 legacySPI:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)enumerateApplicationsOfType:(unsigned long long)arg1 legacySPI:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 ;
-(BOOL)installPhaseFinishedForProgress:(id)arg1 ;
-(void)placeholderInstalledForIdentifier:(id)arg1 filterDowngrades:(BOOL)arg2 ;
-(BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)clearCreatedProgressForBundleID:(id)arg1 ;
-(BOOL)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2 ;
-(BOOL)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 error:(id*)arg6 ;
-(BOOL)allowsAlternateIcons;
-(id)syncObserverProxy;
-(id)applicationsAvailableForOpeningURL:(id)arg1 ;
-(void)enumerateApplicationsOfType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateBundlesOfType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2 ;
-(id)directionsApplications;
-(id)applicationsWithUIBackgroundModes;
-(id)applicationsWithAudioComponents;
-(id)applicationsWithVPNPlugins;
-(id)applicationsForUserActivityType:(id)arg1 ;
-(id)applicationForUserActivityDomainName:(id)arg1 ;
-(BOOL)openApplicationWithBundleID:(id)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 delegate:(id)arg6 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3 ;
-(void)openURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)installedPlugins;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(/*^block*/id)arg4 ;
-(void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)pluginsMatchingQuery:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(id)removedSystemApplications;
-(id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id*)arg2 ;
-(id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2 ;
-(BOOL)installApplication:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)restoreSystemApplication:(id)arg1 ;
-(BOOL)registerApplicationDictionary:(id)arg1 ;
-(BOOL)registerApplication:(id)arg1 ;
-(BOOL)unregisterApplication:(id)arg1 ;
-(BOOL)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateiTunesMetadataWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failure:(unsigned long long)arg3 underlyingError:(id)arg4 source:(unsigned long long)arg5 outError:(id*)arg6 ;
-(BOOL)initiateProgressForApp:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)registerPlugin:(id)arg1 ;
-(BOOL)unregisterPlugin:(id)arg1 ;
-(BOOL)garbageCollectDatabaseWithError:(id*)arg1 ;
-(BOOL)isVersion:(id)arg1 greaterThanOrEqualToVersion:(id)arg2 ;
-(BOOL)invalidateIconCache:(id)arg1 ;
-(void)clearAdvertisingIdentifier;
-(id)deviceIdentifierForAdvertising;
-(id)deviceIdentifierForVendor;
-(id)createDeviceIdentifierWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)removeDeviceIdentifierForVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2 ;
-(BOOL)_LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3 ;
-(void)_LSPrivateSyncWithMobileInstallation;
-(void)_LSPrivateUpdateAppRemovalRestrictions;
-(void)_LSPrivateSetRemovedSystemAppIdentifiers:(id)arg1 ;
-(id)_LSPrivateRemovedSystemAppIdentifiers;
-(BOOL)_LSPrivateDatabaseNeedsRebuild;
-(void)_LSClearSchemaCaches;
-(void)sendApplicationStateChangedNotificationsFor:(id)arg1 ;
-(id)scanForApplicationStateChangesFromRank:(id)arg1 toRank:(id)arg2 ;
-(id)scanForApplicationStateChangesWithWhitelist:(id)arg1 ;
-(id)scanForForDeletableSystemApps;
-(void*)ls_testWithCleanDatabaseWithError:(id*)arg1 ;
-(BOOL)ls_injectUTTypeWithDeclaration:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(void)ls_resetTestingDatabase;
-(NSMutableDictionary *)createdInstallProgresses;
-(LSInstallProgressList *)observedInstallProgresses;
-(id)legacyApplicationProxiesListWithType:(unsigned long long)arg1 ;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(/*^block*/id)arg4 ;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 ;
-(void)enumerateBundlesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)applicationsOfType:(unsigned long long)arg1 ;
-(id)allInstalledApplications;
-(id)placeholderApplications;
-(id)unrestrictedApplications;
-(id)allApplications;
-(id)applicationsAvailableForOpeningDocument:(id)arg1 ;
-(id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(BOOL)arg2 ;
-(BOOL)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isApplicationAvailableToOpenURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(BOOL)arg2 error:(id*)arg3 ;
-(id)applicationForOpeningResource:(id)arg1 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(id)publicURLSchemes;
-(id)privateURLSchemes;
-(id)URLOverrideForURL:(id)arg1 ;
-(id)URLOverrideForNewsURL:(id)arg1 ;
@end


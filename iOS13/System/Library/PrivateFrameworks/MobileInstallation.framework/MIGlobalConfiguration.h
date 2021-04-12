/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
*/


@class NSSet, NSDictionary, NSURL, NSArray, NSString;

@interface MIGlobalConfiguration : NSObject {

	BOOL _allowDeletableSystemApps;
	unsigned _uid;
	unsigned _gid;
	NSSet* _allFrameworksDirectories;
	NSDictionary* _coreServicesAppBundleIDToInfoMap;
	NSDictionary* _systemAppBundleIDToInfoMap;
	NSDictionary* _stagedSystemAppBundleIDToInfoMap;
	NSDictionary* _systemAppPlaceholderBundleIDToInfoMap;
	NSDictionary* _internalAppBundleIDToInfoMap;
	NSSet* _builtInFrameworkBundleIDs;
	NSSet* _systemAppPlaceholderBundleIDs;
	NSSet* _systemAppPlaceholderPluginBundleIDs;
	NSSet* _systemAppPlaceholderXPCServiceBundleIDs;
	NSURL* _installdPath;
	NSURL* _mobilePath;
	NSURL* _rootPath;

}

@property (nonatomic,readonly) NSURL * installdPath;                                                   //@synthesize installdPath=_installdPath - In the implementation block
@property (nonatomic,readonly) NSURL * mobilePath;                                                     //@synthesize mobilePath=_mobilePath - In the implementation block
@property (nonatomic,readonly) NSURL * rootPath;                                                       //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) BOOL allowDeletableSystemApps;                                          //@synthesize allowDeletableSystemApps=_allowDeletableSystemApps - In the implementation block
@property (nonatomic,readonly) NSURL * stagingRoot; 
@property (nonatomic,readonly) NSURL * logDirectory; 
@property (nonatomic,readonly) NSURL * coreServicesDirectory; 
@property (nonatomic,readonly) NSURL * systemAppsDirectory; 
@property (nonatomic,readonly) NSURL * systemAppPlaceholdersDirectory; 
@property (nonatomic,readonly) NSURL * systemAppDetachedSignaturesDirectory; 
@property (nonatomic,readonly) NSURL * internalAppsDirectory; 
@property (nonatomic,readonly) NSURL * developerAppsDirectory; 
@property (nonatomic,readonly) NSURL * stagedSystemAppsDirectory; 
@property (nonatomic,readonly) NSURL * factoryMountDirectory; 
@property (nonatomic,readonly) NSURL * systemFrameworksRootDirectory; 
@property (nonatomic,readonly) NSURL * internalFrameworksRootDirectory; 
@property (nonatomic,readonly) NSURL * developerFrameworksRootDirectory; 
@property (nonatomic,copy,readonly) NSSet * allFrameworksDirectories;                                  //@synthesize allFrameworksDirectories=_allFrameworksDirectories - In the implementation block
@property (nonatomic,readonly) NSURL * dataDirectory; 
@property (nonatomic,readonly) NSURL * cachesDirectory; 
@property (nonatomic,readonly) NSURL * backedUpStateDirectory; 
@property (nonatomic,copy,readonly) NSArray * appBundleMetadataItemNames; 
@property (nonatomic,copy,readonly) NSArray * appUserDataItemNames; 
@property (nonatomic,copy,readonly) NSSet * installationBlacklist; 
@property (nonatomic,copy,readonly) NSSet * builtInApplicationBundleIDs; 
@property (nonatomic,copy,readonly) NSSet * builtInFrameworkBundleIDs;                                 //@synthesize builtInFrameworkBundleIDs=_builtInFrameworkBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * systemAppPlaceholderBundleIDs;                             //@synthesize systemAppPlaceholderBundleIDs=_systemAppPlaceholderBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * systemAppPlaceholderPluginBundleIDs;                       //@synthesize systemAppPlaceholderPluginBundleIDs=_systemAppPlaceholderPluginBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * systemAppPlaceholderXPCServiceBundleIDs;                   //@synthesize systemAppPlaceholderXPCServiceBundleIDs=_systemAppPlaceholderXPCServiceBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * systemAppBundleIDToInfoMap;                         //@synthesize systemAppBundleIDToInfoMap=_systemAppBundleIDToInfoMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stagedSystemAppBundleIDToInfoMap;                   //@synthesize stagedSystemAppBundleIDToInfoMap=_stagedSystemAppBundleIDToInfoMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * systemAppPlaceholderBundleIDToInfoMap;              //@synthesize systemAppPlaceholderBundleIDToInfoMap=_systemAppPlaceholderBundleIDToInfoMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * coreServicesAppBundleIDToInfoMap;                   //@synthesize coreServicesAppBundleIDToInfoMap=_coreServicesAppBundleIDToInfoMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * internalAppBundleIDToInfoMap;                       //@synthesize internalAppBundleIDToInfoMap=_internalAppBundleIDToInfoMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * diskImageAppBundleIDToInfoMap; 
@property (nonatomic,readonly) unsigned uid;                                                           //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) unsigned gid;                                                           //@synthesize gid=_gid - In the implementation block
@property (nonatomic,readonly) NSURL * oldDataDirectoryPath; 
@property (nonatomic,readonly) NSURL * oldLoggingPath; 
@property (nonatomic,readonly) NSURL * oldArchiveDirectory; 
@property (nonatomic,readonly) NSURL * roleUserMigrationMarkerFilePath; 
@property (nonatomic,readonly) NSURL * systemAppInstallStateFilePath; 
@property (nonatomic,readonly) NSURL * backupSystemAppInstallStateFilePath; 
@property (nonatomic,copy,readonly) NSString * alternateThinningModelIdentifier; 
@property (nonatomic,copy,readonly) NSArray * diskImageApplicationsDirectories; 
@property (nonatomic,copy,readonly) NSURL * migrationPlistURL; 
@property (nonatomic,copy,readonly) NSURL * lastBuildInfoFileURL; 
+(id)sharedInstance;
-(id)init;
-(unsigned)uid;
-(NSURL *)dataDirectory;
-(unsigned)gid;
-(NSURL *)cachesDirectory;
-(NSURL *)logDirectory;
-(id)disableSystemAppDeletionCanaryFile;
-(NSURL *)mobilePath;
-(NSURL *)backedUpStateDirectory;
-(NSURL *)installdPath;
-(NSURL *)rootPath;
-(NSURL *)systemFrameworksRootDirectory;
-(NSURL *)internalFrameworksRootDirectory;
-(id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2 loadingAdditionalKeys:(id)arg3 ;
-(id)_bundleIDMapForAppsInDirectory:(id)arg1 loadingAdditionalKeys:(id)arg2 ;
-(NSDictionary *)systemAppBundleIDToInfoMap;
-(NSDictionary *)internalAppBundleIDToInfoMap;
-(NSDictionary *)diskImageAppBundleIDToInfoMap;
-(NSURL *)coreServicesDirectory;
-(id)_bundleIDMapForAppsInDirectory:(id)arg1 ;
-(NSURL *)systemAppsDirectory;
-(NSURL *)stagedSystemAppsDirectory;
-(NSURL *)systemAppPlaceholdersDirectory;
-(NSURL *)internalAppsDirectory;
-(NSSet *)allFrameworksDirectories;
-(id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2 ;
-(NSDictionary *)systemAppPlaceholderBundleIDToInfoMap;
-(NSArray *)diskImageApplicationsDirectories;
-(id)_mountFromToOnMap;
-(id)_mountPointForDevice:(unsigned)arg1 mountFromToOnMap:(id)arg2 ;
-(NSURL *)developerAppsDirectory;
-(id)diskImageMountPoints;
-(BOOL)allowDeletableSystemApps;
-(NSURL *)oldDataDirectoryPath;
-(NSURL *)oldLoggingPath;
-(NSURL *)oldArchiveDirectory;
-(NSURL *)roleUserMigrationMarkerFilePath;
-(NSURL *)systemAppInstallStateFilePath;
-(NSURL *)backupSystemAppInstallStateFilePath;
-(NSURL *)stagingRoot;
-(NSURL *)systemAppDetachedSignaturesDirectory;
-(NSURL *)factoryMountDirectory;
-(NSURL *)developerFrameworksRootDirectory;
-(NSArray *)appBundleMetadataItemNames;
-(NSArray *)appUserDataItemNames;
-(NSSet *)installationBlacklist;
-(NSSet *)builtInApplicationBundleIDs;
-(NSDictionary *)coreServicesAppBundleIDToInfoMap;
-(NSDictionary *)stagedSystemAppBundleIDToInfoMap;
-(NSSet *)builtInFrameworkBundleIDs;
-(NSSet *)systemAppPlaceholderBundleIDs;
-(NSSet *)systemAppPlaceholderPluginBundleIDs;
-(NSSet *)systemAppPlaceholderXPCServiceBundleIDs;
-(void)reScanSystemApps;
-(void)reScanCoreServicesApps;
-(void)reScanInternalApps;
-(NSString *)alternateThinningModelIdentifier;
-(NSURL *)migrationPlistURL;
-(NSURL *)lastBuildInfoFileURL;
@end


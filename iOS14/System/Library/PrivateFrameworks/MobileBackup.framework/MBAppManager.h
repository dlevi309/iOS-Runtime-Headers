/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {

	MBSettingsContext* _settingsContext;
	NSMutableDictionary* _containersByID;
	NSMutableDictionary* _systemDataContainersByID;
	NSMutableDictionary* _systemSharedContainersByID;

}
+(id)_allPersistedDisabledDomainNames;
+(void)_persistDisabledDomainNames:(id)arg1 ;
+(id)appManager;
+(id)appManagerWithSettingsContext:(id)arg1 ;
-(id)allApps;
-(id)containerWithIdentifier:(id)arg1 ;
-(id)allDisabledDomainNames;
-(id)initWithSettingsContext:(id)arg1 ;
-(id)_subdomainNamesForAppDomainNames:(id)arg1 ;
-(id)_allDisabledDomainNames;
-(BOOL)_isContainerizedAppDomain:(id)arg1 ;
-(void)_reconcileBooksAndHealthInDisabledDomainsList:(id)arg1 ;
-(id)_copyUserAppsWithError:(id*)arg1 ;
-(id)_copySystemContainersWithError:(id*)arg1 ;
-(id)_copySafeHarborsWithError:(id*)arg1 ;
-(id)_copySystemPluginsWithError:(id*)arg1 ;
-(id)_copyAppsWithPlists:(id)arg1 safeHarbor:(BOOL)arg2 error:(id*)arg3 ;
-(id)_copySystemPluginsWithPlists:(id)arg1 error:(id*)arg2 ;
-(id)_copySystemContainersWithPlists:(id)arg1 error:(id*)arg2 ;
-(void)_syncDisabledDomainsWithAllInstalledAppDomains:(id)arg1 ;
-(id)createSafeHarborForContainer:(id)arg1 usingIntermediateRestoreDir:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)moveAppDataToSafeHarborForContainer:(id)arg1 usingIntermediateRestoreDir:(BOOL)arg2 withError:(id*)arg3 ;
-(BOOL)isDomainNameEnabled:(id)arg1 ;
-(void)removeAllDisabledDomainNames;
-(void)setEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(id)allRestrictedDomainNames;
-(BOOL)loadAppsWithSafeHarbors:(BOOL)arg1 error:(id*)arg2 ;
-(id)allSystemContainers;
-(id)systemDataContainerWithIdentifier:(id)arg1 ;
-(id)appWithIdentifier:(id)arg1 ;
-(id)systemSharedContainerWithIdentifier:(id)arg1 ;
-(void)removeOldSafeHarbors;
-(void)removeStaleStateForUninstalledApps;
-(id)createSafeHarborForContainer:(id)arg1 error:(id*)arg2 ;
-(BOOL)moveAppDataToSafeHarborForContainer:(id)arg1 withError:(id*)arg2 ;
-(id)allContainers;
-(id)allPlugins;
-(void)dealloc;
@end


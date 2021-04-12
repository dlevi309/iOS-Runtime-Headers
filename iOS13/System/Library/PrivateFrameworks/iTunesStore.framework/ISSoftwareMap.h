/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSArray;

@interface ISSoftwareMap : NSObject {

	NSArray* _applications;

}

@property (nonatomic,readonly) NSArray * applications; 
+(id)applicationForBundleIdentifier:(id)arg1 ;
+(id)loadedMap;
+(void)startObservingNotifications;
+(void)invalidateCurrentMap;
+(BOOL)currentMapIsValid;
+(void)setCurrentMap:(id)arg1 ;
+(id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2 ;
+(id)currentMap;
+(id)applicationForPluginBundleIdentifier:(id)arg1 extensionType:(id)arg2 ;
+(id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2 ;
+(id)_newSoftwareUpdateDictionaryForApplication:(id)arg1 ;
+(id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3 ;
+(void)enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)haveApplicationsOfType:(id)arg1 ;
+(id)applicationForPluginBundleIdentifier:(id)arg1 ;
+(void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)removableSystemApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)_startWatchingInstallationNotifications;
-(id)init;
-(void)dealloc;
-(NSArray *)applications;
-(id)applicationForBundleIdentifier:(id)arg1 ;
-(id)applicationForItemIdentifier:(id)arg1 ;
-(void)_loadFromMobileInstallation;
-(id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1 ;
-(id)copySoftwareUpdatesPropertyList;
@end


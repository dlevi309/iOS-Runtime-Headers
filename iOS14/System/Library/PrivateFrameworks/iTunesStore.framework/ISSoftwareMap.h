/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSArray;

@interface ISSoftwareMap : NSObject {

	NSArray* _applications;

}

@property (nonatomic,readonly) NSArray * applications; 
+(id)currentMap;
+(void)setCurrentMap:(id)arg1 ;
+(void)startObservingNotifications;
+(id)applicationForBundleIdentifier:(id)arg1 ;
+(id)loadedMap;
+(void)invalidateCurrentMap;
+(BOOL)currentMapIsValid;
+(id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2 ;
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
-(NSArray *)applications;
-(id)applicationForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)applicationForItemIdentifier:(id)arg1 ;
-(void)_loadFromMobileInstallation;
-(id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1 ;
-(id)copySoftwareUpdatesPropertyList;
@end


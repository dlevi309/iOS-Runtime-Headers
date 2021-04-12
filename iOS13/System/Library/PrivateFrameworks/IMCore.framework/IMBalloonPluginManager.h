/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary, NSString, NSMutableSet;

@interface IMBalloonPluginManager : NSObject {

	Class _richLinksDataSourceClass;
	NSMutableDictionary* _pluginsMap;
	id _extensionMatchingContext;
	id _highMemoryExtensionMatchingContext;
	NSString* _pluginMetaDataFolder;
	NSMutableDictionary* _pluginIDToMetadataCache;
	NSMutableSet* _pluginsToRemoveAfterExtensionsUpdate;

}

@property (nonatomic,retain) NSMutableDictionary * pluginsMap;                                 //@synthesize pluginsMap=_pluginsMap - In the implementation block
@property (nonatomic,retain) id extensionMatchingContext;                                      //@synthesize extensionMatchingContext=_extensionMatchingContext - In the implementation block
@property (nonatomic,retain) id highMemoryExtensionMatchingContext;                            //@synthesize highMemoryExtensionMatchingContext=_highMemoryExtensionMatchingContext - In the implementation block
@property (nonatomic,retain) NSString * pluginMetaDataFolder;                                  //@synthesize pluginMetaDataFolder=_pluginMetaDataFolder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pluginIDToMetadataCache;                    //@synthesize pluginIDToMetadataCache=_pluginIDToMetadataCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * pluginsToRemoveAfterExtensionsUpdate;              //@synthesize pluginsToRemoveAfterExtensionsUpdate=_pluginsToRemoveAfterExtensionsUpdate - In the implementation block
@property (nonatomic,retain,readonly) Class richLinksDataSourceClass;                          //@synthesize richLinksDataSourceClass=_richLinksDataSourceClass - In the implementation block
+(id)sharedInstance;
+(id)_extensionBlacklist;
+(BOOL)isRunningPPT;
+(void)disableExtensionDiscovery;
+(void)setIsRunningPPT:(BOOL)arg1 ;
-(id)balloonControllerForIMChatItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)extensionMatchingContext;
-(void)setExtensionMatchingContext:(id)arg1 ;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(Class)richLinksDataSourceClass;
-(id)balloonPluginForBundleID:(id)arg1 ;
-(id)existingDataSourceForMessageGUID:(id)arg1 bundleID:(id)arg2 ;
-(Class)dataSourceClassForBundleID:(id)arg1 ;
-(void)setPluginEnabled:(BOOL)arg1 identifier:(id)arg2 ;
-(void)removePluginWithBundleID:(id)arg1 ;
-(id)allPlugins;
-(void)insertDataSource:(id)arg1 forGUID:(id)arg2 ;
-(void)pluginChatItem:(id)arg1 didRelinquishReusableController:(id)arg2 ;
-(void)pluginChatItem:(id)arg1 didRelenquishNonResuableController:(id)arg2 ;
-(id)systemBundleIdentifierForPluginIdentifier:(id)arg1 ;
-(id)dataSourceForPluginPayload:(id)arg1 ;
-(NSMutableDictionary *)pluginsMap;
-(id)_insertPluginForExtension:(id)arg1 balloonProviderBundle:(id)arg2 andTimingCollection:(id)arg3 ;
-(void)_loadAllDataSources;
-(NSString *)pluginMetaDataFolder;
-(NSMutableDictionary *)pluginIDToMetadataCache;
-(id)_pluginPlistPath:(id)arg1 ;
-(id)_infoPlistPathForPluginCreatingFolderIfNeeded:(id)arg1 ;
-(id)_metadataForPluginIdentifier:(id)arg1 ;
-(void)_storeMetadata:(id)arg1 _forPlugin:(id)arg2 ;
-(id)_identifiersForAppPlugins;
-(id)_pluginsForWhichWeHaveMetadata;
-(void)_deleteMetaDataForPlugins:(id)arg1 ;
-(id)_loadAppExtensionDataSourcesForExtensionPoint:(id)arg1 ;
-(void)setHighMemoryExtensionMatchingContext:(id)arg1 ;
-(void)_updatePluginsForExtensions:(id)arg1 extensionPoint:(id)arg2 ;
-(void)_updatePluginsForBundles:(id)arg1 ;
-(void)setPluginsToRemoveAfterExtensionsUpdate:(NSMutableSet *)arg1 ;
-(void)_removePluginsWithDelay;
-(id)_appProxyBundleIdentifiersForAppPlugins;
-(id)_proxyIdentifiersForPlugins;
-(NSMutableSet *)pluginsToRemoveAfterExtensionsUpdate;
-(id)_insertPluginForAppBundle:(id)arg1 balloonProviderBundle:(id)arg2 ;
-(void)_setPluginsToRemoveAndCallSelectorWithDelay:(id)arg1 ;
-(void)_moveExtensionDataSourcesFromMessagesExtensionPluginToAppExtensions;
-(id)_currentlyInstalledExtensionsExcludingExtensionPoint:(id)arg1 ;
-(BOOL)_isServerBlackListedBundle:(id)arg1 serverBag:(id)arg2 ;
-(BOOL)_isExtensionBlackListed:(id)arg1 ;
-(void)_clearPluginMetadataForUninstalledApps;
-(void)_removePluginsForIdentifiers:(id)arg1 ;
-(void)_findPluginsInPaths:(id)arg1 ;
-(void)_findPluginsInPathInternal:(id)arg1 ;
-(void)_loadAppBundleDataSources;
-(void)_loadAppExtensionDataSources;
-(id)_fallBackMessagesExtensionPluginForBundleID:(id)arg1 ;
-(id)localParticipantIdentifierForAppID:(id)arg1 conversationID:(id)arg2 ;
-(id)recipientIDForRecipient:(id)arg1 appID:(id)arg2 ;
-(id)conversationID:(id)arg1 appID:(id)arg2 ;
-(void)loadExtensionWithIdentifierIfNeeded:(id)arg1 ;
-(void)setPluginsMap:(NSMutableDictionary *)arg1 ;
-(id)highMemoryExtensionMatchingContext;
-(void)setPluginMetaDataFolder:(NSString *)arg1 ;
-(void)setPluginIDToMetadataCache:(NSMutableDictionary *)arg1 ;
@end


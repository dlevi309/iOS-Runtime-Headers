/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSArray, HDDaemon, NSDictionary;

@interface HDPluginManager : NSObject {

	NSArray* _plugins;
	NSArray* _legacyPlugins;
	HDDaemon* _daemon;
	NSArray* _allowablePluginDirectoryPaths;
	NSDictionary* _legacyPluginsByIdentifier;

}

@property (nonatomic,retain) NSDictionary * legacyPluginsByIdentifier;              //@synthesize legacyPluginsByIdentifier=_legacyPluginsByIdentifier - In the implementation block
@property (assign,nonatomic,__weak) HDDaemon * daemon;                              //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) NSArray * allowablePluginDirectoryPaths;                 //@synthesize allowablePluginDirectoryPaths=_allowablePluginDirectoryPaths - In the implementation block
-(HDDaemon *)daemon;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(id)pluginForIdentifier:(id)arg1 ;
-(id)pluginsForProtocol:(id)arg1 ;
-(id)initWithDaemon:(id)arg1 ;
-(id)pluginsConformingToProtocol:(id)arg1 ;
-(id)createExtensionsForDaemon:(id)arg1 ;
-(id)legacyPlugins;
-(id)createExtensionsForProfile:(id)arg1 ;
-(id)_builtInPluginClasses;
-(void)_loadPlugins;
-(id)_pluginsDirectoryPath;
-(id)_internalPluginsDirectoryPaths;
-(id)_pluginDirectoryPaths;
-(id)_principalClassProtocols;
-(id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id*)arg3 ;
-(id)_pluginClasses;
-(id)_createPluginsFromClasses:(id)arg1 ;
-(id)_createLegacyPluginsFromClasses:(id)arg1 ;
-(Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2 ;
-(NSArray *)allowablePluginDirectoryPaths;
-(void)setAllowablePluginDirectoryPaths:(NSArray *)arg1 ;
-(NSDictionary *)legacyPluginsByIdentifier;
-(void)setLegacyPluginsByIdentifier:(NSDictionary *)arg1 ;
@end


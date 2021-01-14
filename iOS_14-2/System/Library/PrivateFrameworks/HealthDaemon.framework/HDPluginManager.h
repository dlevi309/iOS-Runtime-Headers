/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {

	NSArray* _plugins;
	HDDaemon* _daemon;
	NSArray* _allowablePluginDirectoryPaths;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;                           //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) NSArray * allowablePluginDirectoryPaths;              //@synthesize allowablePluginDirectoryPaths=_allowablePluginDirectoryPaths - In the implementation block
-(void)setDaemon:(HDDaemon *)arg1 ;
-(HDDaemon *)daemon;
-(id)_pluginDirectoryPaths;
-(void)setAllowablePluginDirectoryPaths:(NSArray *)arg1 ;
-(id)_principalClassProtocols;
-(id)initWithDaemon:(id)arg1 ;
-(id)createExtensionsForProfile:(id)arg1 ;
-(NSArray *)allowablePluginDirectoryPaths;
-(id)_pluginsDirectoryPath;
-(id)_builtInPluginClasses;
-(Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2 ;
-(id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id*)arg3 ;
-(id)createExtensionsForDaemon:(id)arg1 ;
-(id)_createPluginsFromClasses:(id)arg1 ;
-(void)_loadPlugins;
-(id)pluginsConformingToProtocol:(id)arg1 ;
-(id)_internalPluginsDirectoryPaths;
-(id)_pluginClasses;
@end


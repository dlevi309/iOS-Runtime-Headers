/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@class AMSUIWebClientContext, NSDictionary, NSMutableDictionary, NSArray;

@interface AMSUIWebPluginLoader : NSObject {

	AMSUIWebClientContext* _context;
	NSDictionary* _installedPluginURLs;
	NSMutableDictionary* _loadedPluginsMap;

}

@property (nonatomic,__weak,readonly) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSDictionary * installedPluginURLs;                  //@synthesize installedPluginURLs=_installedPluginURLs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * loadedPluginsMap;                //@synthesize loadedPluginsMap=_loadedPluginsMap - In the implementation block
@property (nonatomic,readonly) NSArray * loadedPlugins; 
-(id)initWithContext:(id)arg1 ;
-(AMSUIWebClientContext *)context;
-(NSArray *)loadedPlugins;
-(id)pluginForBundleIdentifier:(id)arg1 ;
-(id)_loadInstalledPlugins;
-(NSMutableDictionary *)loadedPluginsMap;
-(NSDictionary *)installedPluginURLs;
-(void)setLoadedPluginsMap:(NSMutableDictionary *)arg1 ;
@end


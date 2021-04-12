/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIAccessing.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface PROLegacyPluginManager : NSObject <PROAPIAccessing> {

	NSMutableDictionary* _pluginRegistry;
	NSMutableArray* _pluginProtocols;
	NSMutableArray* _pluginSearchDirectories;
	CFDictionaryRef _apiRegistry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pluginManager;
-(id)init;
-(void)dealloc;
-(id)apiForProtocol:(id)arg1 ;
-(int)scanForPluginsInDirectory:(id)arg1 ;
-(void)localizeKey:(id)arg1 withDefault:(id)arg2 forPlugin:(id)arg3 fromBundle:(id)arg4 ;
-(int)registerPluginWithDictionary:(id)arg1 withClassName:(id)arg2 withBundle:(id)arg3 withProtocolName:(id)arg4 ;
-(int)registerBundle:(id)arg1 withPluginDictionaryList:(id)arg2 ;
-(int)registerBundleDynamic:(id)arg1 ;
-(int)getPluginGroupNames:(id)arg1 forProtocol:(id)arg2 ;
-(int)getPluginClassNames:(id)arg1 forGroupName:(id)arg2 ;
-(int)getPluginDisplayNames:(id)arg1 forGroupName:(id)arg2 forProtocol:(id)arg3 ;
-(int)loadPluginClass:(Class*)arg1 withName:(id)arg2 fromBundlePath:(id)arg3 ;
-(int)addPluginProtocol:(id)arg1 ;
-(int)addPluginSearchDirectory:(id)arg1 ;
-(int)setPluginSearchDirectories:(id)arg1 ;
-(int)setApiObject:(id)arg1 forProtocol:(id)arg2 ;
-(int)setApiObjects:(id)arg1 forProtocols:(id)arg2 ;
-(int)removeApiForProtocol:(id)arg1 ;
-(int)scanForPlugins;
-(int)getNumPluginsForProtocol:(id)arg1 ;
-(int)getPluginDisplayNames:(id)arg1 forProtocol:(id)arg2 ;
-(int)getPluginClassNames:(id)arg1 forProtocol:(id)arg2 ;
-(int)getPluginGroupNames:(id)arg1 ;
-(int)getPluginClassNames:(id)arg1 forGroupName:(id)arg2 forProtocol:(id)arg3 ;
-(int)getPluginDisplayNames:(id)arg1 forGroupName:(id)arg2 ;
-(int)getPluginInfoDictionaries:(id)arg1 forProtocol:(id)arg2 ;
-(int)getBundlePath:(id*)arg1 forPluginClassName:(id)arg2 ;
-(int)getPluginClass:(Class*)arg1 forPluginClassName:(id)arg2 ;
-(int)getPluginClass:(Class*)arg1 forPluginDisplayName:(id)arg2 ;
-(int)getPluginClass:(Class*)arg1 forPluginDisplayName:(id)arg2 forProtocol:(id)arg3 ;
@end


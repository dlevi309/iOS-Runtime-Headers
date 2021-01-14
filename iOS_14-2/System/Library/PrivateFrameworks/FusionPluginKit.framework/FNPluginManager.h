/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
*/


@class NSMutableSet, NSMutableDictionary;

@interface FNPluginManager : NSObject {

	NSMutableSet* _pluginBundlePaths;
	NSMutableSet* _pluginBundles;
	NSMutableSet* _pluginInstances;
	NSMutableDictionary* _pluginMessage;

}

@property (nonatomic,retain) NSMutableSet * pluginBundlePaths;                 //@synthesize pluginBundlePaths=_pluginBundlePaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * pluginBundles;                     //@synthesize pluginBundles=_pluginBundles - In the implementation block
@property (nonatomic,retain) NSMutableSet * pluginInstances;                   //@synthesize pluginInstances=_pluginInstances - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pluginMessage;              //@synthesize pluginMessage=_pluginMessage - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSMutableSet *)pluginBundles;
-(void)loadBundles;
-(id)getBundlePaths:(id)arg1 ;
-(unsigned long long)initPlugins;
-(id)getClient:(id)arg1 ;
-(unsigned long long)startPlugins;
-(unsigned long long)stopPlugins;
-(unsigned long long)removePlugins;
-(NSMutableSet *)pluginInstances;
-(NSMutableSet *)pluginBundlePaths;
-(void)setPluginBundlePaths:(NSMutableSet *)arg1 ;
-(void)setPluginBundles:(NSMutableSet *)arg1 ;
-(void)setPluginInstances:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)pluginMessage;
-(void)setPluginMessage:(NSMutableDictionary *)arg1 ;
@end


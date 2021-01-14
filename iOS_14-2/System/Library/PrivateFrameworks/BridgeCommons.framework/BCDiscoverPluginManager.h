/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgeCommons.framework/BridgeCommons
*/


#import <BridgeCommons/BridgeCommons-Structs.h>
@class NSArray;

@interface BCDiscoverPluginManager : NSObject {

	os_unfair_lock_s _discoverPluginsLock;
	NSArray* _discoverPlugins;

}

@property (nonatomic,copy) NSArray * discoverPlugins;                             //@synthesize discoverPlugins=_discoverPlugins - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s discoverPluginsLock;              //@synthesize discoverPluginsLock=_discoverPluginsLock - In the implementation block
+(id)_discoverPluginDirectoryURL;
+(id)discoverPluginBundles;
-(id)init;
-(id)sortedPluginsBySectionForInput:(id)arg1 ;
-(id)_buildDiscoverPlugins;
-(NSArray *)discoverPlugins;
-(void)setDiscoverPlugins:(NSArray *)arg1 ;
-(os_unfair_lock_s)discoverPluginsLock;
@end


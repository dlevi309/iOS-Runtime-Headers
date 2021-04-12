/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NTKBundleComplicationDataSourceLoader : NSObject <NSCopying> {

	NSArray* _cachedDataSources;
	os_unfair_lock_s _cachedDataSourcesLock;

}
+(id)complicationDataSourceLoaderWithDirectories:(id)arg1 ;
+(id)disabledComplicationDataSourceLoader;
+(id)defaultComplicationDataSourceLoader;
+(id)complicationDataSourceLoaderWithDirectory:(id)arg1 ;
+(id)complicationDataSourceLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)aggregateComplicationLoaderWithComplicationLoaders:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(id)cachedDataSources;
-(void)enumerationComplicationClassesWithBlock:(/*^block*/id)arg1 ;
@end


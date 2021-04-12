/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NTKBundleComplicationDataSourceLoader : NSObject <NSCopying> {

	NSArray* _cachedDataSources;

}
+(id)complicationDataSourceLoaderWithDirectories:(id)arg1 ;
+(id)disabledComplicationDataSourceLoader;
+(id)defaultComplicationDataSourceLoader;
+(id)complicationDataSourceLoaderWithDirectory:(id)arg1 ;
+(id)complicationDataSourceLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)aggregateComplicationLoaderWithComplicationLoaders:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerationComplicationClassesWithBlock:(/*^block*/id)arg1 ;
@end


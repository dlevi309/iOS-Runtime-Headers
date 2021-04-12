/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REClassLoader;

@interface REDataSourceLoader : NSObject <NSCopying> {

	REClassLoader* _loader;

}
+(id)dataSourceLoaderWithDirectories:(id)arg1 ;
+(id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 ;
+(id)disabledDataSourceLoader;
+(id)defaultDataSourceLoader;
+(id)dataSourceLoaderWithDirectory:(id)arg1 ;
+(id)dataSourceLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)dataSourceLoaderWithDataSources:(id)arg1 ;
+(id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prewarm;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)enumerateDataSourceClassesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateDataSourceObjectsWithBlock:(/*^block*/id)arg1 ;
@end


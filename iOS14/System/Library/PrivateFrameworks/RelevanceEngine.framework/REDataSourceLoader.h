/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REClassLoader;

@interface REDataSourceLoader : NSObject <NSCopying> {

	REClassLoader* _loader;

}
+(id)dataSourceLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)dataSourceLoaderWithDataSources:(id)arg1 ;
+(id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1 ;
+(id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 ;
+(id)dataSourceLoaderWithDirectories:(id)arg1 ;
+(id)disabledDataSourceLoader;
+(id)defaultDataSourceLoader;
+(id)dataSourceLoaderWithDirectory:(id)arg1 ;
-(void)prewarm;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)enumerateDataSourceClassesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateDataSourceObjectsWithBlock:(/*^block*/id)arg1 ;
@end


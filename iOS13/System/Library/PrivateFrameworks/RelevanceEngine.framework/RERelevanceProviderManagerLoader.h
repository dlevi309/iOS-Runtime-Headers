/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class REClassLoader;

@interface RERelevanceProviderManagerLoader : NSObject {

	REClassLoader* _loader;

}
+(id)disabledRelevanceProviderManagerLoader;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 relevanceProviderManagerKey:(id)arg2 ;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 ;
+(id)relevanceProviderManagerLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prewarm;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)enumerationDataSourceClassesWithBlock:(/*^block*/id)arg1 ;
@end


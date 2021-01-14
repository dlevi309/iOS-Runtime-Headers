/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class REClassLoader;

@interface RERelevanceProviderManagerLoader : NSObject {

	REClassLoader* _loader;

}
+(id)relevanceProviderManagerLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)disabledRelevanceProviderManagerLoader;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 relevanceProviderManagerKey:(id)arg2 ;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 ;
+(id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg1 ;
-(void)prewarm;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)enumerationDataSourceClassesWithBlock:(/*^block*/id)arg1 ;
@end


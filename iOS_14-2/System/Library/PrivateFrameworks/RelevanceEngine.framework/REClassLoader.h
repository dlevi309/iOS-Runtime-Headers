/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol REClassLoaderConfiguration;
@class NSArray;

@interface REClassLoader : NSObject <NSCopying> {

	NSArray* _cachedDataSources;
	NSArray* _cachedBundleConfigurations;
	os_unfair_lock_s _loadingLock;
	id<REClassLoaderConfiguration> _configuration;

}

@property (nonatomic,readonly) id<REClassLoaderConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)loaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 configuration:(id)arg3 ;
+(id)loaderWithBlock:(/*^block*/id)arg1 configuration:(id)arg2 ;
+(id)loaderWithObjects:(id)arg1 configuration:(id)arg2 ;
+(id)groupLoaderWithLoaders:(id)arg1 ;
-(void)prewarm;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(id<REClassLoaderConfiguration>)configuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)enumerateClassesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)_enumerateClassesWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBundleConfigurations:(/*^block*/id)arg1 ;
@end


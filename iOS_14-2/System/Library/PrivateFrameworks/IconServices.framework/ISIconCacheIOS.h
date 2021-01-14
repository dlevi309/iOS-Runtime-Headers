/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


@class NSString, NSURL;

@interface ISIconCacheIOS : NSObject {

	BOOL _initialized;
	NSString* _cacheKeySalt;
	NSURL* _cacheURL;

}

@property (readonly) BOOL initialized;                 //@synthesize initialized=_initialized - In the implementation block
@property (copy) NSString * cacheKeySalt;              //@synthesize cacheKeySalt=_cacheKeySalt - In the implementation block
@property (retain) NSURL * cacheURL;                   //@synthesize cacheURL=_cacheURL - In the implementation block
+(id)UUIDStringForString:(id)arg1 ;
+(id)xpcInterface;
+(long long)currentDisplayGamut;
+(id)cacheContainerURL;
+(id)cacheFolderURL;
+(id)iconCacheSystemVersionFileURL;
-(id)init;
-(void)setCacheURL:(NSURL *)arg1 ;
-(id)bundleCacheKeyPrefixForBundleIdentifier:(id)arg1 ;
-(BOOL)initialized;
-(NSURL *)cacheURL;
-(id)iconDataForKey:(id)arg1 ignoreCache:(BOOL)arg2 generatorBlock:(/*^block*/id)arg3 ;
-(id)initWithCacheURL:(id)arg1 salt:(id)arg2 ;
-(NSString *)cacheKeySalt;
-(void)setCacheKeySalt:(NSString *)arg1 ;
-(id)cacheKeyFromResourceURL:(id)arg1 bundleIdentifier:(id)arg2 iconDictionary:(id)arg3 preferedIconName:(id)arg4 ;
-(id)bundleCacheKeyForBundleIdentifier:(id)arg1 cacheKey:(id)arg2 variant:(int)arg3 options:(int)arg4 ;
@end


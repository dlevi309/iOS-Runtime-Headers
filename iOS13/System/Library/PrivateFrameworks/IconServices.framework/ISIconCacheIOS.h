/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)xpcInterface;
+(id)cacheContainerURL;
+(id)cacheFolderURL;
+(id)UUIDStringForString:(id)arg1 ;
+(id)iconCacheSystemVersionFileURL;
+(long long)currentDisplayGamut;
-(id)init;
-(BOOL)initialized;
-(NSURL *)cacheURL;
-(id)initWithCacheURL:(id)arg1 salt:(id)arg2 ;
-(NSString *)cacheKeySalt;
-(void)setCacheURL:(NSURL *)arg1 ;
-(void)setCacheKeySalt:(NSString *)arg1 ;
-(id)cacheKeyFromBundleIdentifier:(id)arg1 iconDictionary:(id)arg2 preferedIconName:(id)arg3 ;
-(id)bundleCacheKeyForBundleIdentifier:(id)arg1 cacheKey:(id)arg2 variant:(int)arg3 options:(int)arg4 ;
-(id)iconDataForKey:(id)arg1 ignoreCache:(BOOL)arg2 generatorBlock:(/*^block*/id)arg3 ;
-(id)bundleCacheKeyPrefixForBundleIdentifier:(id)arg1 ;
@end


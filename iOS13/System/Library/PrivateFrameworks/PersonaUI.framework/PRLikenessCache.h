/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSURL;

@interface PRLikenessCache : NSObject {

	NSCache* _inMemoryCache;
	NSObject*<OS_dispatch_queue> _cacheLookupQueue;
	BOOL _useMemory;
	BOOL _useFilesystem;
	BOOL _renderIfNeeded;
	NSURL* _cacheDirectory;

}

@property (nonatomic,retain) NSURL * cacheDirectory;              //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (assign,nonatomic) BOOL useMemory;                      //@synthesize useMemory=_useMemory - In the implementation block
@property (assign,nonatomic) BOOL useFilesystem;                  //@synthesize useFilesystem=_useFilesystem - In the implementation block
@property (assign,nonatomic) BOOL renderIfNeeded;                 //@synthesize renderIfNeeded=_renderIfNeeded - In the implementation block
+(id)sharedInstance;
+(id)_imageAtURL:(id)arg1 ;
+(id)_applicationCacheDirectory;
+(id)_staticRepresentationCacheURL;
+(BOOL)_ensureExistenceOfDirectory:(id)arg1 ;
+(BOOL)_purgeOldCacheFilesInDirectory:(id)arg1 ;
+(BOOL)_writeImage:(id)arg1 toURL:(id)arg2 ;
+(id)_propertyValueForURL:(id)arg1 forKey:(id)arg2 ;
+(BOOL)_removeImageAtURL:(id)arg1 ;
-(id)init;
-(NSURL *)cacheDirectory;
-(void)setCacheDirectory:(NSURL *)arg1 ;
-(id)_cacheKeyForLikeness:(id)arg1 context:(id)arg2 ;
-(void)_renderImageForLikeness:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchFromFilesystem:(id)arg1 context:(id)arg2 renderBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchFromMemory:(id)arg1 context:(id)arg2 renderBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)useMemory;
-(void)_fetchWithReadBlock:(/*^block*/id)arg1 writeBlock:(/*^block*/id)arg2 renderBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)useFilesystem;
-(id)_cacheURLForLikeness:(id)arg1 context:(id)arg2 ;
-(BOOL)renderIfNeeded;
-(void)imageForLikeness:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUseMemory:(BOOL)arg1 ;
-(void)setUseFilesystem:(BOOL)arg1 ;
-(void)setRenderIfNeeded:(BOOL)arg1 ;
@end


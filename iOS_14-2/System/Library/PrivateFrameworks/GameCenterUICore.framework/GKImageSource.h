/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/


#import <GameCenterUICore/GameCenterUICore-Structs.h>
@class GKThreadsafeCache, NSString, GKImageBrush, UIImage;

@interface GKImageSource : NSObject {

	BOOL _shouldRenderDefaultImageWithBrush;
	GKThreadsafeCache* _cache;
	NSString* _name;
	GKImageBrush* _imageBrush;
	UIImage* _defaultImage;
	UIImage* _renderedDefaultImage;

}

@property (nonatomic,retain) UIImage * renderedDefaultImage;                      //@synthesize renderedDefaultImage=_renderedDefaultImage - In the implementation block
@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GKImageBrush * imageBrush;                           //@synthesize imageBrush=_imageBrush - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;                              //@synthesize defaultImage=_defaultImage - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderDefaultImageWithBrush;              //@synthesize shouldRenderDefaultImageWithBrush=_shouldRenderDefaultImageWithBrush - In the implementation block
@property (nonatomic,retain) GKThreadsafeCache * cache;                           //@synthesize cache=_cache - In the implementation block
+(id)syncQueue;
+(void)clearCache;
+(id)sharedCache;
+(id)cacheDirectoryForImageID:(id)arg1 ;
-(void)clearCachedImageForIdentifier:(id)arg1 ;
-(UIImage *)renderedDefaultImage;
-(GKThreadsafeCache *)cache;
-(void)setCache:(GKThreadsafeCache *)arg1 ;
-(void)setDefaultImage:(UIImage *)arg1 ;
-(UIImage *)defaultImage;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 imageBrush:(id)arg2 ;
-(id)subsourceWithBrush:(id)arg1 ;
-(id)cachedImageForKey:(id)arg1 ;
-(id)fastCachedOrDefaultImageForIdentifier:(id)arg1 ;
-(id)fastCachedImageForIdentifier:(id)arg1 ;
-(void)cacheImageFromContext:(id)arg1 forIdentifier:(id)arg2 ;
-(id)cachedImageForIdentifier:(id)arg1 ;
-(id)keyForImageIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2 ;
-(GKImageBrush *)imageBrush;
-(id)renderedImageWithImage:(id)arg1 defaultSize:(CGSize)arg2 returnContext:(id*)arg3 ;
-(id)renderedImageWithImage:(id)arg1 returnContext:(id*)arg2 ;
-(BOOL)shouldRenderDefaultImageWithBrush;
-(id)renderedImageWithImage:(id)arg1 ;
-(void)setRenderedDefaultImage:(UIImage *)arg1 ;
-(BOOL)shouldUseTestImage;
-(id)renderedTestImage;
-(id)fastCachedImageForKey:(id)arg1 ;
-(void)validateFileSystemCache;
-(id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3 ;
-(id)processAndCacheImage:(id)arg1 forKey:(id)arg2 ;
-(void)_storeImage:(id)arg1 cacheKey:(id)arg2 path:(id)arg3 context:(id)arg4 ;
-(unsigned long long)cacheCostForImage:(id)arg1 ;
-(id)fastCachedOrDefaultImageForForKey:(id)arg1 ;
-(id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3 ;
-(void)setImageBrush:(GKImageBrush *)arg1 ;
-(void)setShouldRenderDefaultImageWithBrush:(BOOL)arg1 ;
@end


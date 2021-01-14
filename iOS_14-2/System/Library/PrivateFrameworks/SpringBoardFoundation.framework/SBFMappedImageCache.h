/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <BaseBoardUI/BSUIMappedImageCache.h>

@interface SBFMappedImageCache : BSUIMappedImageCache
+(id)systemAppPersistenteCache;
-(void)warmupImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
-(id)imageForKey:(id)arg1 cacheOptions:(unsigned long long)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
-(id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(/*^block*/id)arg2 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 ;
-(id)initWithDescription:(id)arg1 ;
@end


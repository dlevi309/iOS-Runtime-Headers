/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <BaseBoardUI/BSUIMappedImageCache.h>

@interface SBFMappedImageCache : BSUIMappedImageCache
+(id)systemAppPersistenteCache;
-(id)initWithDescription:(id)arg1 ;
-(id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(/*^block*/id)arg2 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 ;
-(id)imageForKey:(id)arg1 cacheOptions:(unsigned long long)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
-(void)warmupImageForKey:(id)arg1 ;
@end


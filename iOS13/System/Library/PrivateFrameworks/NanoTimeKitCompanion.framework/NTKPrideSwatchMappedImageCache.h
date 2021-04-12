/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <BaseBoardUI/BSUIMappedImageCache.h>

@class NSArray;

@interface NTKPrideSwatchMappedImageCache : BSUIMappedImageCache {

	NSArray* _libraryCollections;

}
+(id)sharedCache;
+(id)keyForFaceStyle:(long long)arg1 editOption:(id)arg2 mode:(long long)arg3 selectedOptions:(id)arg4 ;
-(id)_init;
-(void)_cleanCache;
-(void)_removeImagesForKeysMatching:(/*^block*/id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSCache;

@interface NTKSiderealCache : NSObject {

	NSCache* _dataCache;

}
+(id)sharedCache;
-(id)_init;
-(id)imageDataForKey:(id)arg1 generationBlock:(/*^block*/id)arg2 ;
-(void)_purgeEverything;
-(void)purgeCachedKey:(id)arg1 ;
-(id)gradientData:(/*^block*/id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface NTKSiderealCache : NSObject {

	NSCache* _dataCache;
	NSObject*<OS_dispatch_queue> _readerWriterQueue;
	NSCache* _aplCache;

}
+(id)sharedCache;
-(id)_init;
-(id)imageDataForKey:(id)arg1 generationBlock:(/*^block*/id)arg2 ;
-(void)_purgeEverything;
-(void)purgeCachedKey:(id)arg1 ;
-(void)purgeAPLCache;
-(float)aplForDate:(id)arg1 generationBlock:(/*^block*/id)arg2 ;
@end


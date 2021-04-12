/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/


@class NSCache;

@interface FMFMapImageCache : NSObject {

	NSCache* __cache;

}

@property (nonatomic,retain) NSCache * _cache;              //@synthesize _cache=__cache - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(NSCache *)_cache;
-(id)cachedMapForHandles:(id)arg1 ;
-(void)cacheMap:(id)arg1 forHandles:(id)arg2 ;
-(id)_keyForHandles:(id)arg1 ;
-(id)_imageForMap:(id)arg1 ;
-(id)_orientationKey;
-(void)set_cache:(NSCache *)arg1 ;
@end


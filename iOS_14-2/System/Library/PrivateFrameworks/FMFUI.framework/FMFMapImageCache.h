/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/


@class NSCache;

@interface FMFMapImageCache : NSObject {

	NSCache* __cache;

}

@property (nonatomic,retain) NSCache * _cache;              //@synthesize _cache=__cache - In the implementation block
+(id)sharedInstance;
-(NSCache *)_cache;
-(void)dealloc;
-(id)cachedMapForHandles:(id)arg1 ;
-(void)cacheMap:(id)arg1 forHandles:(id)arg2 ;
-(id)_keyForHandles:(id)arg1 ;
-(id)_imageForMap:(id)arg1 ;
-(id)_orientationKey;
-(void)set_cache:(NSCache *)arg1 ;
@end


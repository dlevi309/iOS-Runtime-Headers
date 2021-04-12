/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/


@class NSCache;

@interface PXPlacesImageCache : NSObject {

	NSCache* _cache;

}
-(id)init;
-(void)removeAllObjects;
-(void)removeCachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2 ;
-(id)cachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2 ;
-(void)cacheRenderedImage:(id)arg1 forGeotaggble:(id)arg2 andKey:(id)arg3 ;
@end


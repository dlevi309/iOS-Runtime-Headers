/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


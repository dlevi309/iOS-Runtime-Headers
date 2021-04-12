/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/


@protocol PXPlacesGeotaggable;
@class NSString;

@interface _PXPlacesImageCacheKey : NSObject {

	id<PXPlacesGeotaggable> _geotaggable;
	NSString* _key;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)key;
-(id)initWithGeotaggable:(id)arg1 andKey:(id)arg2 ;
-(id)geotaggable;
@end


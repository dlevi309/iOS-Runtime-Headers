/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/


@protocol PXPlacesGeotaggable;
@class NSString;

@interface _PXPlacesImageCacheKey : NSObject {

	id<PXPlacesGeotaggable> _geotaggable;
	NSString* _key;

}
-(id)key;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithGeotaggable:(id)arg1 andKey:(id)arg2 ;
-(id)geotaggable;
@end


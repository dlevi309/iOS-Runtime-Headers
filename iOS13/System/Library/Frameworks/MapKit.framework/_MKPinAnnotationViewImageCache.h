/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@interface _MKPinAnnotationViewImageCache : NSObject {

	GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _pool;
	GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _cache;

}
-(id)init;
-(void)flush;
-(id)pinsWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3 ;
-(void)setPins:(id)arg1 forMapType:(unsigned long long)arg2 pinColor:(id)arg3 traits:(id)arg4 ;
@end


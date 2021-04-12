/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class _MKSpatialColliderPairSet;

@interface MKSpatialCollider : NSObject <NSFastEnumeration> {

	long long _options;
	_MKSpatialColliderPairSet* _previousCollisionPairs;
	_MKSpatialColliderPairSet* _registeredCollisonPairs;
	BOOL _isVertical;
	vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *> >* _sortedAnnotationViews;
	double _maxLength;
	unsigned long long mutator;

}
-(id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(BOOL)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MK39*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)registeredCollissions;
-(id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1 ;
-(id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3 ;
-(unsigned long long)viewCount;
-(unsigned long long)insertAnnotationView:(id)arg1 ;
-(id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(BOOL)arg2 fromIndex:(long long)arg3 length:(double)arg4 ;
-(id)annotationViewAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end


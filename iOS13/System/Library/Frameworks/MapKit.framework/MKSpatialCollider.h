/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MK33*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)viewCount;
-(id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(BOOL)arg2 fromIndex:(long long)arg3 length:(double)arg4 ;
-(id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3 ;
-(id)annotationViewAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)insertAnnotationView:(id)arg1 ;
-(id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(BOOL)arg2 ;
-(id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1 ;
-(id)registeredCollissions;
@end


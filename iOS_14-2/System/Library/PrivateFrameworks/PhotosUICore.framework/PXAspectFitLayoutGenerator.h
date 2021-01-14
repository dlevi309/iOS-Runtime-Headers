/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@class PXAspectFitLayoutMetrics;

@interface PXAspectFitLayoutGenerator : PXLayoutGenerator {

	PXLayoutGeometry* _geometries;
	unsigned long long _geometriesCount;
	long long _lastGeometryIndex;
	CGSize _contentSize;
	double _currentRowUnmodifiedHeight;
	double _currentRowFinalHeight;

}

@property (nonatomic,copy) PXAspectFitLayoutMetrics * metrics; 
-(CGSize)estimatedSize;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(PXLayoutGeometry)_lastGeometry;
-(void)_prepareGeometriesForCount:(unsigned long long)arg1 ;
-(void)_computeGeometriesIfNeeded;
-(void)_fillRowFromIndex:(long long*)arg1 withCount:(long long)arg2 ;
-(double)_rowHeightForItemsInRange:(NSRange)arg1 ;
-(PXLayoutGeometry)_geometryForItemAtIndex:(unsigned long long)arg1 atPosition:(CGPoint)arg2 withHorizontalGap:(double)arg3 ;
-(void)invalidate;
-(void)dealloc;
@end


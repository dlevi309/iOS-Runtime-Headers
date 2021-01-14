/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCuratedLibraryGridLayoutGenerator : PXLayoutGenerator {

	CGSize _itemSize;
	double _interItemSpacing;
	UIEdgeInsets _insets;
	BOOL _isPrepared;
	PXLayoutGeometry* _geometries;
	unsigned long long _geometriesCount;
	CGSize _actualSize;
	double _lastFullRowBottomEdge;
	PXCornerSpriteIndexes _cornerSpriteIndexes;

}

@property (nonatomic,readonly) double lastFullRowBottomEdge; 
-(double)lastFullRowBottomEdge;
-(NSRange)geometriesRangeCoveringRect:(CGRect)arg1 ;
-(CGSize)estimatedSize;
-(CGSize)size;
-(PXCornerSpriteIndexes)cornerSpriteIndexes;
-(id)initWithMetrics:(id)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)_prepareIfNeeded;
-(void)invalidate;
-(void)_prepareGeometriesBufferForCount:(unsigned long long)arg1 ;
-(void)dealloc;
@end


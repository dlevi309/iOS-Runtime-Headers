/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@class PXMagazineLayoutTileMaker, NSIndexSet, PXEditorialLayoutMetrics;

@interface PXEditorialLayoutGenerator : PXLayoutGenerator {

	BOOL _isPrepared;
	PXMagazineLayoutTileMaker* _tileMaker;
	CGSize _actualSize;
	PXLayoutGeometry* _geometries;
	CGRect* _rects;
	unsigned long long _geometriesCount;
	NSIndexSet* _geometrySet;

}

@property (nonatomic,copy) PXEditorialLayoutMetrics * metrics; 
-(CGSize)estimatedSize;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)_prepareBuffersForCount:(unsigned long long)arg1 ;
-(void)_prepareIfNeeded;
-(void)invalidate;
-(PXLayoutGeometry)_geometryFromFrame:(CGRect)arg1 index:(unsigned long long)arg2 ;
-(id)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(void)_getContentGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)_getHeaderGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)dealloc;
@end


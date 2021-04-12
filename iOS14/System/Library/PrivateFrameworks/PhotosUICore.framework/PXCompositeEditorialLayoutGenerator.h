/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@class NSDictionary, PXCompositeEditorialLayoutMetrics;

@interface PXCompositeEditorialLayoutGenerator : PXLayoutGenerator {

	PXLayoutGeometry* _geometries;
	unsigned long long _geometriesCount;
	double* _layoutItemWeights;
	unsigned long long _layoutItemWeightsCount;
	CGSize _contentSize;
	BOOL _isPrepared;
	NSDictionary* _templatesByTileCount;
	long long _minTemplateItemCount;
	long long _maxTemplateItemCount;
	long long _minNumberOfColumns;

}

@property (nonatomic,copy) PXCompositeEditorialLayoutMetrics * metrics; 
-(CGSize)estimatedSize;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)_prepareIfNeeded;
-(void)invalidate;
-(void)_computeTemplatesByTileCountIfNeeded;
-(void)_enumerateTemplatesWithBlock:(/*^block*/id)arg1 ;
-(void)_normalizeWeightsForInputItems:(id)arg1 ;
-(id)_layoutInputsInRange:(NSRange)arg1 ;
-(id)_minCostingTemplateAmongTemplates:(id)arg1 forFittingInputItems:(id)arg2 inRange:(NSRange)arg3 minCost:(out double*)arg4 ;
-(void)_prepareLayoutItemWeightsBufferForCount:(unsigned long long)arg1 ;
-(void)_prepareGeometriesBufferForCount:(unsigned long long)arg1 ;
-(PXLayoutGeometry)_geometryFromFrame:(CGRect)arg1 index:(unsigned long long)arg2 ;
-(void)dealloc;
@end


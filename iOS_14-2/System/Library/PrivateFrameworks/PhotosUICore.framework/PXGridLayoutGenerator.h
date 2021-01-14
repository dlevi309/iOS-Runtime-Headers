/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@class NSIndexSet, PXGridLayoutMetrics;

@interface PXGridLayoutGenerator : PXLayoutGenerator {

	long long _numberOfItemsWide;
	NSIndexSet* _geometrySet;

}

@property (nonatomic,copy) PXGridLayoutMetrics * metrics; 
-(CGSize)estimatedSize;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(id)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(void)_getContentGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)_getHeaderGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)_getAdditionalGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)getGeometry:(PXLayoutGeometry*)arg1 forItemAtIndex:(unsigned long long)arg2 ;
@end


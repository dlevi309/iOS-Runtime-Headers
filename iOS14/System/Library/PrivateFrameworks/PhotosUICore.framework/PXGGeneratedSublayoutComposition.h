/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSublayoutComposition.h>

@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition {

	PXLayoutGenerator* _layoutGenerator;
	PXLayoutGeometry* _layoutGeometries;
	long long _layoutGeometriesCapacity;

}

@property (nonatomic,readonly) PXLayoutGenerator * configuredLayoutGenerator; 
-(CGRect)contentBounds;
-(void)invalidateLayout;
-(PXLayoutGenerator *)configuredLayoutGenerator;
-(void)referenceSizeDidChange;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end


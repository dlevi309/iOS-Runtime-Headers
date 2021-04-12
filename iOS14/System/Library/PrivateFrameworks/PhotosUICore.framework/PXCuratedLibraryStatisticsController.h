/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXCuratedLibraryStatisticsController : NSObject {

	PXLayoutGeometry* _resuableLayoutGeometries;
	long long _reusableLayoutGeometriesCapacity;

}
+(id)defaultController;
-(PXLayoutGeometry*)_layoutGeometryBufferWithCount:(long long)arg1 ;
-(void)_enumerateDaysSectionsForViewModel:(id)arg1 extendedTraitCollection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)collectStatisticsForViewModel:(id)arg1 extendedTraitCollection:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


#import <ModelIO/ModelIO-Structs.h>
@interface MDLVolumeGrid : NSObject {

	unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree> >* _octree;

}
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 ;
-(id)initWithObject:(id)arg1 divisions:(int)arg2 ;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorWidth:(float)arg3 exteriorWidth:(float)arg4 patchRadius:(float)arg5 ;
-(id)meshWithStyle:(unsigned long long)arg1 ;
-(unsigned long long*)trianglesIntersectingRayWithOrigin:(unsigned long long*)arg1 ;
@end


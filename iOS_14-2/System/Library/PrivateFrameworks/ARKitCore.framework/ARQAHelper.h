/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARQAHelper : NSObject
+(id)arrayWithVector2:;
+(id)arrayWithVector3:;
+(void)techniquesArray:(id)arg1 array:(id)arg2 ;
+(void)traverseTechniques:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)generateTagsForConfiguration:(id)arg1 replaySensor:(id)arg2 technique:(id)arg3 ;
+(id)arrayOf3dPoints:(const 1*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayOf2dPoints:(const 1*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithMatrix4x4:(SCD_Struct_AR1)arg1 ;
+(id)dictionaryFromVertices:(const 1*)arg1 vertexCount:(unsigned long long)arg2 textureCoordinates:(const 3*)arg3 textureCoordinateCount:(unsigned long long)arg4 ;
+(id)dictionaryFromPatchGrid:(id)arg1 ;
+(id)dictionaryFromMeshGeometry:(id)arg1 ;
+(id)traceFrameData:(id)arg1 withFrameIndex:(unsigned long long)arg2 writeOBJ:(BOOL)arg3 ;
+(float)_meanDepthValueOfDepthBuffer:(CVBufferRef)arg1 consideringSegmentation:(BOOL)arg2 ofSegmentationBuffer:(CVBufferRef)arg3 ;
+(id)dictionaryFromCLLocation:(id)arg1 ;
+(id)extractAnchorDataForFrame:(id)arg1 ;
+(id)extractDetectedBodiesForFrame:(id)arg1 ;
+(id)arrayWithVector4:;
+(id)headerInformationWithConfiguration:(id)arg1 technique:(id)arg2 ;
+(id)traceFrameData:(id)arg1 withFrameIndex:(unsigned long long)arg2 ;
+(id)dictionaryFromRaycastQuery:(id)arg1 ;
+(id)arrayFromRaycastResults:(id)arg1 ;
@end


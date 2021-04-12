/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARQAHelper : NSObject
+(id)arrayWithVector2:;
+(id)arrayWithVector3:;
+(void)techniquesArray:(id)arg1 array:(id)arg2 ;
+(id)generateTagsForConfiguration:(id)arg1 replaySensor:(id)arg2 technique:(id)arg3 ;
+(id)arrayOf3dPoints:(const 1*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayOf2dPoints:(const 1*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithMatrix4x4:(SCD_Struct_AR1)arg1 ;
+(id)dictionaryFromVertices:(const 1*)arg1 vertexCount:(unsigned long long)arg2 textureCoordinates:(const 3*)arg3 textureCoordinateCount:(unsigned long long)arg4 ;
+(id)dictionaryFromPatchGrid:(id)arg1 ;
+(id)dictionaryFromMeshGeometry:(id)arg1 ;
+(id)traceFrameData:(id)arg1 withFrameIndex:(unsigned long long)arg2 writeOBJ:(BOOL)arg3 ;
+(float)_meanDepthValueOfDepthBuffer:(CVBufferRef)arg1 consideringSegmentation:(BOOL)arg2 ofSegmentationBuffer:(CVBufferRef)arg3 ;
+(id)extractAnchorDataForFrame:(id)arg1 ;
+(id)extractDetectedBodiesForFrame:(id)arg1 ;
+(id)arrayWithVector4:;
+(id)headerInformationWithSize:(CGSize)arg1 frameLabelRect:(CGRect)arg2 configuration:(id)arg3 technique:(id)arg4 ;
+(id)traceFrameData:(id)arg1 withFrameIndex:(unsigned long long)arg2 ;
+(id)dictionaryFromCLLocation:(id)arg1 ;
+(id)dictionaryFromRaycastQuery:(id)arg1 ;
+(id)arrayFromRaycastResults:(id)arg1 ;
@end


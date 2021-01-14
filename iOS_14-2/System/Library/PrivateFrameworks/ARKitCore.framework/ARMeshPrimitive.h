/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLBuffer, MTLTexture;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARMeshPrimitive : NSObject {

	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _uvBuffer;
	unsigned long long _nVertices;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _nIndices;
	id<MTLTexture> _texture;
	SCD_Struct_AR1 _transform_world_from_primitive;

}

@property (readonly) SCD_Struct_AR1 transform_world_from_primitive;              //@synthesize transform_world_from_primitive=_transform_world_from_primitive - In the implementation block
@property (readonly) id<MTLBuffer> vertexBuffer;                                 //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (readonly) id<MTLBuffer> uvBuffer;                                     //@synthesize uvBuffer=_uvBuffer - In the implementation block
@property (readonly) unsigned long long nVertices;                               //@synthesize nVertices=_nVertices - In the implementation block
@property (readonly) id<MTLBuffer> indexBuffer;                                  //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (readonly) unsigned long long nIndices;                                //@synthesize nIndices=_nIndices - In the implementation block
@property (readonly) id<MTLTexture> texture;                                     //@synthesize texture=_texture - In the implementation block
+(id)planeWithTransform:(SCD_Struct_AR1)arg1 min:(id)arg2 ;
-(id<MTLTexture>)texture;
-(id<MTLBuffer>)vertexBuffer;
-(id<MTLBuffer>)indexBuffer;
-(id<MTLBuffer>)uvBuffer;
-(SCD_Struct_AR1)transform_world_from_primitive;
-(unsigned long long)nIndices;
-(id)initAsPlaneWithTransform:(SCD_Struct_AR1)arg1 min:(id)arg2 ;
-(unsigned long long)nVertices;
@end


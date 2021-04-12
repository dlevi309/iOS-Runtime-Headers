/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLBuffer;
@class NSData, NSString;

@interface SCNGeometrySource : NSObject <NSSecureCoding> {

	_C3DMeshSource* _meshSource;
	NSData* _data;
	NSString* _semantic;
	long long _vectorCount;
	short _componentType;
	unsigned short _componentCount;
	long long _dataOffset;
	long long _dataStride;
	unsigned char _mkSemantic;
	id<MTLBuffer> _mtlBuffer;
	long long _mtlVertexFormat;
	BOOL _encodeDataAsHalf;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * semantic; 
@property (nonatomic,readonly) long long vectorCount; 
@property (nonatomic,readonly) BOOL floatComponents; 
@property (nonatomic,readonly) long long componentsPerVector; 
@property (nonatomic,readonly) long long bytesPerComponent; 
@property (nonatomic,readonly) long long dataOffset; 
@property (nonatomic,readonly) long long dataStride; 
+(BOOL)supportsSecureCoding;
+(id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8 ;
+(id)geometrySourceWithMDLVertexAttribute:(id)arg1 mesh:(id)arg2 ;
+(id)geometrySourceWithMeshSourceRef:(_C3DMeshSource*)arg1 ;
+(id)_geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7 ;
+(id)geometrySourceWithVertices:(const SCNVector3*)arg1 count:(long long)arg2 ;
+(id)dataByConvertingDoublesToFloats:(const double*)arg1 count:(long long)arg2 ;
+(id)dataWithVector3Array:(const SCNVector3*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3 ;
+(id)dataWithPointArray:(const CGPoint*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3 ;
+(id)geometrySourceWithNormals:(const SCNVector3*)arg1 count:(long long)arg2 ;
+(id)geometrySourceWithTextureCoordinates:(const CGPoint*)arg1 count:(long long)arg2 ;
+(id)geometrySourceWithColorComponents:(const float*)arg1 count:(long long)arg2 hasAlpha:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)geometrySourceWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6 ;
+(id)_geometrySourceWithSource:(id)arg1 vertexFormat:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)scene;
-(NSString *)semantic;
-(short)_componentType;
-(long long)dataStride;
-(long long)dataOffset;
-(long long)vectorCount;
-(long long)componentsPerVector;
-(void)setMkSemantic:(id)arg1 ;
-(id)mkSemantic;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)_clearC3DCache;
-(const _C3DMeshSource*)meshSource;
-(id)initWithMeshSource:(_C3DMeshSource*)arg1 ;
-(long long)bytesPerComponent;
-(BOOL)floatComponents;
-(BOOL)_encodeDataAsHalf;
-(void)set_encodeDataAsHalf:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8 ;
-(id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7 ;
-(id)initWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6 ;
-(id)_uninterleaveData:(id)arg1 count:(unsigned long long)arg2 srcOffset:(unsigned long long)arg3 srcStride:(unsigned long long)arg4 dstStride:(unsigned long long)arg5 ;
-(void)_printData;
@end


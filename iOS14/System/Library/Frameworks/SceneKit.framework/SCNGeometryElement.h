/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLBuffer;
@class NSData;

@interface SCNGeometryElement : NSObject <NSSecureCoding> {

	_C3DMeshElement* _meshElement;
	NSData* _elementData;
	long long _primitiveType;
	long long _primitiveCount;
	NSRange _primitiveRange;
	long long _indicesChannelCount;
	BOOL _interleavedIndicesChannels;
	long long _bytesPerIndex;
	float _pointSize;
	float _minimumPointScreenSpaceRadius;
	float _maximumPointScreenSpaceRadius;
	id<MTLBuffer> _mtlBuffer;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) long long primitiveType; 
@property (nonatomic,readonly) long long primitiveCount; 
@property (assign,nonatomic) NSRange primitiveRange; 
@property (nonatomic,readonly) long long bytesPerIndex; 
@property (assign,nonatomic) double pointSize; 
@property (assign,nonatomic) double minimumPointScreenSpaceRadius; 
@property (assign,nonatomic) double maximumPointScreenSpaceRadius; 
+(BOOL)supportsSecureCoding;
+(id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
+(id)geometryElementWithMDLSubmesh:(id)arg1 ;
+(id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6 ;
+(id)geometryElementWithMeshElementRef:(_C3DMeshElement*)arg1 ;
+(id)geometryElementWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6 ;
+(id)geometryElementWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
+(id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
-(id)scene;
-(long long)primitiveCount;
-(id)init;
-(long long)primitiveType;
-(void)encodeWithCoder:(id)arg1 ;
-(double)pointSize;
-(unsigned long long)indexCount;
-(id)description;
-(NSData *)data;
-(void)setPointSize:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)bytesPerIndex;
-(void)setPrimitiveRange:(NSRange)arg1 ;
-(void)setMinimumPointScreenSpaceRadius:(double)arg1 ;
-(void)setMaximumPointScreenSpaceRadius:(double)arg1 ;
-(long long)indicesChannelCount;
-(BOOL)hasInterleavedIndicesChannels;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(id)initWithMeshElement:(_C3DMeshElement*)arg1 ;
-(_C3DMeshElement*)meshElement;
-(void)_printData;
-(id)initWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6 ;
-(id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6 ;
-(NSRange)primitiveRange;
-(double)minimumPointScreenSpaceRadius;
-(double)maximumPointScreenSpaceRadius;
-(void)_optimizeTriangleIndices;
-(double)_computeACMR;
@end


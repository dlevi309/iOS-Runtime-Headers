/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

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
+(id)geometryElementWithMDLSubmesh:(id)arg1 ;
+(id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
+(id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6 ;
+(id)geometryElementWithMeshElementRef:(_C3DMeshElement*)arg1 ;
+(id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(double)pointSize;
-(void)setPointSize:(double)arg1 ;
-(long long)primitiveType;
-(id)scene;
-(unsigned long long)indexCount;
-(long long)indicesChannelCount;
-(long long)bytesPerIndex;
-(BOOL)hasInterleavedIndicesChannels;
-(long long)primitiveCount;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)setPrimitiveRange:(NSRange)arg1 ;
-(_C3DMeshElement*)meshElement;
-(void)_printData;
-(id)initWithMeshElement:(_C3DMeshElement*)arg1 ;
-(id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6 ;
-(NSRange)primitiveRange;
-(double)minimumPointScreenSpaceRadius;
-(void)setMinimumPointScreenSpaceRadius:(double)arg1 ;
-(double)maximumPointScreenSpaceRadius;
-(void)setMaximumPointScreenSpaceRadius:(double)arg1 ;
-(void)_optimizeTriangleIndices;
-(double)_computeACMR;
@end


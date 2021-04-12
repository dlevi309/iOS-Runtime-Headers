/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CAMeshTransform : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	void* _impl;
	unsigned long long _normalization;
	long long _subdivisionSteps;
	BOOL _replicatesEdges;

}

@property (readonly) unsigned long long vertexCount; 
@property (readonly) unsigned long long faceCount; 
@property (copy,readonly) NSString * depthNormalization; 
@property (readonly) int subdivisionSteps; 
@property (readonly) BOOL replicatesEdges; 
+(BOOL)supportsSecureCoding;
+(id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(void)CAMLParserStartElement:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)_data;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(CAMeshVertex)vertexAtIndex:(unsigned long long)arg1 ;
-(CAMeshFace)faceAtIndex:(unsigned long long)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)initWithVertexCount:(unsigned long long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(id)_initWithMeshTransform:(id)arg1 ;
-(unsigned long long)vertexCount;
-(unsigned long long)faceCount;
-(NSString *)depthNormalization;
-(int)subdivisionSteps;
-(BOOL)replicatesEdges;
-(BOOL)_constructWithData:(id)arg1 ;
-(id)_subdivideToDepth:(long long)arg1 ;
-(id)subdividedMesh:(int)arg1 ;
-(id)inverseMesh;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)meshTransformForLayer:(id)arg1 ;
@end


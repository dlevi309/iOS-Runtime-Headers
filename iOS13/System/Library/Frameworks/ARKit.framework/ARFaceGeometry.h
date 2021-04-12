/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_semaphore;
@class ARFaceTrackingData, NSObject;

@interface ARFaceGeometry : NSObject <NSSecureCoding, NSCopying> {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _customVertices;
	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _normals;
	ARFaceTrackingData* _trackingData;
	NSObject*<OS_dispatch_semaphore> _normalsSemaphore;

}

@property (nonatomic,readonly) unsigned long long vertexCount; 
@property (nonatomic,readonly) const * vertices; 
@property (nonatomic,readonly) unsigned long long textureCoordinateCount; 
@property (nonatomic,readonly) const * textureCoordinates; 
@property (nonatomic,readonly) unsigned long long triangleCount; 
@property (nonatomic,readonly) const short* triangleIndices; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const *)vertices;
-(id)initPrivate;
-(unsigned long long)vertexCount;
-(const *)textureCoordinates;
-(const 1*)normals;
-(unsigned long long)triangleCount;
-(const short*)triangleIndices;
-(id)initWithBlendShapes:(id)arg1 ;
-(unsigned long long)normalCount;
-(unsigned long long)textureCoordinateCount;
-(id)initWithFaceTrackingData:(id)arg1 ;
-(id)initWithCustomVertices:(const 1*)arg1 verticesCount:(unsigned long long)arg2 ;
-(2)positionForLabeledFacePosition:(id)arg1 ;
-(2)normalForLabeledFacePosition:(id)arg1 ;
-(short)closestVertexIndexToLabeledFacePosition:(id)arg1 ;
@end


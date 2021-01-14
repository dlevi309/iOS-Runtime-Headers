/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
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
-(id)initPrivate;
-(unsigned long long)vertexCount;
-(void)encodeWithCoder:(id)arg1 ;
-(const *)textureCoordinates;
-(unsigned long long)triangleCount;
-(id)initWithCoder:(id)arg1 ;
-(const 1*)normals;
-(const *)vertices;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBlendShapes:(id)arg1 ;
-(const short*)triangleIndices;
-(unsigned long long)normalCount;
-(unsigned long long)textureCoordinateCount;
-(id)initWithFaceTrackingData:(id)arg1 ;
-(id)initWithCustomVertices:(const 1*)arg1 verticesCount:(unsigned long long)arg2 ;
-(2)positionForLabeledFacePosition:(id)arg1 ;
-(2)normalForLabeledFacePosition:(id)arg1 ;
-(short)closestVertexIndexToLabeledFacePosition:(id)arg1 ;
@end


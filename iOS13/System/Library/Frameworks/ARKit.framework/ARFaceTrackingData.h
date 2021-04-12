/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSUUID, NSDictionary, NSError;

@interface ARFaceTrackingData : NSObject <NSSecureCoding, NSCopying> {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _meshVertices;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _verticesImageSpace;
	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _normals;
	vector<float, std::__1::allocator<float> >* _blendShapeCoefficients;
	SCD_Struct_AR1 _transform;
	NSObject*<OS_dispatch_semaphore> _normalsSemaphore;
	NSObject*<OS_dispatch_semaphore> _imageVerticesSemaphore;
	NSUUID* _anchorIdentifier;
	float _tongueOut;
	NSDictionary* _trackingData;
	NSError* _trackingError;
	 _gazePoint;
	SCD_Struct_AR1 _leftEyeTransform;
	SCD_Struct_AR1 _rightEyeTransform;

}

@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) NSDictionary * trackingData;                                 //@synthesize trackingData=_trackingData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 transform; 
@property (nonatomic,readonly) SCD_Struct_AR1 leftEyeTransform;                             //@synthesize leftEyeTransform=_leftEyeTransform - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 rightEyeTransform;                            //@synthesize rightEyeTransform=_rightEyeTransform - In the implementation block
@property (nonatomic,readonly)  gazePoint;                                                  //@synthesize gazePoint=_gazePoint - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount; 
@property (nonatomic,readonly) const * vertices; 
@property (nonatomic,readonly) const * imageVertices; 
@property (nonatomic,readonly) unsigned long long normalCount; 
@property (nonatomic,readonly) const * normals; 
@property (nonatomic,readonly) unsigned long long blendShapeCoefficientsCount; 
@property (nonatomic,readonly) const float* blendShapeCoefficients; 
@property (nonatomic,readonly) NSError * trackingError;                                     //@synthesize trackingError=_trackingError - In the implementation block
@property (nonatomic,readonly) float tongueOut;                                             //@synthesize tongueOut=_tongueOut - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedNeutralGeometry;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(SCD_Struct_AR1)transform;
-(const *)vertices;
-(id)initPrivate;
-(unsigned long long)vertexCount;
-(const *)normals;
-(id)initWithTrackingData:(id)arg1 transformToMirrored:(BOOL)arg2 anchorIdentifier:(id)arg3 ;
-(void)_extractMetaDataAndTransformToMirrored:(BOOL)arg1 ;
-(NSDictionary *)trackingData;
-(id)initWithTrackingData:(id)arg1 anchorIdentifier:(id)arg2 ;
-(unsigned long long)blendShapeCoefficientsCount;
-(const float*)blendShapeCoefficients;
-(unsigned long long)normalCount;
-(const *)imageVertices;
-(SCD_Struct_AR1)leftEyeTransform;
-(SCD_Struct_AR1)rightEyeTransform;
-()gazePoint;
-(NSError *)trackingError;
-(float)tongueOut;
@end


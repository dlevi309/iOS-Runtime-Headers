/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AR3DSkeletonDetectionResult, NSUUID;

@interface ARCoreRESkeletonResult : NSObject <NSSecureCoding, NSCopying> {

	vector<simd_float4x4, std::__1::allocator<simd_float4x4> >* _modelTransforms;
	vector<ARSRT, std::__1::allocator<ARSRT> >* _localTransformsSRT;
	vector<simd_float4x4, std::__1::allocator<simd_float4x4> >* _localTransforms;
	AR3DSkeletonDetectionResult* _liftingResult;
	NSUUID* _identifier;
	double _estimatedScaleFactor;
	SCD_Struct_AR1 _visionTransform;

}

@property (nonatomic,readonly) NSUUID * identifier;                                                                                                                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long jointTransformCount; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointModelTransforms; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointLocalTransforms; 
@property (nonatomic,readonly) const vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* localJointTransformsSRT; 
@property (nonatomic,readonly) AR3DSkeletonDetectionResult * liftedSkeletonData; 
@property (assign,nonatomic) SCD_Struct_AR1 visionTransform;                                                                                                                                   //@synthesize visionTransform=_visionTransform - In the implementation block
@property (assign,nonatomic) double estimatedScaleFactor;                                                                                                                                      //@synthesize estimatedScaleFactor=_estimatedScaleFactor - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)jointNames;
+(id)jointParentIndices;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(double)estimatedScaleFactor;
-(void)setEstimatedScaleFactor:(double)arg1 ;
-(SCD_Struct_AR1)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR1)arg1 ;
-(id)initWithModelJointTransforms:(const SCD_Struct_AR1*)arg1 localJointTransformsSRT:(const vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)arg2 numberOfTransforms:(unsigned long long)arg3 liftedSkeletonData:(id)arg4 identifier:(id)arg5 ;
-(BOOL)isJointTracked:(long long)arg1 ;
-(const SCD_Struct_AR1*)jointModelTransforms;
-(AR3DSkeletonDetectionResult *)liftedSkeletonData;
-(const SCD_Struct_AR1*)jointLocalTransforms;
-(unsigned long long)jointTransformCount;
-(const vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)localJointTransformsSRT;
@end


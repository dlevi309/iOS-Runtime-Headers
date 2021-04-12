/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AR2D3DSkeletonLiftingData;

@interface AR2DSkeletonDetectionResult : NSObject <NSSecureCoding, NSCopying> {

	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _rawJoints;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _rotatedJoints;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _rawJointsLocalSpace;
	vector<unsigned char, std::__1::allocator<unsigned char> > _jointTrackingStates;
	AR2D3DSkeletonLiftingData* _liftingData;
	long long _rotation;

}

@property (nonatomic,readonly) unsigned long long jointCount; 
@property (nonatomic,readonly) unsigned long long trackedJointCount; 
@property (nonatomic,readonly) const * joints; 
@property (nonatomic,readonly) const * jointsLocalSpace; 
@property (nonatomic,readonly) const char* jointTrackingStates; 
@property (nonatomic,readonly) const * rawJointsOutput; 
@property (nonatomic,readonly) const float* liftingData3D; 
@property (nonatomic,readonly) unsigned long long liftingJointCount; 
@property (nonatomic,readonly) AR2D3DSkeletonLiftingData * liftingData;              //@synthesize liftingData=_liftingData - In the implementation block
@property (nonatomic,readonly) long long rotation;                                   //@synthesize rotation=_rotation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)childrenIndices;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)rotation;
-(const *)joints;
-(const float*)liftingData3D;
-(unsigned long long)jointCount;
-(unsigned long long)trackedJointCount;
-(const char*)jointTrackingStates;
-(const *)rawJointsOutput;
-(id)initWithJoints:(const 1*)arg1 trackingStates:(const char*)arg2 numberOfJoints:(unsigned long long)arg3 rotation:(long long)arg4 croppedRect:(CGRect)arg5 liftingData:(id)arg6 ;
-(const *)jointsLocalSpace;
-(unsigned long long)liftingJointCount;
-(float)computeDistanceBetweenSkeletonDetectionResult:(id)arg1 ;
-(id)alignSkeleton:(id)arg1 rotationNeeded:(long long)arg2 ;
-(AR2D3DSkeletonLiftingData *)liftingData;
@end


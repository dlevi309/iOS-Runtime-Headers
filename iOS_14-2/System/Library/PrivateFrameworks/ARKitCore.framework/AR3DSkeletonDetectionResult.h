/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AR2DSkeletonDetectionResult;

@interface AR3DSkeletonDetectionResult : NSObject <NSSecureCoding, NSCopying> {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _jointsVector;
	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _jointsVectorLocalSpace;
	AR2DSkeletonDetectionResult* _skeletonDetectionResult2D;

}

@property (nonatomic,readonly) unsigned long long jointCount; 
@property (nonatomic,readonly) const * joints; 
@property (nonatomic,readonly) const * jointsLocalSpace; 
@property (nonatomic,readonly) AR2DSkeletonDetectionResult * skeletonDetectionResult2D;              //@synthesize skeletonDetectionResult2D=_skeletonDetectionResult2D - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)childrenIndices;
+(id)jointNames;
+(id)parentIndices;
-(void)encodeWithCoder:(id)arg1 ;
-(const *)joints;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)createResultScaledByFactor:(float)arg1 ;
-(unsigned long long)jointCount;
-(const *)jointsLocalSpace;
-(id)initWithJoints:(1*)arg1 numberOfJoints:(unsigned long long)arg2 referenceDetectionResult:(id)arg3 ;
-(AR2DSkeletonDetectionResult *)skeletonDetectionResult2D;
-(BOOL)isJointTracked:(long long)arg1 ;
@end


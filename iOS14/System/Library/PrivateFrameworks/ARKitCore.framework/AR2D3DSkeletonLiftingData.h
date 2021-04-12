/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AR2D3DSkeletonLiftingData : NSObject <NSSecureCoding, NSCopying> {

	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _rawJointsUsedForLifting;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _rotatedJointsUsedForLifting;
	array<float, 32> _multiArray;
	long long _rotationNeeded;

}

@property (nonatomic,readonly) const * joints; 
@property (nonatomic,readonly) unsigned long long jointCount; 
@property (nonatomic,readonly) const float* liftingData3D; 
@property (nonatomic,readonly) unsigned long long liftingData3DElementCount; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(const *)joints;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)liftingData3DElementCount;
-(const float*)liftingData3D;
-(unsigned long long)jointCount;
-(id)initWithHumanForLifting:(const Human*)arg1 imageSize:(CGSize)arg2 rotation:(long long)arg3 croppedRect:(CGRect)arg4 ;
-(void)_rotateAndUndoCroppingFromRect:(CGRect)arg1 ;
-(void)_prepareLiftingInput:(const Human*)arg1 jointTrackingState:(const array<unsigned char, 17>*)arg2 imageSize:(CGSize)arg3 pMultiArray:(float*)arg4 ;
-(id)initWithJoints:(const 1*)arg1 numberOfJoints:(unsigned long long)arg2 rotation:(long long)arg3 croppedRect:(CGRect)arg4 liftingData3D:(const float*)arg5 liftingData3DElementCount:(unsigned long long)arg6 ;
@end


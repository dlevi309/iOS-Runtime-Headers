/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARSkeleton.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARCoreRESkeletonResult;

@interface ARSkeleton3D : ARSkeleton <NSSecureCoding> {

	ARCoreRESkeletonResult* _skeleton;

}

@property (nonatomic,readonly) ARCoreRESkeletonResult * coreRESkeleton; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointModelTransforms; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointLocalTransforms; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)definition;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
-(const SCD_Struct_AR1*)jointModelTransforms;
-(ARCoreRESkeletonResult *)coreRESkeleton;
-(const SCD_Struct_AR1*)jointLocalTransforms;
-(id)initWithCoreRESkeletonResult:(id)arg1 ;
-(SCD_Struct_AR1)modelTransformForJointName:(id)arg1 ;
-(SCD_Struct_AR1)localTransformForJointName:(id)arg1 ;
@end


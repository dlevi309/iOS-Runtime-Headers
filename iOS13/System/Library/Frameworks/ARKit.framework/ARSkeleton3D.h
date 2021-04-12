/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARSkeleton.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARCoreRESkeletonResult;

@interface ARSkeleton3D : ARSkeleton <NSSecureCoding> {

	ARCoreRESkeletonResult* _skeleton;

}

@property (nonatomic,readonly) ARCoreRESkeletonResult * coreRESkeleton; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointModelTransforms; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointLocalTransforms; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)definition;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
-(const SCD_Struct_AR1*)jointModelTransforms;
-(ARCoreRESkeletonResult *)coreRESkeleton;
-(const SCD_Struct_AR1*)jointLocalTransforms;
-(id)initWithCoreRESkeletonResult:(id)arg1 ;
-(SCD_Struct_AR1)modelTransformForJointName:(id)arg1 ;
-(SCD_Struct_AR1)localTransformForJointName:(id)arg1 ;
@end


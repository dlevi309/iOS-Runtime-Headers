/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class NSArray, ARSkeleton3D;

@interface ARSkeletonDefinition : NSObject {

	NSArray* _jointNames;
	NSArray* _parentIndices;
	ARSkeleton3D* _neutralBodySkeleton3D;

}

@property (nonatomic,readonly) unsigned long long jointCount; 
@property (nonatomic,readonly) NSArray * jointNames;                              //@synthesize jointNames=_jointNames - In the implementation block
@property (nonatomic,readonly) NSArray * parentIndices;                           //@synthesize parentIndices=_parentIndices - In the implementation block
@property (nonatomic,readonly) ARSkeleton3D * neutralBodySkeleton3D;              //@synthesize neutralBodySkeleton3D=_neutralBodySkeleton3D - In the implementation block
+(id)defaultBody2DSkeletonDefinition;
+(id)defaultBody3DSkeletonDefinition;
-(unsigned long long)jointCount;
-(unsigned long long)indexForJointName:(id)arg1 ;
-(NSArray *)jointNames;
-(NSArray *)parentIndices;
-(ARSkeleton3D *)neutralBodySkeleton3D;
-(id)initDefault3DSkeletonDefinition;
-(id)initDefault2DSkeletonDefinition;
@end


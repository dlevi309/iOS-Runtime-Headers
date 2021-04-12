/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARAnchor.h>
#import <ARKitCore/ARTrackable.h>

@class ARCoreRESkeletonResult, ARBody2D, ARSkeleton3D, NSString;

@interface ARBodyAnchor : ARAnchor <ARTrackable> {

	BOOL _tracked;
	double _estimatedScaleFactor;
	ARCoreRESkeletonResult* _skeletonData;
	ARBody2D* _referenceBody;
	ARSkeleton3D* _skeleton;

}

@property (nonatomic,readonly) ARBody2D * referenceBody; 
@property (nonatomic,readonly) ARSkeleton3D * skeleton;                  //@synthesize skeleton=_skeleton - In the implementation block
@property (nonatomic,readonly) double estimatedScaleFactor; 
@property (nonatomic,readonly) BOOL isTracked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(ARSkeleton3D *)skeleton;
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTracked;
-(BOOL)isEqual:(id)arg1 ;
-(double)estimatedScaleFactor;
-(ARBody2D *)referenceBody;
-(id)copyWithTrackedState:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 tracked:(BOOL)arg3 skeletonData:(id)arg4 ;
-(BOOL)isEqualToARBodyAnchor:(id)arg1 ;
@end


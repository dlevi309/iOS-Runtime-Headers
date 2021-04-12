/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchor.h>
#import <ARKit/ARTrackable.h>

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isTracked; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(ARSkeleton3D *)skeleton;
-(double)estimatedScaleFactor;
-(BOOL)isTracked;
-(ARBody2D *)referenceBody;
-(id)copyWithTrackedState:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 tracked:(BOOL)arg3 skeletonData:(id)arg4 ;
-(BOOL)isEqualToARBodyAnchor:(id)arg1 ;
@end


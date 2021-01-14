/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARSkeleton.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AR2DSkeletonDetectionResult;

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding> {

	AR2DSkeletonDetectionResult* _skeleton;

}

@property (nonatomic,readonly) const * jointLandmarks; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)definition;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
-(const *)jointLandmarks;
-(id)initWithDetectedSkeleton:(id)arg1 ;
-(2)landmarkForJointNamed:(id)arg1 ;
@end


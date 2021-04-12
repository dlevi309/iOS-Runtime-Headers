/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARSkeleton.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AR2DSkeletonDetectionResult;

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding> {

	AR2DSkeletonDetectionResult* _skeleton;

}

@property (nonatomic,readonly) const * jointLandmarks; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)definition;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
-(const *)jointLandmarks;
-(id)initWithDetectedSkeleton:(id)arg1 ;
-(2)landmarkForJointNamed:(id)arg1 ;
@end


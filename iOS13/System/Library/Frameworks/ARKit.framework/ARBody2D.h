/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class ARSkeleton2D;

@interface ARBody2D : NSObject {

	ARSkeleton2D* _skeleton;

}

@property (nonatomic,readonly) ARSkeleton2D * skeleton;              //@synthesize skeleton=_skeleton - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ARSkeleton2D *)skeleton;
-(id)initWithSkeleton2D:(id)arg1 ;
@end


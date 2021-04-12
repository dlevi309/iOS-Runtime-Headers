/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class ARSkeleton2D;

@interface ARBody2D : NSObject {

	ARSkeleton2D* _skeleton;

}

@property (nonatomic,readonly) ARSkeleton2D * skeleton;              //@synthesize skeleton=_skeleton - In the implementation block
+(BOOL)supportsSecureCoding;
-(ARSkeleton2D *)skeleton;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSkeleton2D:(id)arg1 ;
@end


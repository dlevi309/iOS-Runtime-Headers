/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class ARSkeletonDefinition;

@interface ARSkeleton : NSObject {

	ARSkeletonDefinition* _definition;
	unsigned long long _jointCount;

}

@property (nonatomic,readonly) ARSkeletonDefinition * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) unsigned long long jointCount;                  //@synthesize jointCount=_jointCount - In the implementation block
-(ARSkeletonDefinition *)definition;
-(id)initPrivate;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
@end


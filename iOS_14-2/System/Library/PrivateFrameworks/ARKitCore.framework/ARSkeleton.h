/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class ARSkeletonDefinition;

@interface ARSkeleton : NSObject {

	ARSkeletonDefinition* _definition;
	unsigned long long _jointCount;

}

@property (nonatomic,readonly) ARSkeletonDefinition * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) unsigned long long jointCount;                  //@synthesize jointCount=_jointCount - In the implementation block
-(id)initPrivate;
-(ARSkeletonDefinition *)definition;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIVectorOperatable;
@interface UIViewUpdateVelocityAnimationDescription : NSObject {

	id<UIVectorOperatable> _velocity;
	id<UIVectorOperatable> _targetVelocity;

}

@property (nonatomic,retain) id<UIVectorOperatable> velocity;                    //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> targetVelocity;              //@synthesize targetVelocity=_targetVelocity - In the implementation block
+(id)descriptionWithVelocity:(id)arg1 targetVelocity:(id)arg2 ;
-(id<UIVectorOperatable>)velocity;
-(void)setVelocity:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)targetVelocity;
-(void)setTargetVelocity:(id<UIVectorOperatable>)arg1 ;
-(id)initWithVelocity:(id)arg1 targetVelocity:(id)arg2 ;
@end


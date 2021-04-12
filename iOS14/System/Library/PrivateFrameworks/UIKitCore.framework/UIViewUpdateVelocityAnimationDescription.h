/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVelocity:(id<UIVectorOperatable>)arg1 ;
-(void)setTargetVelocity:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)velocity;
-(id<UIVectorOperatable>)targetVelocity;
-(id)initWithVelocity:(id)arg1 targetVelocity:(id)arg2 ;
@end


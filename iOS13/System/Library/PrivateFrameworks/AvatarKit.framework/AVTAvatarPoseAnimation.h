/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class AVTAvatarPose, NSDictionary;

@interface AVTAvatarPoseAnimation : NSObject {

	AVTAvatarPose* _staticPose;
	NSDictionary* _staticPhysicsStates;
	NSDictionary* _blendshapeAnimations;
	NSDictionary* _perNodeAnimations;

}

@property (nonatomic,readonly) AVTAvatarPose * staticPose;              //@synthesize staticPose=_staticPose - In the implementation block
@property (nonatomic,readonly) double duration; 
+(void)removeAllPoseAnimationsOnAvatar:(id)arg1 ;
+(id)animationFromRepresentation:(id)arg1 keyPath:(id)arg2 ;
+(void)enumerateRepresentationsForAnimation:(id)arg1 block:(/*^block*/id)arg2 ;
-(double)duration;
-(id)initWithScene:(id)arg1 ;
-(AVTAvatarPose *)staticPose;
-(void)applyOnAvatar:(id)arg1 ;
-(id)animationForAvatar:(id)arg1 ;
-(id)initWithSceneAtURL:(id)arg1 ;
-(id)initWithStaticPose:(id)arg1 staticPhysicsStates:(id)arg2 ;
-(id)initWithStaticPoseRepresentation:(id)arg1 animatedPoseRepresentation:(id)arg2 staticPhysicsStatesRepresentation:(id)arg3 ;
-(id)staticPoseRepresentation;
-(id)animatedPoseRepresentation;
@end


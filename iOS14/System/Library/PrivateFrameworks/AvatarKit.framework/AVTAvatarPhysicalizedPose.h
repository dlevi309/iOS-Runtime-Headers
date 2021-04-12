/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class AVTAvatarPose, NSDictionary;

@interface AVTAvatarPhysicalizedPose : NSObject {

	AVTAvatarPose* _pose;
	NSDictionary* _physicsStates;

}

@property (nonatomic,readonly) AVTAvatarPose * pose;                      //@synthesize pose=_pose - In the implementation block
@property (nonatomic,readonly) NSDictionary * physicsStates;              //@synthesize physicsStates=_physicsStates - In the implementation block
-(AVTAvatarPose *)pose;
-(id)initWithPose:(id)arg1 physicsStates:(id)arg2 ;
-(void)applyToAvatar:(id)arg1 ;
-(NSDictionary *)physicsStates;
-(id)initWithSceneAtURL:(id)arg1 ;
-(id)initWithPoseRepresentation:(id)arg1 physicsStatesRepresentation:(id)arg2 ;
@end


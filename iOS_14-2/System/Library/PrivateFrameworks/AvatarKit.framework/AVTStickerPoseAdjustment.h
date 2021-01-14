/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString, AVTAvatarPose;

@interface AVTStickerPoseAdjustment : NSObject {

	long long _presetCategory;
	NSString* _presetIdentifier;
	AVTAvatarPose* _pose;

}

@property (assign,nonatomic) long long presetCategory;                 //@synthesize presetCategory=_presetCategory - In the implementation block
@property (nonatomic,retain) NSString * presetIdentifier;              //@synthesize presetIdentifier=_presetIdentifier - In the implementation block
@property (nonatomic,retain) AVTAvatarPose * pose;                     //@synthesize pose=_pose - In the implementation block
-(AVTAvatarPose *)pose;
-(void)setPose:(AVTAvatarPose *)arg1 ;
-(long long)presetCategory;
-(NSString *)presetIdentifier;
-(void)setPresetIdentifier:(NSString *)arg1 ;
-(id)poseByApplyingToPose:(id)arg1 forAvatar:(id)arg2 ;
-(void)setPresetCategory:(long long)arg1 ;
@end


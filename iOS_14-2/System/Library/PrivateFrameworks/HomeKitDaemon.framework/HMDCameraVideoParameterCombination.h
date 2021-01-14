/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDH264Profile, HMDH264Level, HMDCameraVideoTier;

@interface HMDCameraVideoParameterCombination : HMFObject {

	HMDH264Profile* _profile;
	HMDH264Level* _level;
	HMDCameraVideoTier* _videoTier;

}

@property (nonatomic,readonly) HMDH264Profile * profile;                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HMDH264Level * level;                        //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) HMDCameraVideoTier * videoTier;              //@synthesize videoTier=_videoTier - In the implementation block
-(id)description;
-(HMDH264Level *)level;
-(HMDH264Profile *)profile;
-(BOOL)isEqual:(id)arg1 ;
-(HMDCameraVideoTier *)videoTier;
-(id)initWithProfile:(id)arg1 level:(id)arg2 videoTier:(id)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSString, AVTAvatarPose, NSArray;

@interface AVTAvatarAttributeEditorSectionOptions : NSObject {

	NSString* _framingMode;
	AVTAvatarPose* _poseOverride;
	NSArray* _presetOverrides;
	unsigned long long _displayMode;

}

@property (nonatomic,copy,readonly) NSString * framingMode;                    //@synthesize framingMode=_framingMode - In the implementation block
@property (nonatomic,copy,readonly) AVTAvatarPose * poseOverride;              //@synthesize poseOverride=_poseOverride - In the implementation block
@property (nonatomic,copy,readonly) NSArray * presetOverrides;                 //@synthesize presetOverrides=_presetOverrides - In the implementation block
@property (nonatomic,readonly) unsigned long long displayMode;                 //@synthesize displayMode=_displayMode - In the implementation block
-(unsigned long long)displayMode;
-(NSString *)framingMode;
-(id)description;
-(NSArray *)presetOverrides;
-(AVTAvatarPose *)poseOverride;
-(id)initWithFramingMode:(id)arg1 poseOverride:(id)arg2 presetOverrides:(id)arg3 displayMode:(unsigned long long)arg4 ;
-(id)stringForDisplayMode;
@end


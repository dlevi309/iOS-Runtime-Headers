/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSString, NSArray, AVTCoreModelFramingModeOverrides, AVTAvatarPose, AVTCoreModelRowDisplayCondition;

@interface AVTCoreModelRowOptions : NSObject {

	BOOL _separator;
	NSString* _framingMode;
	NSArray* _presetOverrides;
	AVTCoreModelFramingModeOverrides* _framingModeOverrides;
	AVTAvatarPose* _poseOverride;
	AVTCoreModelRowDisplayCondition* _displayCondition;
	unsigned long long _displayMode;

}

@property (nonatomic,copy,readonly) NSString * framingMode;                                          //@synthesize framingMode=_framingMode - In the implementation block
@property (nonatomic,readonly) BOOL separator;                                                       //@synthesize separator=_separator - In the implementation block
@property (nonatomic,copy,readonly) NSArray * presetOverrides;                                       //@synthesize presetOverrides=_presetOverrides - In the implementation block
@property (nonatomic,readonly) AVTCoreModelFramingModeOverrides * framingModeOverrides;              //@synthesize framingModeOverrides=_framingModeOverrides - In the implementation block
@property (nonatomic,copy,readonly) AVTAvatarPose * poseOverride;                                    //@synthesize poseOverride=_poseOverride - In the implementation block
@property (nonatomic,readonly) AVTCoreModelRowDisplayCondition * displayCondition;                   //@synthesize displayCondition=_displayCondition - In the implementation block
@property (nonatomic,readonly) unsigned long long displayMode;                                       //@synthesize displayMode=_displayMode - In the implementation block
+(unsigned long long)displayModeFromString:(id)arg1 ;
-(BOOL)separator;
-(unsigned long long)displayMode;
-(id)initWithFramingMode:(id)arg1 separatorFlag:(BOOL)arg2 presetOverrides:(id)arg3 poseOverride:(id)arg4 framingModeOverrides:(id)arg5 displayMode:(unsigned long long)arg6 displayCondition:(id)arg7 ;
-(NSString *)framingMode;
-(NSArray *)presetOverrides;
-(AVTCoreModelFramingModeOverrides *)framingModeOverrides;
-(AVTAvatarPose *)poseOverride;
-(AVTCoreModelRowDisplayCondition *)displayCondition;
@end


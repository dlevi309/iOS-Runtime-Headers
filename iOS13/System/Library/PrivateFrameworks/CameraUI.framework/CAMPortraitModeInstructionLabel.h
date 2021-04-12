/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMInstructionLabel.h>

@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel {

	long long _shallowDepthOfFieldStatus;
	long long _flashMode;
	unsigned long long _numberOfPeopleFound;
	long long _devicePosition;
	long long _lightingType;

}

@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                 //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
@property (assign,nonatomic) long long flashMode;                                 //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeopleFound;              //@synthesize numberOfPeopleFound=_numberOfPeopleFound - In the implementation block
@property (assign,nonatomic) long long devicePosition;                            //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) long long lightingType;                              //@synthesize lightingType=_lightingType - In the implementation block
+(BOOL)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)arg1 ;
+(id)_textForShallowDepthOfFieldStatus:(long long)arg1 numberOfPeopleFound:(unsigned long long)arg2 flashMode:(long long)arg3 devicePosition:(long long)arg4 lightingType:(long long)arg5 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(long long)devicePosition;
-(void)setDevicePosition:(long long)arg1 ;
-(long long)lightingType;
-(void)setLightingType:(long long)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(long long)shallowDepthOfFieldStatus;
-(void)_updateTextWithPriorStatus:(long long)arg1 ;
-(unsigned long long)numberOfPeopleFound;
-(void)setNumberOfPeopleFound:(unsigned long long)arg1 ;
@end


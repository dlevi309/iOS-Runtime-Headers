/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _lowLightStatus;
	long long _lowLightMode;

}

@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                 //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
@property (assign,nonatomic) long long flashMode;                                 //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeopleFound;              //@synthesize numberOfPeopleFound=_numberOfPeopleFound - In the implementation block
@property (assign,nonatomic) long long devicePosition;                            //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) long long lightingType;                              //@synthesize lightingType=_lightingType - In the implementation block
@property (assign,nonatomic) long long lowLightStatus;                            //@synthesize lowLightStatus=_lowLightStatus - In the implementation block
@property (assign,nonatomic) long long lowLightMode;                              //@synthesize lowLightMode=_lowLightMode - In the implementation block
+(id)_textForShallowDepthOfFieldStatus:(long long)arg1 numberOfPeopleFound:(unsigned long long)arg2 flashMode:(long long)arg3 devicePosition:(long long)arg4 lightingType:(long long)arg5 lowlightMode:(long long)arg6 lowLightStatus:(long long)arg7 ;
+(BOOL)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(long long)flashMode;
-(long long)shallowDepthOfFieldStatus;
-(long long)devicePosition;
-(long long)lowLightStatus;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDevicePosition:(long long)arg1 ;
-(long long)lightingType;
-(void)setLowLightMode:(long long)arg1 ;
-(void)setLightingType:(long long)arg1 ;
-(long long)lowLightMode;
-(void)_updateTextWithPriorStatus:(long long)arg1 ;
-(unsigned long long)numberOfPeopleFound;
-(void)setNumberOfPeopleFound:(unsigned long long)arg1 ;
-(void)setLowLightStatus:(long long)arg1 ;
@end


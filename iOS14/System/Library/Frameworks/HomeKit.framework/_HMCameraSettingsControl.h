/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

@interface _HMCameraSettingsControl : _HMCameraControl {

	HMCharacteristic* _nightVision;
	HMCharacteristic* _currentHorizontalTilt;
	HMCharacteristic* _targetHorizontalTilt;
	HMCharacteristic* _currentVerticalTilt;
	HMCharacteristic* _targetVerticalTilt;
	HMCharacteristic* _opticalZoom;
	HMCharacteristic* _digitalZoom;
	HMCharacteristic* _imageRotation;
	HMCharacteristic* _imageMirroring;

}

@property (nonatomic,retain) HMCharacteristic * nightVision;                        //@synthesize nightVision=_nightVision - In the implementation block
@property (nonatomic,retain) HMCharacteristic * currentHorizontalTilt;              //@synthesize currentHorizontalTilt=_currentHorizontalTilt - In the implementation block
@property (nonatomic,retain) HMCharacteristic * targetHorizontalTilt;               //@synthesize targetHorizontalTilt=_targetHorizontalTilt - In the implementation block
@property (nonatomic,retain) HMCharacteristic * currentVerticalTilt;                //@synthesize currentVerticalTilt=_currentVerticalTilt - In the implementation block
@property (nonatomic,retain) HMCharacteristic * targetVerticalTilt;                 //@synthesize targetVerticalTilt=_targetVerticalTilt - In the implementation block
@property (nonatomic,retain) HMCharacteristic * opticalZoom;                        //@synthesize opticalZoom=_opticalZoom - In the implementation block
@property (nonatomic,retain) HMCharacteristic * digitalZoom;                        //@synthesize digitalZoom=_digitalZoom - In the implementation block
@property (nonatomic,retain) HMCharacteristic * imageRotation;                      //@synthesize imageRotation=_imageRotation - In the implementation block
@property (nonatomic,retain) HMCharacteristic * imageMirroring;                     //@synthesize imageMirroring=_imageMirroring - In the implementation block
-(HMCharacteristic *)nightVision;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(void)setNightVision:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)currentHorizontalTilt;
-(void)setCurrentHorizontalTilt:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)targetHorizontalTilt;
-(void)setTargetHorizontalTilt:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)currentVerticalTilt;
-(void)setCurrentVerticalTilt:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)targetVerticalTilt;
-(void)setTargetVerticalTilt:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)opticalZoom;
-(void)setOpticalZoom:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)digitalZoom;
-(void)setDigitalZoom:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)imageRotation;
-(void)setImageRotation:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)imageMirroring;
-(void)setImageMirroring:(HMCharacteristic *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraControl.h>

@class _HMCameraSettingsControl, HMCharacteristic;

@interface HMCameraSettingsControl : HMCameraControl {

	_HMCameraSettingsControl* _settingsControl;

}

@property (nonatomic,retain) _HMCameraSettingsControl * settingsControl;              //@synthesize settingsControl=_settingsControl - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * nightVision; 
@property (nonatomic,readonly) HMCharacteristic * currentHorizontalTilt; 
@property (nonatomic,readonly) HMCharacteristic * targetHorizontalTilt; 
@property (nonatomic,readonly) HMCharacteristic * currentVerticalTilt; 
@property (nonatomic,readonly) HMCharacteristic * targetVerticalTilt; 
@property (nonatomic,readonly) HMCharacteristic * opticalZoom; 
@property (nonatomic,readonly) HMCharacteristic * digitalZoom; 
@property (nonatomic,readonly) HMCharacteristic * imageRotation; 
@property (nonatomic,readonly) HMCharacteristic * imageMirroring; 
-(HMCharacteristic *)nightVision;
-(HMCharacteristic *)currentHorizontalTilt;
-(HMCharacteristic *)targetHorizontalTilt;
-(HMCharacteristic *)currentVerticalTilt;
-(HMCharacteristic *)targetVerticalTilt;
-(HMCharacteristic *)opticalZoom;
-(HMCharacteristic *)digitalZoom;
-(HMCharacteristic *)imageRotation;
-(HMCharacteristic *)imageMirroring;
-(_HMCameraSettingsControl *)settingsControl;
-(id)initWithSettingsControl:(id)arg1 ;
-(void)setSettingsControl:(_HMCameraSettingsControl *)arg1 ;
@end


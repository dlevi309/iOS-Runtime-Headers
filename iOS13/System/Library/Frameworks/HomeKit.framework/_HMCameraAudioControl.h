/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

@interface _HMCameraAudioControl : _HMCameraControl {

	HMCharacteristic* _mute;
	HMCharacteristic* _volume;

}

@property (nonatomic,readonly) HMCharacteristic * mute;                //@synthesize mute=_mute - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * volume;              //@synthesize volume=_volume - In the implementation block
-(HMCharacteristic *)volume;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(HMCharacteristic *)mute;
@end


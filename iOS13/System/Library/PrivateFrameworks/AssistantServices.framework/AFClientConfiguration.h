/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFAccessibilityState, AFAudioPlaybackRequest;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isDeviceInSetupFlow;
	BOOL _isDeviceInCarDNDMode;
	BOOL _isDeviceInStarkMode;
	float _outputVolume;
	AFAccessibilityState* _accessibilityState;
	long long _deviceRingerSwitchState;
	AFAudioPlaybackRequest* _tapToSiriAudioPlaybackRequest;
	AFAudioPlaybackRequest* _twoShotAudioPlaybackRequest;

}

@property (nonatomic,copy,readonly) AFAccessibilityState * accessibilityState;                           //@synthesize accessibilityState=_accessibilityState - In the implementation block
@property (nonatomic,readonly) long long deviceRingerSwitchState;                                        //@synthesize deviceRingerSwitchState=_deviceRingerSwitchState - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceInSetupFlow;                                                 //@synthesize isDeviceInSetupFlow=_isDeviceInSetupFlow - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceInCarDNDMode;                                                //@synthesize isDeviceInCarDNDMode=_isDeviceInCarDNDMode - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceInStarkMode;                                                 //@synthesize isDeviceInStarkMode=_isDeviceInStarkMode - In the implementation block
@property (nonatomic,readonly) float outputVolume;                                                       //@synthesize outputVolume=_outputVolume - In the implementation block
@property (nonatomic,copy,readonly) AFAudioPlaybackRequest * tapToSiriAudioPlaybackRequest;              //@synthesize tapToSiriAudioPlaybackRequest=_tapToSiriAudioPlaybackRequest - In the implementation block
@property (nonatomic,copy,readonly) AFAudioPlaybackRequest * twoShotAudioPlaybackRequest;                //@synthesize twoShotAudioPlaybackRequest=_twoShotAudioPlaybackRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(float)outputVolume;
-(BOOL)isDeviceInStarkMode;
-(BOOL)isDeviceInCarDNDMode;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithAccessibilityState:(id)arg1 deviceRingerSwitchState:(long long)arg2 isDeviceInSetupFlow:(BOOL)arg3 isDeviceInCarDNDMode:(BOOL)arg4 isDeviceInStarkMode:(BOOL)arg5 outputVolume:(float)arg6 tapToSiriAudioPlaybackRequest:(id)arg7 twoShotAudioPlaybackRequest:(id)arg8 ;
-(long long)deviceRingerSwitchState;
-(BOOL)isDeviceInSetupFlow;
-(AFAccessibilityState *)accessibilityState;
-(AFAudioPlaybackRequest *)tapToSiriAudioPlaybackRequest;
-(AFAudioPlaybackRequest *)twoShotAudioPlaybackRequest;
@end


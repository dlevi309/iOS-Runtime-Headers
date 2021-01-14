/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClientConfigurationMutating.h>

@class AFClientConfiguration, AFAccessibilityState, AFAudioPlaybackRequest, NSString;

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating> {

	AFClientConfiguration* _baseModel;
	AFAccessibilityState* _accessibilityState;
	long long _deviceRingerSwitchState;
	BOOL _isDeviceInSetupFlow;
	BOOL _isDeviceInCarDNDMode;
	BOOL _isDeviceInStarkMode;
	float _outputVolume;
	AFAudioPlaybackRequest* _tapToSiriAudioPlaybackRequest;
	AFAudioPlaybackRequest* _twoShotAudioPlaybackRequest;
	struct {
		unsigned isDirty : 1;
		unsigned hasAccessibilityState : 1;
		unsigned hasDeviceRingerSwitchState : 1;
		unsigned hasIsDeviceInSetupFlow : 1;
		unsigned hasIsDeviceInCarDNDMode : 1;
		unsigned hasIsDeviceInStarkMode : 1;
		unsigned hasOutputVolume : 1;
		unsigned hasTapToSiriAudioPlaybackRequest : 1;
		unsigned hasTwoShotAudioPlaybackRequest : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setOutputVolume:(float)arg1 ;
-(void)setIsDeviceInSetupFlow:(BOOL)arg1 ;
-(void)setTapToSiriAudioPlaybackRequest:(id)arg1 ;
-(void)setTwoShotAudioPlaybackRequest:(id)arg1 ;
-(void)setAccessibilityState:(id)arg1 ;
-(void)setDeviceRingerSwitchState:(long long)arg1 ;
-(void)setIsDeviceInStarkMode:(BOOL)arg1 ;
-(void)setIsDeviceInCarDNDMode:(BOOL)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end


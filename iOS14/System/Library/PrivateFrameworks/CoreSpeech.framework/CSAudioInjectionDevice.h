/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSString, NSUUID, CSAudioInjectionEngine;

@interface CSAudioInjectionDevice : NSObject {

	BOOL _isConnected;
	BOOL _enableAlwaysOnVoiceTrigger;
	long long _deviceType;
	NSString* _deviceName;
	NSString* _deviceID;
	NSUUID* _deviceUID;
	NSString* _productIdentifier;
	CSAudioInjectionEngine* _injectionEngine;

}

@property (nonatomic,readonly) long long deviceType;                                       //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                                        //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSUUID * deviceUID;                                         //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,readonly) NSString * productIdentifier;                               //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                                             //@synthesize isConnected=_isConnected - In the implementation block
@property (nonatomic,readonly) BOOL isPluginDevice; 
@property (assign,nonatomic) BOOL enableAlwaysOnVoiceTrigger;                              //@synthesize enableAlwaysOnVoiceTrigger=_enableAlwaysOnVoiceTrigger - In the implementation block
@property (assign,nonatomic,__weak) CSAudioInjectionEngine * injectionEngine;              //@synthesize injectionEngine=_injectionEngine - In the implementation block
-(BOOL)isConnected;
-(long long)deviceType;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(NSUUID *)deviceUID;
-(NSString *)productIdentifier;
-(void)setIsConnected:(BOOL)arg1 ;
-(BOOL)enableAlwaysOnVoiceTrigger;
-(id)initWithDeviceType:(long long)arg1 deviceName:(id)arg2 deviceID:(id)arg3 productID:(id)arg4 ;
-(BOOL)isPluginDevice;
-(void)setInjectionEngine:(CSAudioInjectionEngine *)arg1 ;
-(CSAudioInjectionEngine *)injectionEngine;
-(BOOL)speakAudio:(id)arg1 ;
-(BOOL)speakAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)speakAudio:(id)arg1 withScaleFactor:(float)arg2 outASBD:(AudioStreamBasicDescription)arg3 playbackStarted:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setEnableAlwaysOnVoiceTrigger:(BOOL)arg1 ;
@end


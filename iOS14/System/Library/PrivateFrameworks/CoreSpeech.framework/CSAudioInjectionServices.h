/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSAudioInjectionServices : NSObject
+(void)pingpong:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)createAudioInjectionDeviceWithType:(long long)arg1 deviceName:(id)arg2 deviceID:(id)arg3 productID:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)connectDeviceWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)disconnectDeviceWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)primaryInputDeviceUUIDWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)audioInjectionEnabled;
+(id)getAudioInjectionXPCConnection;
+(void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 withfadingTimeWindowLength:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)setAudioInjectionMode:(BOOL)arg1 ;
+(void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class AVAudioDeviceList;

@interface AVAudioClient : NSObject {

	AVAudioDeviceList* deviceList;

}

@property (nonatomic,retain) AVAudioDeviceList * deviceList; 
@property (assign,nonatomic) id changeListener; 
+(void)setMicrophoneMuted:(BOOL)arg1 ;
+(BOOL)isMicrophoneMuted;
+(id)currentOutputDevice;
+(id)currentInputDevice;
+(id)defaultOutputDevice;
+(BOOL)hasActiveAudioSession;
+(void)stopAudioSession;
+(BOOL)setOutputDevice:(id)arg1 ;
+(id)defaultInputDevice;
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)setInputDevice:(id)arg1 ;
+(void)initializeAudioSessionQ;
+(void)resetAudioSessionOutputPortOverride;
-(id)devices;
-(id)init;
-(id)inputDevices;
-(id)outputDevices;
-(void)dealloc;
-(AVAudioDeviceList *)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
-(void)setDeviceList:(AVAudioDeviceList *)arg1 ;
@end


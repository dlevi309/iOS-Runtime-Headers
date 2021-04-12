/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class AVAudioDeviceList;

@interface AVAudioClient : NSObject {

	AVAudioDeviceList* deviceList;

}

@property (nonatomic,retain) AVAudioDeviceList * deviceList; 
@property (assign,nonatomic) id changeListener; 
+(id)currentInputDevice;
+(id)currentOutputDevice;
+(BOOL)hasActiveAudioSession;
+(void)stopAudioSession;
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)startAudioSession;
+(void)setMicrophoneMuted:(BOOL)arg1 ;
+(BOOL)isMicrophoneMuted;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)setInputDevice:(id)arg1 ;
+(BOOL)setOutputDevice:(id)arg1 ;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(void)initializeAudioSessionQ;
+(void)resetAudioSessionOutputPortOverride;
-(id)init;
-(void)dealloc;
-(id)devices;
-(id)inputDevices;
-(id)outputDevices;
-(AVAudioDeviceList *)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
-(void)setDeviceList:(AVAudioDeviceList *)arg1 ;
@end


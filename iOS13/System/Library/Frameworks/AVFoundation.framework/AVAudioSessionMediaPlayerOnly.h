/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject {

	AVAudioSessionMediaPlayerOnlyInternal* _audioSession;

}

@property (assign) id<AVAudioSessionDelegateMediaPlayerOnly> delegate; 
@property (readonly) NSString * category; 
@property (readonly) NSString * mode; 
@property (readonly) double preferredHardwareSampleRate; 
@property (readonly) double preferredIOBufferDuration; 
@property (readonly) BOOL inputIsAvailable; 
@property (readonly) double currentHardwareSampleRate; 
@property (readonly) long long currentHardwareInputNumberOfChannels; 
@property (readonly) long long currentHardwareOutputNumberOfChannels; 
@property (readonly) BOOL canEnterPIPMode; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id<AVAudioSessionDelegateMediaPlayerOnly>)delegate;
-(void)setDelegate:(id<AVAudioSessionDelegateMediaPlayerOnly>)arg1 ;
-(NSString *)category;
-(NSString *)mode;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(double)preferredIOBufferDuration;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(id)_weakReference;
-(void)_attachToPlayer:(id)arg1 ;
-(void)_addFPListeners;
-(void)_removeFPListeners;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(void)setApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)setActivationContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)setUsingLongFormAudio:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(BOOL)inputIsAvailable;
-(double)currentHardwareSampleRate;
-(long long)currentHardwareInputNumberOfChannels;
-(long long)currentHardwareOutputNumberOfChannels;
-(BOOL)isApplicationAudioSession;
-(BOOL)canEnterPIPMode;
@end


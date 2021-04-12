/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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
-(NSString *)mode;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(void)setApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(id<AVAudioSessionDelegateMediaPlayerOnly>)delegate;
-(double)currentHardwareSampleRate;
-(BOOL)canEnterPIPMode;
-(NSString *)category;
-(BOOL)setActivationContext:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<AVAudioSessionDelegateMediaPlayerOnly>)arg1 ;
-(BOOL)inputIsAvailable;
-(BOOL)setUsingLongFormAudio:(BOOL)arg1 error:(id*)arg2 ;
-(id)_weakReference;
-(void)_removeFPListeners;
-(long long)currentHardwareOutputNumberOfChannels;
-(void)_attachToPlayer:(id)arg1 ;
-(void)_addFPListeners;
-(BOOL)isApplicationAudioSession;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(long long)currentHardwareInputNumberOfChannels;
-(double)preferredIOBufferDuration;
-(void)dealloc;
@end


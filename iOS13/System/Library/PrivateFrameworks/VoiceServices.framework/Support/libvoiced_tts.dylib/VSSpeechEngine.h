/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class NSString, VSSpeechSynthesisCallbackResult;

@interface VSSpeechEngine : NSObject {

	float _rate;
	float _pitch;
	float _volume;
	NSString* _voicePath;
	unsigned long long _pcmBufferSize;
	TTSSynthesizer* _synthesizer;
	VSSpeechSynthesisCallbackResult* _currentCallbackResult;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSString * voicePath;                                                 //@synthesize voicePath=_voicePath - In the implementation block
@property (assign,nonatomic) TTSSynthesizer* synthesizer;                                          //@synthesize synthesizer=_synthesizer - In the implementation block
@property (nonatomic,retain) VSSpeechSynthesisCallbackResult * currentCallbackResult;              //@synthesize currentCallbackResult=_currentCallbackResult - In the implementation block
@property (assign,nonatomic) unsigned long long pcmBufferSize;                                     //@synthesize pcmBufferSize=_pcmBufferSize - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;                                   //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) float rate;                                                           //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                                          //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                                         //@synthesize volume=_volume - In the implementation block
+(BOOL)isUserCancelError:(id)arg1 ;
-(void)dealloc;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)preheat;
-(void)setSynthesizer:(TTSSynthesizer*)arg1 ;
-(TTSSynthesizer*)synthesizer;
-(NSString *)voicePath;
-(void)setVoicePath:(NSString *)arg1 ;
-(id)synthesizeText:(id)arg1 loggable:(BOOL)arg2 callback:(/*^block*/id)arg3 ;
-(unsigned long long)pcmBufferSize;
-(AudioStreamBasicDescription)asbd;
-(void)setPcmBufferSize:(unsigned long long)arg1 ;
-(id)initWithVoicePath:(id)arg1 resourcePath:(id)arg2 ;
-(void)stopAtMarker:(long long)arg1 ;
-(id)loadResourceAtPath:(id)arg1 mimeType:(id)arg2 ;
-(BOOL)initializeWithResourcePath:(id)arg1 ;
-(VSSpeechSynthesisCallbackResult *)currentCallbackResult;
-(void)setCurrentCallbackResult:(VSSpeechSynthesisCallbackResult *)arg1 ;
@end


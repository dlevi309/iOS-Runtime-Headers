/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)hasPhaticResponses:(id)arg1 ;
+(id)mimeForFileExtension:(id)arg1 ;
+(BOOL)isUserCancelError:(id)arg1 ;
-(void)preheat;
-(float)pitch;
-(void)setVolume:(float)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(void)setRate:(float)arg1 ;
-(NSString *)voicePath;
-(void)setVoicePath:(NSString *)arg1 ;
-(float)rate;
-(void)setSynthesizer:(TTSSynthesizer*)arg1 ;
-(TTSSynthesizer*)synthesizer;
-(void)setPitch:(float)arg1 ;
-(float)volume;
-(void)dealloc;
-(id)synthesizeText:(id)arg1 loggable:(BOOL)arg2 callback:(/*^block*/id)arg3 ;
-(unsigned long long)pcmBufferSize;
-(void)setPcmBufferSize:(unsigned long long)arg1 ;
-(id)initWithVoicePath:(id)arg1 resourcePath:(id)arg2 ;
-(void)stopAtMarker:(long long)arg1 ;
-(id)loadResource:(id)arg1 error:(id*)arg2 ;
-(void)unloadResource:(id)arg1 ;
-(id)loadResourceAtPath:(id)arg1 mimeType:(id)arg2 error:(id*)arg3 ;
-(BOOL)initializeWithResourcePath:(id)arg1 ;
-(VSSpeechSynthesisCallbackResult *)currentCallbackResult;
-(void)setCurrentCallbackResult:(VSSpeechSynthesisCallbackResult *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@interface VSVoiceBooster : NSObject {

	float _voiceBoostGainDecibels;
	unsigned long long _pcmBufferSize;
	OpaqueAudioConverterRef _floatConverter;
	OpaqueAudioConverterRef _integerConverter;
	OpaqueAudioComponentInstanceRef _voiceBoostUnit;
	AudioStreamBasicDescription _asbd;
	AudioTimeStamp _audioTimeStamp;

}

@property (assign,nonatomic) AudioStreamBasicDescription asbd;                            //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) unsigned long long pcmBufferSize;                            //@synthesize pcmBufferSize=_pcmBufferSize - In the implementation block
@property (assign,nonatomic) OpaqueAudioConverterRef floatConverter;                      //@synthesize floatConverter=_floatConverter - In the implementation block
@property (assign,nonatomic) OpaqueAudioConverterRef integerConverter;                    //@synthesize integerConverter=_integerConverter - In the implementation block
@property (assign,nonatomic) OpaqueAudioComponentInstanceRef voiceBoostUnit;              //@synthesize voiceBoostUnit=_voiceBoostUnit - In the implementation block
@property (assign,nonatomic) AudioTimeStamp audioTimeStamp;                               //@synthesize audioTimeStamp=_audioTimeStamp - In the implementation block
@property (assign,nonatomic) float voiceBoostGainDecibels;                                //@synthesize voiceBoostGainDecibels=_voiceBoostGainDecibels - In the implementation block
-(BOOL)initialize;
-(id)processData:(id)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(AudioTimeStamp)audioTimeStamp;
-(void)dealloc;
-(void)uninitialize;
-(float)voiceBoostGainDecibels;
-(unsigned long long)pcmBufferSize;
-(id)initWithStreamDescription:(AudioStreamBasicDescription)arg1 pcmBufferSize:(unsigned long long)arg2 ;
-(void)setVoiceBoostGainDecibels:(float)arg1 ;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)setPcmBufferSize:(unsigned long long)arg1 ;
-(OpaqueAudioConverterRef)floatConverter;
-(void)setFloatConverter:(OpaqueAudioConverterRef)arg1 ;
-(OpaqueAudioConverterRef)integerConverter;
-(void)setIntegerConverter:(OpaqueAudioConverterRef)arg1 ;
-(OpaqueAudioComponentInstanceRef)voiceBoostUnit;
-(void)setVoiceBoostUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
-(void)setAudioTimeStamp:(AudioTimeStamp)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechResponse.h>

@class NSString, NSData, OPTTSAudioDescription, NSArray, OPTTSTextToSpeechMeta;

@interface OPTTSMutableTextToSpeechResponse : OPTTSTextToSpeechResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) int sample_rate; 
@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) OPTTSAudioDescription * decoder_description; 
@property (nonatomic,copy) OPTTSAudioDescription * playback_description; 
@property (nonatomic,copy) NSArray * word_timing_info; 
@property (nonatomic,copy) OPTTSTextToSpeechMeta * meta_info; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)audio;
-(void)setAudio:(NSData *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(long long)audio_type;
-(OPTTSTextToSpeechMeta *)meta_info;
-(int)sample_rate;
-(int)error_code;
-(NSString *)error_str;
-(void)audio:(/*^block*/id)arg1 ;
-(OPTTSAudioDescription *)decoder_description;
-(OPTTSAudioDescription *)playback_description;
-(NSArray *)word_timing_info;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setAudio_type:(long long)arg1 ;
-(void)setMeta_info:(OPTTSTextToSpeechMeta *)arg1 ;
-(void)setSample_rate:(int)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)setDecoder_description:(OPTTSAudioDescription *)arg1 ;
-(void)setPlayback_description:(OPTTSAudioDescription *)arg1 ;
-(void)setWord_timing_info:(NSArray *)arg1 ;
@end


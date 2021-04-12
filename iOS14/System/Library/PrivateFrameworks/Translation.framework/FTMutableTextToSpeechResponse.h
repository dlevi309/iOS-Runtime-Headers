/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechResponse.h>

@class NSString, NSData, FTAudioDescription, NSArray, FTTextToSpeechMeta, FTTextToSpeechFeature;

@interface FTMutableTextToSpeechResponse : FTTextToSpeechResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) int sample_rate; 
@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) FTAudioDescription * decoder_description; 
@property (nonatomic,copy) FTAudioDescription * playback_description; 
@property (nonatomic,copy) NSArray * word_timing_info; 
@property (nonatomic,copy) FTTextToSpeechMeta * meta_info; 
@property (nonatomic,copy) FTTextToSpeechFeature * feature; 
-(FTTextToSpeechFeature *)feature;
-(id)init;
-(NSData *)audio;
-(void)audio:(/*^block*/id)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(FTTextToSpeechMeta *)meta_info;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(FTAudioDescription *)decoder_description;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setMeta_info:(FTTextToSpeechMeta *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(long long)audio_type;
-(void)setAudio_type:(long long)arg1 ;
-(int)sample_rate;
-(void)setSample_rate:(int)arg1 ;
-(void)setDecoder_description:(FTAudioDescription *)arg1 ;
-(FTAudioDescription *)playback_description;
-(void)setPlayback_description:(FTAudioDescription *)arg1 ;
-(NSArray *)word_timing_info;
-(void)setWord_timing_info:(NSArray *)arg1 ;
-(void)setAudio:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFeature:(FTTextToSpeechFeature *)arg1 ;
@end


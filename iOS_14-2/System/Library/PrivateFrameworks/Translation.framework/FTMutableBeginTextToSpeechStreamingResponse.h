/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBeginTextToSpeechStreamingResponse.h>

@class NSString, FTAudioDescription, FTTextToSpeechMeta;

@interface FTMutableBeginTextToSpeechStreamingResponse : FTBeginTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) long long audio_type; 
@property (nonatomic,copy) FTAudioDescription * decoder_description; 
@property (nonatomic,copy) FTAudioDescription * playback_description; 
@property (nonatomic,copy) FTTextToSpeechMeta * meta_info; 
@property (assign,nonatomic) float streaming_playback_buffer_size_in_seconds; 
-(id)init;
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
-(void)setDecoder_description:(FTAudioDescription *)arg1 ;
-(FTAudioDescription *)playback_description;
-(void)setPlayback_description:(FTAudioDescription *)arg1 ;
-(NSString *)stream_id;
-(void)setStream_id:(NSString *)arg1 ;
-(float)streaming_playback_buffer_size_in_seconds;
-(void)setStreaming_playback_buffer_size_in_seconds:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


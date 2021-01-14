/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSPartialTextToSpeechStreamingResponse.h>

@class NSString, NSData, NSArray;

@interface OPTTSMutablePartialTextToSpeechStreamingResponse : OPTTSPartialTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) int current_pkt_number; 
@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) NSArray * word_timing_info; 
-(id)init;
-(NSData *)audio;
-(void)audio:(/*^block*/id)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(NSArray *)word_timing_info;
-(void)setWord_timing_info:(NSArray *)arg1 ;
-(NSString *)stream_id;
-(void)setStream_id:(NSString *)arg1 ;
-(void)setAudio:(NSData *)arg1 ;
-(int)current_pkt_number;
-(void)setCurrent_pkt_number:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


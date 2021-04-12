/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSFinalTextToSpeechStreamingResponse.h>

@class NSString;

@interface OPTTSMutableFinalTextToSpeechStreamingResponse : OPTTSFinalTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) int total_pkt_number; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stream_id;
-(NSString *)speech_id;
-(NSString *)session_id;
-(int)error_code;
-(NSString *)error_str;
-(int)total_pkt_number;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setStream_id:(NSString *)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)setTotal_pkt_number:(int)arg1 ;
@end


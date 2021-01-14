/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechCacheMetaInfo.h>

@class FTTextToSpeechMeta, FTAudioDescription, NSString;

@interface FTMutableTextToSpeechCacheMetaInfo : FTTextToSpeechCacheMetaInfo

@property (nonatomic,copy) FTTextToSpeechMeta * meta_info; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) BOOL enable_word_timing_info; 
@property (nonatomic,copy) FTAudioDescription * decoder_description; 
@property (nonatomic,copy) FTAudioDescription * playback_description; 
@property (assign,nonatomic) int audio_length; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * original_session_id; 
-(id)init;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(FTTextToSpeechMeta *)meta_info;
-(FTAudioDescription *)decoder_description;
-(void)setMeta_info:(FTTextToSpeechMeta *)arg1 ;
-(long long)audio_type;
-(void)setAudio_type:(long long)arg1 ;
-(BOOL)enable_word_timing_info;
-(void)setEnable_word_timing_info:(BOOL)arg1 ;
-(void)setDecoder_description:(FTAudioDescription *)arg1 ;
-(FTAudioDescription *)playback_description;
-(void)setPlayback_description:(FTAudioDescription *)arg1 ;
-(int)audio_length;
-(void)setAudio_length:(int)arg1 ;
-(NSString *)original_session_id;
-(void)setOriginal_session_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


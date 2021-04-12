/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTErrorBlamerRequest.h>

@class FTStartSpeechRequest, NSArray, NSString, FTUserLanguageProfile, FTUserAcousticProfile;

@interface FTMutableErrorBlamerRequest : FTErrorBlamerRequest

@property (nonatomic,copy) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) NSArray * contextual_text; 
@property (nonatomic,copy) NSString * left_context; 
@property (nonatomic,copy) NSString * right_context; 
@property (nonatomic,copy) FTUserLanguageProfile * user_language_profile; 
@property (nonatomic,copy) FTUserAcousticProfile * user_acoustic_profile; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,copy) NSArray * audio_packets; 
@property (nonatomic,copy) NSString * ref_transcript; 
-(double)latitude;
-(id)init;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(FTStartSpeechRequest *)start_speech_request;
-(void)setStart_speech_request:(FTStartSpeechRequest *)arg1 ;
-(NSArray *)contextual_text;
-(void)setContextual_text:(NSArray *)arg1 ;
-(NSString *)left_context;
-(void)setLeft_context:(NSString *)arg1 ;
-(NSString *)right_context;
-(void)setRight_context:(NSString *)arg1 ;
-(FTUserLanguageProfile *)user_language_profile;
-(void)setUser_language_profile:(FTUserLanguageProfile *)arg1 ;
-(FTUserAcousticProfile *)user_acoustic_profile;
-(void)setUser_acoustic_profile:(FTUserAcousticProfile *)arg1 ;
-(NSArray *)audio_packets;
-(void)setAudio_packets:(NSArray *)arg1 ;
-(NSString *)ref_transcript;
-(void)setRef_transcript:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


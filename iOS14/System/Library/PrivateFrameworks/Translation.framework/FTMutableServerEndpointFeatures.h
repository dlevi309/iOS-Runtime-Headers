/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTServerEndpointFeatures.h>

@class NSArray, NSString;

@interface FTMutableServerEndpointFeatures : FTServerEndpointFeatures

@property (assign,nonatomic) int processed_audio_duration_ms; 
@property (assign,nonatomic) int num_of_words; 
@property (assign,nonatomic) int trailing_silence_duration; 
@property (assign,nonatomic) double eos_likelihood; 
@property (nonatomic,copy) NSArray * pause_counts; 
@property (assign,nonatomic) double silence_posterior; 
@property (nonatomic,copy) NSString * task_name; 
@property (nonatomic,copy) NSString * speech_id; 
-(id)init;
-(NSString *)task_name;
-(void)setTask_name:(NSString *)arg1 ;
-(NSString *)speech_id;
-(void)setProcessed_audio_duration_ms:(int)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(int)num_of_words;
-(int)trailing_silence_duration;
-(double)eos_likelihood;
-(NSArray *)pause_counts;
-(double)silence_posterior;
-(int)processed_audio_duration_ms;
-(void)setNum_of_words:(int)arg1 ;
-(void)setTrailing_silence_duration:(int)arg1 ;
-(void)setEos_likelihood:(double)arg1 ;
-(void)setPause_counts:(NSArray *)arg1 ;
-(void)setSilence_posterior:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


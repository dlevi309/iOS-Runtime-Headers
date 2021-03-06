/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTEndPointCandidate.h>

@class NSString;

@interface FTMutableEndPointCandidate : FTEndPointCandidate

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (assign,nonatomic) int end_point_likelihood; 
@property (assign,nonatomic) int processed_audio_duration_ms; 
-(id)init;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(int)end_point_likelihood;
-(void)setEnd_point_likelihood:(int)arg1 ;
-(void)setProcessed_audio_duration_ms:(int)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(int)processed_audio_duration_ms;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


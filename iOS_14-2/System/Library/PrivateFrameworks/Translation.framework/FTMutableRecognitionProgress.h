/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTRecognitionProgress.h>

@class NSString;

@interface FTMutableRecognitionProgress : FTRecognitionProgress

@property (assign,nonatomic) int processed_audio_duration_ms; 
@property (nonatomic,copy) NSString * speech_id; 
-(id)init;
-(NSString *)speech_id;
-(void)setProcessed_audio_duration_ms:(int)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(int)processed_audio_duration_ms;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


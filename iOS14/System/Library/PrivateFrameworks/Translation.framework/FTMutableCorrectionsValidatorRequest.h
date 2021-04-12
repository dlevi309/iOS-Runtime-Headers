/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTCorrectionsValidatorRequest.h>

@class NSString, FTRecognitionResult;

@interface FTMutableCorrectionsValidatorRequest : FTCorrectionsValidatorRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) FTRecognitionResult * recognition_result; 
@property (nonatomic,copy) NSString * original_utterance; 
@property (nonatomic,copy) NSString * corrected_utterance; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(FTRecognitionResult *)recognition_result;
-(void)setRecognition_result:(FTRecognitionResult *)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(NSString *)original_utterance;
-(void)setOriginal_utterance:(NSString *)arg1 ;
-(NSString *)corrected_utterance;
-(void)setCorrected_utterance:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASAudioAnalytics, NSNumber, SASRecognition, SAUIGetResponseAlternatives, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic,retain) SASAudioAnalytics * audioAnalytics; 
@property (assign,nonatomic) BOOL eager; 
@property (nonatomic,copy) NSNumber * processedAudioDuration; 
@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,retain) SAUIGetResponseAlternatives * responseAlternatives; 
@property (nonatomic,copy) NSString * resultId; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * title; 
+(id)speechRecognized;
+(id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_correctionContext;
-(BOOL)af_isUserUtterance;
-(BOOL)af_waitsForConfirmation;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(BOOL)af_isUtterance;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)eager;
-(BOOL)requiresResponse;
-(void)setAudioAnalytics:(SASAudioAnalytics *)arg1 ;
-(void)setEager:(BOOL)arg1 ;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(SAUIGetResponseAlternatives *)responseAlternatives;
-(void)setResponseAlternatives:(SAUIGetResponseAlternatives *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setResultId:(NSString *)arg1 ;
-(NSString *)resultId;
-(SASRecognition *)recognition;
-(SASAudioAnalytics *)audioAnalytics;
-(NSString *)title;
@end


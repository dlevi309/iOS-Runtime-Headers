/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASStartSpeech.h>

@class NSArray, NSString, NSNumber;

@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic,copy) NSArray * bargeInModes; 
@property (nonatomic,copy) NSString * clientModelVersion; 
@property (nonatomic,copy) NSNumber * durationSincePreviousTTSFinish; 
@property (nonatomic,copy) NSNumber * durationSincePreviousTTSStart; 
@property (assign,nonatomic) BOOL eyesFree; 
@property (assign,nonatomic) BOOL handsFree; 
@property (assign,nonatomic) BOOL talkOnly; 
@property (assign,nonatomic) BOOL textToSpeechIsMuted; 
@property (nonatomic,copy) NSArray * voiceTriggerPhrases; 
@property (assign,nonatomic) BOOL wasLaunchedForRequest; 
+(id)startSpeechRequest;
+(id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)eyesFree;
-(void)setEyesFree:(BOOL)arg1 ;
-(BOOL)textToSpeechIsMuted;
-(void)setTextToSpeechIsMuted:(BOOL)arg1 ;
-(NSArray *)bargeInModes;
-(void)setBargeInModes:(NSArray *)arg1 ;
-(NSString *)clientModelVersion;
-(void)setClientModelVersion:(NSString *)arg1 ;
-(NSNumber *)durationSincePreviousTTSFinish;
-(void)setDurationSincePreviousTTSFinish:(NSNumber *)arg1 ;
-(NSNumber *)durationSincePreviousTTSStart;
-(void)setDurationSincePreviousTTSStart:(NSNumber *)arg1 ;
-(BOOL)handsFree;
-(void)setHandsFree:(BOOL)arg1 ;
-(BOOL)talkOnly;
-(void)setTalkOnly:(BOOL)arg1 ;
-(NSArray *)voiceTriggerPhrases;
-(void)setVoiceTriggerPhrases:(NSArray *)arg1 ;
-(BOOL)wasLaunchedForRequest;
-(void)setWasLaunchedForRequest:(BOOL)arg1 ;
@end


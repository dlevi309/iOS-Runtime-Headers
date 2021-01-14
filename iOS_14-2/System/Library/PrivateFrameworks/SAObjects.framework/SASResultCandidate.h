/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, SASRecognition, NSString;

@interface SASResultCandidate : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * processedAudioDuration; 
@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * resultId; 
+(id)resultCandidate;
+(id)resultCandidateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(void)setResultId:(NSString *)arg1 ;
-(NSString *)resultId;
-(BOOL)mutatingCommand;
-(SASRecognition *)recognition;
@end


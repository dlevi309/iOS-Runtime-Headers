/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SASRecognition *)recognition;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(void)setRecognition:(SASRecognition *)arg1 ;
@end


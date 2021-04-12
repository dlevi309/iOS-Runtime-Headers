/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL recordUserAudio; 
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (nonatomic,copy) NSString * selectedSharedUserId; 
+(id)voiceIdentificationSignal;
+(id)voiceIdentificationSignalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(BOOL)recordUserAudio;
-(void)setRecordUserAudio:(BOOL)arg1 ;
-(NSString *)selectedSharedUserId;
-(void)setSelectedSharedUserId:(NSString *)arg1 ;
@end


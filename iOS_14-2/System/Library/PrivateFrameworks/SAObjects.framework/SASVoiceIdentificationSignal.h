/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


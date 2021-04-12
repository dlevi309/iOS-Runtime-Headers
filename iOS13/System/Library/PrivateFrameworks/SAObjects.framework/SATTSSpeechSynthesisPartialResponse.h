/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAudioData, SATTSSpeechSynthesisAudioInfo;

@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAudioData * aceAudioData; 
@property (nonatomic,retain) SATTSSpeechSynthesisAudioInfo * aceAudioInfo; 
@property (assign,nonatomic) long long currentPacketNumber; 
+(id)speechSynthesisPartialResponse;
+(id)speechSynthesisPartialResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAUIAudioData *)aceAudioData;
-(void)setAceAudioData:(SAUIAudioData *)arg1 ;
-(SATTSSpeechSynthesisAudioInfo *)aceAudioInfo;
-(void)setAceAudioInfo:(SATTSSpeechSynthesisAudioInfo *)arg1 ;
-(long long)currentPacketNumber;
-(void)setCurrentPacketNumber:(long long)arg1 ;
@end


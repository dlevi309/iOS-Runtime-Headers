/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SAUIAudioData *)aceAudioData;
-(void)setAceAudioData:(SAUIAudioData *)arg1 ;
-(SATTSSpeechSynthesisAudioInfo *)aceAudioInfo;
-(void)setAceAudioInfo:(SATTSSpeechSynthesisAudioInfo *)arg1 ;
-(long long)currentPacketNumber;
-(void)setCurrentPacketNumber:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end


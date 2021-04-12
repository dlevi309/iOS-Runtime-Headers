/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SATTSFetchSpeechSynthesisVoiceResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * voiceKeyList; 
+(id)fetchSpeechSynthesisVoiceResponse;
+(id)fetchSpeechSynthesisVoiceResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)voiceKeyList;
-(void)setVoiceKeyList:(NSArray *)arg1 ;
@end


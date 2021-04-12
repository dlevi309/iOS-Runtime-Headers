/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL textToSpeechIsMuted; 
+(id)setDeviceTTSMuteState;
+(id)setDeviceTTSMuteStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)textToSpeechIsMuted;
-(void)setTextToSpeechIsMuted:(BOOL)arg1 ;
@end


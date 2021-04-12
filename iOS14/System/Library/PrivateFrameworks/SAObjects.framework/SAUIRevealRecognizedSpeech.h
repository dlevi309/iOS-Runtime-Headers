/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASRecognition, NSString;

@interface SAUIRevealRecognizedSpeech : SABaseClientBoundCommand

@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * speechRecognizedAceId; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(NSString *)speechRecognizedAceId;
-(void)setSpeechRecognizedAceId:(NSString *)arg1 ;
-(SASRecognition *)recognition;
@end


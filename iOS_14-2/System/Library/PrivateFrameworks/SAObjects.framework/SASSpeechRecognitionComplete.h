/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * sessionId; 
+(id)speechRecognitionComplete;
+(id)speechRecognitionCompleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASAbortSpeechRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * reason; 
+(id)abortSpeechRequest;
+(id)abortSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(void)setReason:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end


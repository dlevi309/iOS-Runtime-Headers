/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SATTSSpeechSynthesisStreaming : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * streamId; 
+(id)speechSynthesisStreaming;
+(id)speechSynthesisStreamingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)streamId;
-(void)setStreamId:(NSString *)arg1 ;
@end


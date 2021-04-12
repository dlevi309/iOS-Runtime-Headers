/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSString;

@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming

@property (assign,nonatomic) long long count; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * errorMessage; 
+(id)speechSynthesisStreamingEnd;
+(id)speechSynthesisStreamingEndWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)groupIdentifier;
-(NSString *)errorMessage;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(void)setErrorMessage:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end


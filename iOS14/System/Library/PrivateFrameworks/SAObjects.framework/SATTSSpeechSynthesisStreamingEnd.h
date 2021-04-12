/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(long long)count;
-(long long)errorCode;
-(NSString *)errorMessage;
-(void)setErrorCode:(long long)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
@end


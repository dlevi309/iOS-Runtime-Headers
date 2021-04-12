/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SATTSSpeechSynthesisFailure : SABaseClientBoundCommand

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,copy) NSString * reasonDescription; 
+(id)speechSynthesisFailure;
+(id)speechSynthesisFailureWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(void)setReason:(NSString *)arg1 ;
-(long long)errorCode;
-(NSString *)reasonDescription;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(void)setReasonDescription:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end


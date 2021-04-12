/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setReasonDescription:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(long long)errorCode;
-(NSString *)reason;
-(void)setErrorCode:(long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reasonDescription;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * speechRecognitionId; 
@property (assign,nonatomic) long long utteranceIndex; 
+(id)changePrimaryUtterance;
+(id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(long long)utteranceIndex;
-(NSString *)speechRecognitionId;
-(void)setSpeechRecognitionId:(NSString *)arg1 ;
-(void)setUtteranceIndex:(long long)arg1 ;
@end


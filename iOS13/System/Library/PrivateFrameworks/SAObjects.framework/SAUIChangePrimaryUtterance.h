/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)speechRecognitionId;
-(void)setSpeechRecognitionId:(NSString *)arg1 ;
-(long long)utteranceIndex;
-(void)setUtteranceIndex:(long long)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSString;

@interface SASUserUtteranceEditableTextSnippet : SAUISnippet

@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * utterance; 
+(id)userUtteranceEditableTextSnippet;
+(id)userUtteranceEditableTextSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(id)encodedClassName;
@end


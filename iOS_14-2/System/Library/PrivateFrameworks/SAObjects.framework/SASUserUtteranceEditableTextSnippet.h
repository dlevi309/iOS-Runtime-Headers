/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSString;

@interface SASUserUtteranceEditableTextSnippet : SAUISnippet

@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * utterance; 
+(id)userUtteranceEditableTextSnippet;
+(id)userUtteranceEditableTextSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)utterance;
-(id)encodedClassName;
-(void)setUtterance:(NSString *)arg1 ;
@end


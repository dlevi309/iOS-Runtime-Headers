/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SASRecognition, NSString;

@interface SASSpeechAlternativesSnippet : SAUISnippet

@property (assign,nonatomic) long long maxEntryToShow; 
@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * sessionId; 
+(id)speechAlternativesSnippet;
+(id)speechAlternativesSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASRecognition *)recognition;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(long long)maxEntryToShow;
-(void)setMaxEntryToShow:(long long)arg1 ;
@end


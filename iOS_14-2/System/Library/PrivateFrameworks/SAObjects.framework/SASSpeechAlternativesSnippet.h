/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(long long)maxEntryToShow;
-(void)setMaxEntryToShow:(long long)arg1 ;
-(SASRecognition *)recognition;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIAppPunchOut, NSArray;

@interface SAAnswerSnippet : SAUISnippet

@property (nonatomic,retain) SAUIAppPunchOut * answerPunchOut; 
@property (nonatomic,copy) NSArray * answers; 
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)snippet;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)answers;
-(void)setAnswers:(NSArray *)arg1 ;
-(SAUIAppPunchOut *)answerPunchOut;
-(void)setAnswerPunchOut:(SAUIAppPunchOut *)arg1 ;
@end


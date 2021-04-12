/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIAppPunchOut, NSArray;

@interface SAAnswerDomainObjectSnippet : SAUISnippet

@property (nonatomic,retain) SAUIAppPunchOut * answerPunchOut; 
@property (nonatomic,copy) NSArray * answers; 
+(id)domainObjectSnippet;
+(id)domainObjectSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)answers;
-(void)setAnswers:(NSArray *)arg1 ;
-(SAUIAppPunchOut *)answerPunchOut;
-(void)setAnswerPunchOut:(SAUIAppPunchOut *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


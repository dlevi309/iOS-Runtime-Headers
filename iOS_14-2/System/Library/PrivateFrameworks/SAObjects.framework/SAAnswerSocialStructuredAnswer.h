/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSString, NSArray;

@interface SAAnswerSocialStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSArray * socialQuestions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialStructuredAnswer;
+(id)socialStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)category;
-(NSArray *)socialQuestions;
-(void)setSocialQuestions:(NSArray *)arg1 ;
@end


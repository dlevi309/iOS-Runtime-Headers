/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut, NSString, SAAnswerDirectAnswer, NSArray;

@interface SAAnswerDomainObject : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,retain) SAAnswerDirectAnswer * directAnswer; 
@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)domainObject;
+(id)domainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAAnswerDirectAnswer *)directAnswer;
-(void)setDirectAnswer:(SAAnswerDirectAnswer *)arg1 ;
-(NSArray *)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(NSArray *)arg1 ;
-(NSArray *)structuredAnswers;
-(void)setStructuredAnswers:(NSArray *)arg1 ;
@end


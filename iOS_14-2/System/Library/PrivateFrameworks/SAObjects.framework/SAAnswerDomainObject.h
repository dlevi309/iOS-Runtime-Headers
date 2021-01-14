/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSString *)category;
-(SAAnswerDirectAnswer *)directAnswer;
-(void)setDirectAnswer:(SAAnswerDirectAnswer *)arg1 ;
-(NSArray *)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(NSArray *)arg1 ;
-(NSArray *)structuredAnswers;
-(void)setStructuredAnswers:(NSArray *)arg1 ;
@end


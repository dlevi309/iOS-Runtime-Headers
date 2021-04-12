/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSArray, NSString, NSURL;

@interface SAAnswerSummaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,copy) NSArray * answerPropertyGroups; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSString * imageCaption; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * titleAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)summaryStructuredAnswer;
+(id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setImage:(NSURL *)arg1 ;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)category;
-(NSURL *)image;
-(NSString *)text;
-(NSArray *)answerPropertyGroups;
-(void)setAnswerPropertyGroups:(NSArray *)arg1 ;
-(NSString *)imageCaption;
-(void)setImageCaption:(NSString *)arg1 ;
-(NSString *)titleAnnotation;
-(void)setTitleAnnotation:(NSString *)arg1 ;
-(NSString *)title;
@end


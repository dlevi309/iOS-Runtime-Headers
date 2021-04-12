/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSString, NSArray, NSURL;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSArray * definitionGroups; 
@property (nonatomic,copy) NSString * phoneticPronunciation; 
@property (nonatomic,copy) NSURL * sound; 
@property (nonatomic,copy) NSArray * syllables; 
@property (nonatomic,copy) NSString * word; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dictionaryStructuredAnswer;
+(id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)sound;
-(NSString *)word;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setSound:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSString *)category;
-(NSArray *)definitionGroups;
-(void)setDefinitionGroups:(NSArray *)arg1 ;
-(NSString *)phoneticPronunciation;
-(void)setPhoneticPronunciation:(NSString *)arg1 ;
-(NSArray *)syllables;
-(void)setSyllables:(NSArray *)arg1 ;
-(void)setWord:(NSString *)arg1 ;
@end


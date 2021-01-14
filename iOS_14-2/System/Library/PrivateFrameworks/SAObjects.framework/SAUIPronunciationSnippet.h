/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString;

@interface SAUIPronunciationSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * cancelCommands; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSArray * pronunciations; 
@property (nonatomic,copy) NSArray * selectNoneCommands; 
@property (nonatomic,copy) NSString * selectNoneText; 
+(id)pronunciationSnippet;
+(id)pronunciationSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)orthography;
-(NSArray *)cancelCommands;
-(void)setCancelCommands:(NSArray *)arg1 ;
-(NSArray *)pronunciations;
-(void)setPronunciations:(NSArray *)arg1 ;
-(NSArray *)selectNoneCommands;
-(void)setSelectNoneCommands:(NSArray *)arg1 ;
-(NSString *)selectNoneText;
-(void)setSelectNoneText:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
@end


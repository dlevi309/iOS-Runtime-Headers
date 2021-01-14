/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, NSArray;

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * imageStyle; 
@property (nonatomic,copy) NSString * imageURI; 
@property (nonatomic,copy) NSArray * labelComponents; 
+(id)profileSnippetTemplate;
+(id)profileSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)alignment;
-(NSString *)imageStyle;
-(void)setAlignment:(NSString *)arg1 ;
-(void)setImageStyle:(NSString *)arg1 ;
-(NSString *)imageURI;
-(NSArray *)labelComponents;
-(void)setLabelComponents:(NSArray *)arg1 ;
-(void)setImageURI:(NSString *)arg1 ;
@end


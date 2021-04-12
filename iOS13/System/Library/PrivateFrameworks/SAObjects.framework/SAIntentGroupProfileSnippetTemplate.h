/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(NSString *)imageStyle;
-(void)setImageStyle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)labelComponents;
-(void)setLabelComponents:(NSArray *)arg1 ;
-(NSString *)imageURI;
-(void)setImageURI:(NSString *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, NSArray;

@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,copy) NSArray * labelComponents; 
@property (assign,nonatomic) BOOL showsDisclosureIndicator; 
+(id)textSnippetTemplate;
+(id)textSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)detailText;
-(NSArray *)labelComponents;
-(void)setLabelComponents:(NSArray *)arg1 ;
-(BOOL)showsDisclosureIndicator;
-(void)setShowsDisclosureIndicator:(BOOL)arg1 ;
@end


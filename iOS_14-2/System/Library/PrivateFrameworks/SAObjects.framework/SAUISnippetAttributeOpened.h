/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippetInteraction.h>

@class NSString;

@interface SAUISnippetAttributeOpened : SAUISnippetInteraction

@property (nonatomic,copy) NSString * attributeName; 
@property (nonatomic,copy) NSString * attributeValue; 
+(id)snippetAttributeOpened;
+(id)snippetAttributeOpenedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)attributeValue;
-(void)setAttributeValue:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(void)setAttributeName:(NSString *)arg1 ;
-(NSString *)attributeName;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAUISnippet, NSArray, NSString;

@interface SAIntentGroupSnippetTemplate : SADomainObject

@property (nonatomic,retain) SAUISnippet * detailSnippet; 
@property (nonatomic,copy) NSArray * intentSlotKeyPaths; 
@property (nonatomic,copy) NSString * key; 
+(id)snippetTemplate;
+(id)snippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)key;
-(SAUISnippet *)detailSnippet;
-(void)setDetailSnippet:(SAUISnippet *)arg1 ;
-(NSArray *)intentSlotKeyPaths;
-(void)setIntentSlotKeyPaths:(NSArray *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippetInteraction.h>

@class SADomainObject;

@interface SAUISnippetObjectInteraction : SAUISnippetInteraction

@property (nonatomic,retain) SADomainObject * object; 
+(id)snippetObjectInteraction;
+(id)snippetObjectInteractionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SADomainObject *)object;
-(void)setObject:(SADomainObject *)arg1 ;
@end


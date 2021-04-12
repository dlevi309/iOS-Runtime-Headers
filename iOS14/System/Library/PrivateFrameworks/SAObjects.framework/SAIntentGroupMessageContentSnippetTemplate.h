/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString;

@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,copy) NSString * content; 
@property (assign,nonatomic) BOOL sentStatus; 
+(id)messageContentSnippetTemplate;
+(id)messageContentSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)sentStatus;
-(void)setSentStatus:(BOOL)arg1 ;
@end


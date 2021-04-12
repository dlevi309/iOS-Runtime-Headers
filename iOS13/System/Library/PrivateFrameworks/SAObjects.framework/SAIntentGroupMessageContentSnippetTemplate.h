/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


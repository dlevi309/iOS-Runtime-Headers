/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate

@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,retain) id<SAServerBoundCommand> updateSlotCommand; 
+(id)choiceSettingSnippetTemplate;
+(id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id<SAServerBoundCommand>)updateSlotCommand;
-(void)setUpdateSlotCommand:(id<SAServerBoundCommand>)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate

@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,retain) id<SAServerBoundCommand> updateSlotCommand; 
+(id)choiceSettingSnippetTemplate;
+(id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)encodedClassName;
-(id<SAServerBoundCommand>)updateSlotCommand;
-(void)setUpdateSlotCommand:(id<SAServerBoundCommand>)arg1 ;
@end


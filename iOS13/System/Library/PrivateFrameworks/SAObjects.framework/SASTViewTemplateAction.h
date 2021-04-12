/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateAction.h>

@class NSArray, SASTItemGroup, NSString;

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SASTItemGroup * itemGroupView; 
@property (nonatomic,copy) NSString * viewTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewTemplateAction;
+(id)viewTemplateActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)viewTitle;
-(SASTItemGroup *)itemGroupView;
-(void)setItemGroupView:(SASTItemGroup *)arg1 ;
-(void)setViewTitle:(NSString *)arg1 ;
@end


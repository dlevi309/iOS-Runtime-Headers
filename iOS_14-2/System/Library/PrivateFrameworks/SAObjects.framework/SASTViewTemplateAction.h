/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(SASTItemGroup *)itemGroupView;
-(void)setItemGroupView:(SASTItemGroup *)arg1 ;
-(void)setViewTitle:(NSString *)arg1 ;
-(NSArray *)commands;
-(NSString *)viewTitle;
-(void)setCommands:(NSArray *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAReminderSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * reminderLists; 
@property (nonatomic,copy) NSArray * reminders; 
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)snippet;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)reminderLists;
-(void)setReminderLists:(NSArray *)arg1 ;
-(void)setReminders:(NSArray *)arg1 ;
-(NSArray *)reminders;
@end


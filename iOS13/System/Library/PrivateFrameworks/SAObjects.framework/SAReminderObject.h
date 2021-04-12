/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSArray, SAReminderRecurrence, SAReminderListObject, SAReminderTrigger;

@interface SAReminderObject : SADomainObject

@property (nonatomic,copy) NSString * alternateSubject; 
@property (assign,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSString * dueDateTimeZoneId; 
@property (assign,nonatomic) BOOL important; 
@property (nonatomic,copy) NSArray * lists; 
@property (nonatomic,retain) id<SAReminderPayload> payload; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) SAReminderListObject * toList; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPayload:(id<SAReminderPayload>)arg1 ;
-(id<SAReminderPayload>)payload;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(SAReminderTrigger *)trigger;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(void)setImportant:(BOOL)arg1 ;
-(NSDate *)dueDate;
-(void)setDueDate:(NSDate *)arg1 ;
-(SAReminderRecurrence *)recurrence;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(NSArray *)lists;
-(id)encodedClassName;
-(void)setToList:(SAReminderListObject *)arg1 ;
-(SAReminderListObject *)toList;
-(BOOL)important;
-(NSString *)alternateSubject;
-(void)setAlternateSubject:(NSString *)arg1 ;
-(NSString *)dueDateTimeZoneId;
-(void)setDueDateTimeZoneId:(NSString *)arg1 ;
-(void)setLists:(NSArray *)arg1 ;
@end


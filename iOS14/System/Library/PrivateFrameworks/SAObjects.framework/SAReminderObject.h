/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPayload:(id<SAReminderPayload>)arg1 ;
-(NSString *)subject;
-(id)groupIdentifier;
-(SAReminderTrigger *)trigger;
-(NSDate *)dueDate;
-(NSArray *)lists;
-(id)encodedClassName;
-(BOOL)completed;
-(BOOL)important;
-(SAReminderRecurrence *)recurrence;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(void)setLists:(NSArray *)arg1 ;
-(void)setToList:(SAReminderListObject *)arg1 ;
-(SAReminderListObject *)toList;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(NSString *)alternateSubject;
-(void)setAlternateSubject:(NSString *)arg1 ;
-(NSString *)dueDateTimeZoneId;
-(void)setDueDateTimeZoneId:(NSString *)arg1 ;
-(id<SAReminderPayload>)payload;
-(void)setDueDate:(NSDate *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setImportant:(BOOL)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
@end


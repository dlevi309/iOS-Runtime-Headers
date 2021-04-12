/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminder, NSArray;

@interface REMReminderAttachmentContext : NSObject {

	REMReminder* _reminder;

}

@property (nonatomic,retain) REMReminder * reminder;                    //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,readonly) NSArray * fileAttachments; 
@property (nonatomic,readonly) NSArray * imageAttachments; 
@property (nonatomic,readonly) NSArray * urlAttachments; 
-(id)initWithReminder:(id)arg1 ;
-(void)setReminder:(REMReminder *)arg1 ;
-(NSArray *)attachments;
-(REMReminder *)reminder;
-(NSArray *)urlAttachments;
-(NSArray *)fileAttachments;
-(id)attachmentsOfClass:(Class)arg1 ;
-(NSArray *)imageAttachments;
@end


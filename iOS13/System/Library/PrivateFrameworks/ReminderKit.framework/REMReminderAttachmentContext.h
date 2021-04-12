/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)attachments;
-(REMReminder *)reminder;
-(id)attachmentsOfClass:(Class)arg1 ;
-(NSArray *)fileAttachments;
-(NSArray *)imageAttachments;
-(NSArray *)urlAttachments;
-(id)initWithReminder:(id)arg1 ;
-(void)setReminder:(REMReminder *)arg1 ;
@end


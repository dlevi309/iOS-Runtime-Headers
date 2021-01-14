/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminderChangeItem;

@interface REMReminderSubtaskContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
-(void)addReminderChangeItem:(id)arg1 ;
-(REMReminderChangeItem *)reminderChangeItem;
-(void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2 ;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(id)_listChangeItem;
-(void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2 ;
-(void)undeleteSubtaskWithID:(id)arg1 usingUndo:(id)arg2 ;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
@end


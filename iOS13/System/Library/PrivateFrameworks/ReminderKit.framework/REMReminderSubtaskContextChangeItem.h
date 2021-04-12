/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminderChangeItem;

@interface REMReminderSubtaskContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
-(REMReminderChangeItem *)reminderChangeItem;
-(void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2 ;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(id)_listChangeItem;
-(void)addReminderChangeItem:(id)arg1 ;
-(void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2 ;
-(void)undeleteSubtaskWithID:(id)arg1 usingUndo:(id)arg2 ;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
@end


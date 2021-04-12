/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminderChangeItem;

@interface REMReminderFlaggedContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
@property (assign,nonatomic) long long flagged; 
-(void)setFlagged:(long long)arg1 ;
-(long long)flagged;
-(REMReminderChangeItem *)reminderChangeItem;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
@end


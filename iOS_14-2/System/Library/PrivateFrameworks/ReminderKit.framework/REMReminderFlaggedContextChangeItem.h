/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminderChangeItem;

@interface REMReminderFlaggedContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
@property (assign,nonatomic) long long flagged; 
-(long long)flagged;
-(void)setFlagged:(long long)arg1 ;
-(REMReminderChangeItem *)reminderChangeItem;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
@end


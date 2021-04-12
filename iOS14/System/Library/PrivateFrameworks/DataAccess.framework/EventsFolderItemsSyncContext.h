/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@interface EventsFolderItemsSyncContext : NSObject {

	int _calEventChangeId;
	int _calRecurrenceChangeId;
	int _calAlarmChangeId;
	int _calAttendeeChangeId;
	int _calAttachmentChangeId;
	int _highestSequenceNumber;

}

@property (assign,nonatomic) int calEventChangeId;                   //@synthesize calEventChangeId=_calEventChangeId - In the implementation block
@property (assign,nonatomic) int calRecurrenceChangeId;              //@synthesize calRecurrenceChangeId=_calRecurrenceChangeId - In the implementation block
@property (assign,nonatomic) int calAlarmChangeId;                   //@synthesize calAlarmChangeId=_calAlarmChangeId - In the implementation block
@property (assign,nonatomic) int calAttendeeChangeId;                //@synthesize calAttendeeChangeId=_calAttendeeChangeId - In the implementation block
@property (assign,nonatomic) int calAttachmentChangeId;              //@synthesize calAttachmentChangeId=_calAttachmentChangeId - In the implementation block
@property (assign,nonatomic) int highestSequenceNumber;              //@synthesize highestSequenceNumber=_highestSequenceNumber - In the implementation block
-(int)calEventChangeId;
-(void)setCalEventChangeId:(int)arg1 ;
-(int)calRecurrenceChangeId;
-(void)setCalRecurrenceChangeId:(int)arg1 ;
-(int)calAlarmChangeId;
-(void)setCalAlarmChangeId:(int)arg1 ;
-(int)calAttendeeChangeId;
-(void)setCalAttendeeChangeId:(int)arg1 ;
-(int)calAttachmentChangeId;
-(void)setCalAttachmentChangeId:(int)arg1 ;
-(int)highestSequenceNumber;
-(void)setHighestSequenceNumber:(int)arg1 ;
@end


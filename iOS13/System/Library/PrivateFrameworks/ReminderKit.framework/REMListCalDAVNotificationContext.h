/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMList, NSArray;

@interface REMListCalDAVNotificationContext : NSObject {

	REMList* _list;

}

@property (nonatomic,retain) REMList * list;                               //@synthesize list=_list - In the implementation block
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
-(REMList *)list;
-(id)initWithList:(id)arg1 ;
-(void)setList:(REMList *)arg1 ;
-(NSArray *)calDAVNotifications;
@end


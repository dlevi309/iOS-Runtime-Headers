/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMList, NSArray;

@interface REMListCalDAVNotificationContext : NSObject {

	REMList* _list;

}

@property (nonatomic,retain) REMList * list;                               //@synthesize list=_list - In the implementation block
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
-(REMList *)list;
-(void)setList:(REMList *)arg1 ;
-(id)initWithList:(id)arg1 ;
-(NSArray *)calDAVNotifications;
@end


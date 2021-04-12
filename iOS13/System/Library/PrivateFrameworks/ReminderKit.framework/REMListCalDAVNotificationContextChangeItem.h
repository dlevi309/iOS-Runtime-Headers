/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMListChangeItem, NSArray;

@interface REMListCalDAVNotificationContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
-(REMListChangeItem *)listChangeItem;
-(NSArray *)calDAVNotifications;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(void)_addCalDAVNotification:(id)arg1 ;
-(id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4 ;
-(void)removeCalDAVNotication:(id)arg1 ;
-(void)clearCalDAVNotifications;
-(void)updateCalDAVNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end


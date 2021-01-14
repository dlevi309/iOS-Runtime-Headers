/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMListChangeItem, NSArray;

@interface REMListCalDAVNotificationContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
-(REMListChangeItem *)listChangeItem;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)_addCalDAVNotification:(id)arg1 ;
-(void)removeCalDAVNotication:(id)arg1 ;
-(NSArray *)calDAVNotifications;
-(id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4 ;
-(void)clearCalDAVNotifications;
-(void)updateCalDAVNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end


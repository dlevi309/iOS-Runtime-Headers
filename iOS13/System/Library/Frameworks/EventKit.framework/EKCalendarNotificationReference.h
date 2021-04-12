/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSDate, EKEventStore, EKCalendarNotification, EKObjectID;

@interface EKCalendarNotificationReference : NSObject {

	NSDate* _date;
	EKEventStore* _eventStore;
	EKCalendarNotification* _notification;
	int _type;
	EKObjectID* _objectID;

}

@property (nonatomic,readonly) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) EKCalendarNotification * notification; 
@property (nonatomic,readonly) EKObjectID * objectID;                              //@synthesize objectID=_objectID - In the implementation block
-(id)description;
-(int)type;
-(EKCalendarNotification *)notification;
-(EKObjectID *)objectID;
-(id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4 ;
-(long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2 ;
-(id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3 ;
@end


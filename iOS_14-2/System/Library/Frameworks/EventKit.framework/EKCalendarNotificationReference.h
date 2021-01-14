/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EKCalendarNotification *)notification;
-(id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3 ;
-(EKObjectID *)objectID;
-(id)description;
-(id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4 ;
-(long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2 ;
-(int)type;
@end


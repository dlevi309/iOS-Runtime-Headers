/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNNotificationRecord, NSString, BSServiceConnectionEndpoint;

@interface CALNNotificationRecordResponse : NSObject {

	CALNNotificationRecord* _notificationRecord;
	NSString* _actionIdentifier;
	NSString* _originIdentifier;
	BSServiceConnectionEndpoint* _targetConnectionEndpoint;

}

@property (nonatomic,readonly) CALNNotificationRecord * notificationRecord;                         //@synthesize notificationRecord=_notificationRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                                    //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * originIdentifier;                                    //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionEndpoint * targetConnectionEndpoint;              //@synthesize targetConnectionEndpoint=_targetConnectionEndpoint - In the implementation block
+(id)responseWithNotificationRecord:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 ;
-(id)description;
-(BSServiceConnectionEndpoint *)targetConnectionEndpoint;
-(NSString *)actionIdentifier;
-(NSString *)originIdentifier;
-(CALNNotificationRecord *)notificationRecord;
-(id)initWithNotificationRecord:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNNotification, NSString, BSServiceConnectionEndpoint;

@interface CALNNotificationResponse : NSObject {

	CALNNotification* _notification;
	NSString* _actionIdentifier;
	NSString* _originIdentifier;
	BSServiceConnectionEndpoint* _targetConnectionEndpoint;

}

@property (nonatomic,readonly) CALNNotification * notification;                                     //@synthesize notification=_notification - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                                    //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * originIdentifier;                                    //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionEndpoint * targetConnectionEndpoint;              //@synthesize targetConnectionEndpoint=_targetConnectionEndpoint - In the implementation block
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 ;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(BSServiceConnectionEndpoint *)targetConnectionEndpoint;
-(CALNNotification *)notification;
-(NSString *)originIdentifier;
-(id)description;
-(unsigned long long)hash;
-(NSString *)actionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 ;
@end


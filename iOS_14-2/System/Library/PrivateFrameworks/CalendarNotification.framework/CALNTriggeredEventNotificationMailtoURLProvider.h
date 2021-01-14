/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNMailAccounts;
@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject {

	id<CALNMailAccounts> _mailAccounts;

}

@property (nonatomic,readonly) id<CALNMailAccounts> mailAccounts;              //@synthesize mailAccounts=_mailAccounts - In the implementation block
-(id)initWithMailAccounts:(id)arg1 ;
-(id<CALNMailAccounts>)mailAccounts;
-(id)mailtoURLForEvent:(id)arg1 ;
@end


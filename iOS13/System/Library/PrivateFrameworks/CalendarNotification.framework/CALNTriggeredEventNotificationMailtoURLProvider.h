/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNMailAccounts;
@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject {

	id<CALNMailAccounts> _mailAccounts;

}

@property (nonatomic,readonly) id<CALNMailAccounts> mailAccounts;              //@synthesize mailAccounts=_mailAccounts - In the implementation block
-(id<CALNMailAccounts>)mailAccounts;
-(id)mailtoURLForEvent:(id)arg1 ;
-(id)initWithMailAccounts:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTAccount;

@interface RTAccountManagerNotificationAccountChanged : RTNotification {

	RTAccount* _latestAccount;
	RTAccount* _oldAccount;

}

@property (nonatomic,readonly) RTAccount * latestAccount;              //@synthesize latestAccount=_latestAccount - In the implementation block
@property (nonatomic,readonly) RTAccount * oldAccount;                 //@synthesize oldAccount=_oldAccount - In the implementation block
-(id)init;
-(RTAccount *)oldAccount;
-(RTAccount *)latestAccount;
-(id)initWithLatestAccount:(id)arg1 oldAccount:(id)arg2 ;
@end


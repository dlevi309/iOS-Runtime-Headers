/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


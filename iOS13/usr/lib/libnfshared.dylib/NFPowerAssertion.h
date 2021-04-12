/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_queue, OS_os_transaction;
#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NSMutableDictionary, NSObject;

@interface NFPowerAssertion : NSObject {

	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	unsigned _assertionID;
	NSMutableDictionary* _assertionHolders;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_transaction> _powerAssertTransaction;

}
+(id)sharedPowerAssertion;
-(id)init;
-(void)dealloc;
-(id)dumpState;
-(void)holdPowerAssertion:(id)arg1 ;
-(void)releasePowerAssertion:(id)arg1 ;
@end


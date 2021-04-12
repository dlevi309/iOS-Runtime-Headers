/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _enableDebug;

}

@property (assign,nonatomic) BOOL enableDebug;              //@synthesize enableDebug=_enableDebug - In the implementation block
+(id)sharedPowerAssertion;
-(id)init;
-(id)dumpState;
-(BOOL)enableDebug;
-(void)setEnableDebug:(BOOL)arg1 ;
-(void)holdPowerAssertion:(id)arg1 ;
-(id)assertionHolders;
-(void)releasePowerAssertion:(id)arg1 ;
@end


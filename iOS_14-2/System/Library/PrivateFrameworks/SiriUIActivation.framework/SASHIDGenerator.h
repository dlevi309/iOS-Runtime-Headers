/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/


@protocol OS_dispatch_queue;
#import <SiriUIActivation/SiriUIActivation-Structs.h>
@class NSObject;

@interface SASHIDGenerator : NSObject {

	IOHIDEventSystemClientRef _ioSystemClient;
	NSObject*<OS_dispatch_queue> _generatorQueue;

}
-(id)init;
-(void)_sendHIDEvent:(IOHIDEventRef)arg1 ;
-(void)dealloc;
-(void)_sendHIDHoldHomeButton;
-(void)_sendHIDHoldLockButton;
-(void)sendHoldHomeButtonHIDEvents;
-(void)sendHoldLockButtonHIDEvents;
@end


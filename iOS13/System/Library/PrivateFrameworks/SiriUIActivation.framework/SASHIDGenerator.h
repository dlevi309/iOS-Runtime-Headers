/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_sendHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_sendHIDHoldHomeButton;
-(void)_sendHIDHoldLockButton;
-(void)sendHoldHomeButtonHIDEvents;
-(void)sendHoldLockButtonHIDEvents;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


@protocol OS_dispatch_queue;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@class NSObject;

@interface AXPIEventSender : NSObject {

	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	NSObject*<OS_dispatch_queue> _eventSendingQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)sendEventRepresentation:(id)arg1 ;
@end


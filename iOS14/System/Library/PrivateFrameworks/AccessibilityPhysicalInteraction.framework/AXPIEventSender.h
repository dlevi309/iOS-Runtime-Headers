/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


@protocol OS_dispatch_queue;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@class NSObject;

@interface AXPIEventSender : NSObject {

	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	NSObject*<OS_dispatch_queue> _eventSendingQueue;
	unsigned long long _senderID;

}

@property (assign,nonatomic) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
+(id)sharedInstance;
-(unsigned long long)senderID;
-(id)init;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)sendEventRepresentation:(id)arg1 ;
-(void)sendIOHIDEventRef:(IOHIDEventRef)arg1 ;
@end


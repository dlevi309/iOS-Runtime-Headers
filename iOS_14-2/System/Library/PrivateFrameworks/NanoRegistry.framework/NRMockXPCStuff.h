/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRMockXPCStuff : NSObject {

	NSMutableDictionary* _mockListeners;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
@end


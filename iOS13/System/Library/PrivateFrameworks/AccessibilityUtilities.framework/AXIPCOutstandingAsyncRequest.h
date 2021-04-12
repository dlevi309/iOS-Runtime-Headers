/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol OS_dispatch_queue;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSObject;

@interface AXIPCOutstandingAsyncRequest : NSObject {

	unsigned _replyPort;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _replyHandler;
	CFRunLoopSourceRef _replyMachPortSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> replyQueue;              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,readonly) unsigned replyPort;                                   //@synthesize replyPort=_replyPort - In the implementation block
@property (nonatomic,readonly) id replyHandler;                                      //@synthesize replyHandler=_replyHandler - In the implementation block
@property (nonatomic,readonly) CFRunLoopSourceRef replyMachPortSource;               //@synthesize replyMachPortSource=_replyMachPortSource - In the implementation block
+(void)initialize;
+(void)registerOutstandingRequest:(id)arg1 ;
+(void)unregisterByPort:(unsigned)arg1 ;
+(id)lookupByPort:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)replyPort;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(CFRunLoopSourceRef)replyMachPortSource;
-(id)replyHandler;
-(void)_responseReceived:(id)arg1 ;
-(id)initWithReplyPort:(unsigned)arg1 handlerQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)registerAndListenForResponse;
-(void)rawResponseReceived:(id)arg1 ;
-(void)sendOnceRightDestroyed;
-(void)initialSendAborted;
@end


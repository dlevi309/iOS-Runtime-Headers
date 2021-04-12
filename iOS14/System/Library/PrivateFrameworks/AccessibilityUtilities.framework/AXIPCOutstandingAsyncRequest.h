/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)lookupByPort:(unsigned)arg1 ;
+(void)registerOutstandingRequest:(id)arg1 ;
+(void)unregisterByPort:(unsigned)arg1 ;
-(unsigned)replyPort;
-(id)replyHandler;
-(void)initialSendAborted;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(void)sendOnceRightDestroyed;
-(CFRunLoopSourceRef)replyMachPortSource;
-(id)initWithReplyPort:(unsigned)arg1 handlerQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_responseReceived:(id)arg1 ;
-(void)rawResponseReceived:(id)arg1 ;
-(void)registerAndListenForResponse;
-(void)dealloc;
@end


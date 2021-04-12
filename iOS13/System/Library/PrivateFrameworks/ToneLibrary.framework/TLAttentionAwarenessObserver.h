/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary, AWAttentionAwarenessClient;

@interface TLAttentionAwarenessObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSMutableDictionary* _pollingForAttentionEventHandlers;
	BOOL _isFullyInitialized;
	BOOL _isPollingForAttention;
	AWAttentionAwarenessClient* _attentionAwarenessClient;
	NSObject*<OS_dispatch_queue> _attentionAwarenessClientQueue;

}
+(id)sharedAttentionAwarenessObserver;
+(BOOL)supportsAttenuatingTonesForAttentionDetected;
-(id)init;
-(void)dealloc;
-(void)_assertRunningOnAccessQueue;
-(void)_assertNotRunningOnAccessQueue;
-(void)_didCompleteInitialization;
-(void)_endPollingForAttention;
-(void)_invokePollingForAttentionEventHandlers:(id)arg1 eventType:(long long)arg2 ;
-(void)_beginPollingForAttention;
-(void)_didReceiveAttentionPollingEventOfType:(unsigned long long)arg1 attentionEvent:(id)arg2 ;
-(id)pollForAttentionWithEventHandler:(/*^block*/id)arg1 ;
-(void)cancelPollForAttentionWithToken:(id)arg1 ;
@end


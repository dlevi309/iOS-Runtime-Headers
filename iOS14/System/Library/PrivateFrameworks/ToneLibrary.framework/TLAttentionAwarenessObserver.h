/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_assertNotRunningOnAccessQueue;
-(void)_assertRunningOnAccessQueue;
-(void)dealloc;
-(void)_didCompleteInitialization;
-(void)_endPollingForAttention;
-(void)_invokePollingForAttentionEventHandlers:(id)arg1 eventType:(long long)arg2 ;
-(void)_beginPollingForAttention;
-(void)_didReceiveAttentionPollingEventOfType:(unsigned long long)arg1 attentionEvent:(id)arg2 ;
-(id)pollForAttentionWithEventHandler:(/*^block*/id)arg1 ;
-(void)cancelPollForAttentionWithToken:(id)arg1 ;
@end


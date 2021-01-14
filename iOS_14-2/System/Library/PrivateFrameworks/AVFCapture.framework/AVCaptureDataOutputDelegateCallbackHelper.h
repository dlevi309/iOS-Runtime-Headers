/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, NSObject, AVWeakReferencingDelegateStorage;

@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject {

	NSString* _defaultCallbackQueueName;
	NSObject*<OS_dispatch_queue> _defaultCallbackQueue;
	OpaqueFigSimpleMutexRef _stateMutex;
	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVWeakReferencingDelegateStorage* _delegateOverrideStorage;
	remoteQueueReceiverOpaqueRef _remoteQueueReceiver;
	/*^block*/id _remoteQueueHandler;
	localQueueOpaqueRef _localQueue;
	/*^block*/id _localQueueHandler;
	BOOL _canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd;

}

@property (readonly) id activeDelegate; 
@property (readonly) NSObject*<OS_dispatch_queue> activeCallbackQueue; 
@property (readonly) id clientDelegate; 
@property (readonly) NSObject*<OS_dispatch_queue> clientCallbackQueue; 
@property (readonly) id delegateOverride; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
+(void)initialize;
-(void)updateRemoteQueueReceiver:(remoteQueueReceiverOpaqueRef)arg1 handler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)activeCallbackQueue;
-(id)_activeCallbackQueue;
-(id)_activeDelegate;
-(NSObject*<OS_dispatch_queue>)clientCallbackQueue;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(id)clientDelegate;
-(BOOL)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)initWithQueueName:(id)arg1 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(BOOL)arg2 ;
-(BOOL)_validateCallbackQueue:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)activeDelegate;
-(void)updateLocalQueue:(localQueueOpaqueRef)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)releaseRemoteQueueReceiver;
-(BOOL)setClientDelegate:(id)arg1 clientCallbackQueue:(id)arg2 exceptionReason:(id*)arg3 ;
@end


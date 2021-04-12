/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
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
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)clientCallbackQueue;
-(id)_activeDelegate;
-(id)_activeCallbackQueue;
-(BOOL)_validateCallbackQueue:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)initWithQueueName:(id)arg1 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(BOOL)arg2 ;
-(id)activeDelegate;
-(NSObject*<OS_dispatch_queue>)activeCallbackQueue;
-(BOOL)setClientDelegate:(id)arg1 clientCallbackQueue:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)clientDelegate;
-(BOOL)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)updateRemoteQueueReceiver:(remoteQueueReceiverOpaqueRef)arg1 handler:(/*^block*/id)arg2 ;
-(void)releaseRemoteQueueReceiver;
-(void)updateLocalQueue:(localQueueOpaqueRef)arg1 handler:(/*^block*/id)arg2 ;
@end


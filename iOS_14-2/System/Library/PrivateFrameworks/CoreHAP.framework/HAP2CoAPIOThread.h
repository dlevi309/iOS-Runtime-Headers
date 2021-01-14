/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <Foundation/NSThread.h>

@protocol HAP2CoAPIOThreadDelegate;
@class NSMutableArray, HAP2Lock;

@interface HAP2CoAPIOThread : NSThread {

	int _wakeupPipeRead;
	int _wakeupPipeWrite;
	NSMutableArray* _queue;
	NSMutableArray* _consumerInfo;
	HAP2Lock* _lock;
	id<HAP2CoAPIOThreadDelegate> _delegate;

}
-(id)init;
-(void)_enqueue:(id)arg1 ;
-(void)main;
-(void)registerConsumer:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(void)cancel;
-(coap_context_t*)_createContext;
-(void)dealloc;
-(void)queueSessionBlockForConsumer:(id)arg1 sessionBlock:(/*^block*/id)arg2 ;
-(id)initWithQualityOfService:(long long)arg1 delegate:(id)arg2 ;
-(void)_assertIsCurrentThread;
-(void)_wakeUpThread;
-(BOOL)_processQueueWithContext:(coap_context_t*)arg1 ;
-(void)_cleanupWithContext:(coap_context_t*)arg1 ;
-(BOOL)_processQueueEntry:(id)arg1 context:(coap_context_t*)arg2 ;
-(void)_registerConsumer:(id)arg1 context:(coap_context_t*)arg2 ;
-(void)_unregisterConsumer:(id)arg1 ;
-(BOOL)_processSessionBlock:(/*^block*/id)arg1 consumer:(id)arg2 context:(coap_context_t*)arg3 ;
@end


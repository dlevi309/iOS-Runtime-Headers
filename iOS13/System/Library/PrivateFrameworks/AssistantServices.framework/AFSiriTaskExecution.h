/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriResponseHandling.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AFSiriRequestFailureHandling.h>

@protocol OS_dispatch_queue, AFSiriTaskDelivering;
@class NSObject, AFSiriRequest, NSXPCListener, AFWatchdogTimer, NSString;

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate, AFSiriRequestFailureHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	AFSiriRequest* _request;
	id<AFSiriTaskDelivering> _taskDeliverer;
	NSXPCListener* _usageResultListener;
	/*^block*/id _deliveryHandler;
	/*^block*/id _completionHandler;
	long long _state;
	id _keepAliveCycle;
	AFWatchdogTimer* _taskResponseWatchdogTimer;
	NSXPCListener* _taskResponseListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(void)_completeWithError:(id)arg1 ;
-(void)_completeWithResponse:(id)arg1 ;
-(void)_completeWithResponse:(id)arg1 error:(id)arg2 ;
-(void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3 ;
-(void)handleSiriResponse:(id)arg1 atTime:(unsigned long long)arg2 ;
-(id)initWithRequest:(id)arg1 taskDeliverer:(id)arg2 usageResultListener:(id)arg3 ;
-(void)setDeliveryHandler:(/*^block*/id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject {

	NSMutableDictionary* _requestContextMap;
	opaque_pthread_mutex_t _requestContextMapLock;

}
-(id)init;
-(void)dealloc;
-(id)scheduleTimeoutWithResponseHandler:(id)arg1 timeoutInterval:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg1 ;
-(long long)inFlightRequestCount;
-(void)_accessRequestContextMapInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(id)_criticalFindRequestContextWithResponseHandler:(id)arg1 ;
-(void)_handleSystemTimerFired:(id)arg1 ;
-(void)_criticalInvokeTimeoutBlockForRequestID:(id)arg1 ;
-(id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg1 ;
-(id)invalidateTimeoutsAndReturnHandlersForAllRequests;
@end


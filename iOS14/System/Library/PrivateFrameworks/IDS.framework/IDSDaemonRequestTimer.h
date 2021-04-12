/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject {

	NSMutableDictionary* _requestContextMap;
	opaque_pthread_mutex_t _requestContextMapLock;

}
-(id)_criticalFindRequestContextWithResponseHandler:(id)arg1 ;
-(void)_accessRequestContextMapInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(void)_handleSystemTimerFired:(id)arg1 ;
-(void)_criticalInvokeTimeoutBlockForRequestID:(id)arg1 ;
-(id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg1 ;
-(id)invalidateTimeoutsAndReturnHandlersForAllRequests;
-(id)init;
-(id)scheduleTimeoutWithResponseHandler:(id)arg1 timeoutInterval:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg1 ;
-(long long)inFlightRequestCount;
-(void)dealloc;
@end


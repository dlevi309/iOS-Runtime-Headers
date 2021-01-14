/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <Foundation/NSOperation.h>
#import <AVFCore/AVObjectMonitoring.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class AVWeakReference, NSObject, NSArray, NSString;

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring> {

	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToMonitoredObject;
	NSObject*<OS_dispatch_queue> _operationStateSerializationQueue;
	NSObject*<OS_dispatch_semaphore> _monitoringIsFinishedSemaphore;
	NSArray* _notificationNames;
	BOOL _registeredForObjectNotifications;
	BOOL _started;
	BOOL _finished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_monitoredObject;
-(void)_registerForObjectNotifications;
-(void)_balanceMonitoringIsFinishedSemaphore;
-(void)_waitUntilFinishedIfNeeded;
-(void)_unregisterForObjectNotifications;
-(void)_signalMonitoringIsFinishedIfNeeded;
-(void)monitoredObjectHasDeparted;
-(id)initWithObject:(id)arg1 notificationNames:(id)arg2 ;
-(void)main;
-(void)cancel;
-(void)dealloc;
@end


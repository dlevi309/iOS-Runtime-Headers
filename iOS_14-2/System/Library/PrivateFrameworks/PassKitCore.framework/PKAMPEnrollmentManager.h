/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKInAppPaymentService, NSMutableDictionary, NSObject, NSHashTable;

@interface PKAMPEnrollmentManager : NSObject {

	PKInAppPaymentService* _service;
	NSMutableDictionary* _promiseMap;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	os_unfair_lock_s _lockObservers;
	NSHashTable* _observers;

}
+(id)sharedManager;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(void)canEnrollPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)performCanEnrollPaymentPass:(id)arg1 ;
-(id)performEnrollPaymentPass:(id)arg1 isDefault:(BOOL)arg2 ;
-(void)enrollmentStatusForPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 progress:(/*^block*/id)arg3 ;
-(void)enrollPaymentPass:(id)arg1 isDefault:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_bag;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
@end


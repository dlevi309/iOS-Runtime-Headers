/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLSilo.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface CLDispatchSilo : CLSilo {

	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	double _currentLatchedAbsoluteTimestamp;
	BOOL _useCLPermissiveTimer;
	BOOL _isQueueSuspended;

}
-(id)operationQueue;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)assertInside;
-(void)sync:(/*^block*/id)arg1 ;
-(void)suspend;
-(BOOL)isSuspended;
-(id)newTimer;
-(void)assertOutside;
-(void)async:(/*^block*/id)arg1 ;
-(double)currentLatchedAbsoluteTimestamp;
-(BOOL)inPermissiveMode;
-(id)debugDescription;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(id)initWithUnderlyingQueue:(id)arg1 bePermissive:(BOOL)arg2 ;
-(void)updateLatchedAbsoluteTimestamp;
-(id)getTimeCoercibleVariantInstance;
-(id)queue;
-(void)_setLatchedAbsoluteTimestamp:(double)arg1 ;
-(id)initMain;
-(id)initWithIdentifier:(id)arg1 ;
-(void)resume;
@end


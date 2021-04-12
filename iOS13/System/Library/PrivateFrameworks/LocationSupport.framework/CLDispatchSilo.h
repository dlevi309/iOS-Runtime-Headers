/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLSilo.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface CLDispatchSilo : CLSilo {

	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	double _currentLatchedAbsoluteTimestamp;

}
-(id)debugDescription;
-(id)queue;
-(void)resume;
-(id)operationQueue;
-(id)initWithIdentifier:(id)arg1 ;
-(void)suspend;
-(id)newTimer;
-(void)async:(/*^block*/id)arg1 ;
-(void)assertInside;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(void)assertOutside;
-(double)currentLatchedAbsoluteTimestamp;
-(void)sync:(/*^block*/id)arg1 ;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)updateLatchedAbsoluteTimestamp;
-(id)getTimeCoercibleVariantInstance;
-(id)initMain;
-(void)_setLatchedAbsoluteTimestamp:(double)arg1 ;
@end


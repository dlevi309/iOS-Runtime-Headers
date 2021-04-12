/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/LocationSupport-Structs.h>
#import <LocationSupport/CLSilo.h>

@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {

	double _currentLatchedAbsoluteTimestamp;
	CLRunLoopSiloThread* _siloThread;

}
-(id)debugDescription;
-(void)resume;
-(id)initWithIdentifier:(id)arg1 ;
-(void)suspend;
-(id)newTimer;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg1 ;
-(id)runloop;
-(void)async:(/*^block*/id)arg1 ;
-(void)assertInside;
-(void)assertOutside;
-(double)currentLatchedAbsoluteTimestamp;
-(void)sync:(/*^block*/id)arg1 ;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)updateLatchedAbsoluteTimestamp;
-(id)initWithUnderlyingRunLoop:(CFRunLoopRef)arg1 ;
-(id)getTimeCoercibleVariantInstance;
@end


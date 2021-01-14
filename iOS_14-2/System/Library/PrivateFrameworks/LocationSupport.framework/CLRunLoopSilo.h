/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/LocationSupport-Structs.h>
#import <LocationSupport/CLSilo.h>

@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {

	double _currentLatchedAbsoluteTimestamp;
	CLRunLoopSiloThread* _siloThread;
	BOOL _useCLPermissiveTimer;

}
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
-(id)runloop;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg1 bePermissive:(BOOL)arg2 ;
-(id)initWithUnderlyingRunLoop:(CFRunLoopRef)arg1 ;
-(void)updateLatchedAbsoluteTimestamp;
-(id)getTimeCoercibleVariantInstance;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)resume;
@end


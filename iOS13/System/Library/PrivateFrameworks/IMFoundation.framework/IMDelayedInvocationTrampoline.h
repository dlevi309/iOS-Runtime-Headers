/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSArray;

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {

	NSArray* _modes;
	double _delay;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 delay:(double)arg2 modes:(id)arg3 ;
@end


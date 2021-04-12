/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable, EFScheduler;
@interface _EFIdealTimerObservable : EFObservable {

	id<EFObservable> _input;
	id<EFScheduler> _scheduler;
	double _interval;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 timeInterval:(double)arg2 scheduler:(id)arg3 ;
@end


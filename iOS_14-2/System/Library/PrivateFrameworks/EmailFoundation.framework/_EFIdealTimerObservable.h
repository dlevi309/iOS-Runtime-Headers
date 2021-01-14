/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


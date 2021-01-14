/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFObservable, SBFScheduler;
@interface _SBFScheduledObservable : SBFObservable {

	id<SBFObservable> _observable;
	id<SBFScheduler> _scheduler;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 scheduler:(id)arg2 ;
@end


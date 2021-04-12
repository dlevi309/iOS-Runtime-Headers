/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


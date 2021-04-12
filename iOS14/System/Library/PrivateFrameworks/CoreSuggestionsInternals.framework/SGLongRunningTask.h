/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class SGLongRunningTaskManager, NSDate;

@interface SGLongRunningTask : NSObject {

	SGLongRunningTaskManager* _manager;
	NSDate* _deadline;
	AB _deferRequested;

}
-(BOOL)shouldDefer;
-(id)init;
-(void)markFinished;
-(void)requestDefer;
-(id)initWithDeadline:(id)arg1 manager:(id)arg2 ;
@end


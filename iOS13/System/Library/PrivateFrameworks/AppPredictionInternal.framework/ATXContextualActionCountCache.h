/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSCountedSet, NSDateInterval, NSDate;

@interface ATXContextualActionCountCache : NSObject {

	NSCountedSet* headingToWorkActions;
	NSCountedSet* headingHomeActions;
	NSCountedSet* unspecifiedActions;
	NSCountedSet* allActions;
	NSDateInterval* headingToWorkDateInterval;
	NSDateInterval* headingHomeDateInterval;
	NSDateInterval* otherDateInterval;
	NSDate* _oldestAction;

}

@property (nonatomic,readonly) NSDate * oldestAction;              //@synthesize oldestAction=_oldestAction - In the implementation block
-(id)init;
-(void)addMinimalActionParameter:(id)arg1 ;
-(id)getCountsForContext:(id)arg1 ;
-(id)getAllCounts;
-(NSDate *)oldestAction;
@end


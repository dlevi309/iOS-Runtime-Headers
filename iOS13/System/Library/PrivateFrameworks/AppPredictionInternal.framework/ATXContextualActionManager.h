/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class ATXContextualActionCountCache, NSDate;

@interface ATXContextualActionManager : NSObject {

	ATXContextualActionCountCache* actionCountCache;
	NSDate* actionCountCacheCreationDate;

}
-(id)init;
-(id)getCountsForContext:(id)arg1 ;
-(id)getAllCounts;
-(double)getIntervalSinceOldestEvent;
-(void)_updateCacheIfNeeded;
-(void)_getActionsFromLastMonth;
-(id)initWithStaticActions:(id)arg1 ;
@end


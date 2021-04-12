/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class NSString, ATXHeuristicResultCache, NSArray, NSSet;

@interface ATXHeuristicResultCacheEntry : NSObject {

	NSString* _heuristicName;
	ATXHeuristicResultCache* _cache;
	NSArray* _actions;
	NSSet* _expirers;

}
-(void)dealloc;
-(id)initWithHeuristic:(id)arg1 cache:(id)arg2 ;
-(void)setActions:(id)arg1 expirers:(id)arg2 ;
@end


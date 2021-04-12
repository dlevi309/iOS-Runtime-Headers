/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject {

	NSString* _heuristicName;
	ATXHeuristicResultCache* _cache;

}

@property (nonatomic,retain) NSString * heuristicName;                            //@synthesize heuristicName=_heuristicName - In the implementation block
@property (assign,nonatomic,__weak) ATXHeuristicResultCache * cache;              //@synthesize cache=_cache - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setCache:(ATXHeuristicResultCache *)arg1 ;
-(ATXHeuristicResultCache *)cache;
-(id)initWithHeuristic:(id)arg1 cache:(id)arg2 ;
-(NSString *)heuristicName;
-(void)setHeuristicName:(NSString *)arg1 ;
@end


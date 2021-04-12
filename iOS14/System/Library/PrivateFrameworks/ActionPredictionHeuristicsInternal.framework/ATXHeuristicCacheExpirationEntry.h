/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject {

	NSString* _heuristicName;
	ATXHeuristicResultCache* _cache;

}

@property (nonatomic,retain) NSString * heuristicName;                            //@synthesize heuristicName=_heuristicName - In the implementation block
@property (assign,nonatomic,__weak) ATXHeuristicResultCache * cache;              //@synthesize cache=_cache - In the implementation block
-(void)setHeuristicName:(NSString *)arg1 ;
-(ATXHeuristicResultCache *)cache;
-(id)initWithHeuristic:(id)arg1 cache:(id)arg2 ;
-(void)setCache:(ATXHeuristicResultCache *)arg1 ;
-(NSString *)heuristicName;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end


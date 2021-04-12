/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableDictionary;

@interface HDDatabaseValueCacheTransactionStorage : NSObject {

	BOOL _didRemoveAllObjects;
	NSMutableDictionary* _cache;
	long long _cacheScope;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) long long cacheScope;                     //@synthesize cacheScope=_cacheScope - In the implementation block
@property (assign,nonatomic) BOOL didRemoveAllObjects;                 //@synthesize didRemoveAllObjects=_didRemoveAllObjects - In the implementation block
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(void)setCacheScope:(long long)arg1 ;
-(long long)cacheScope;
-(BOOL)didRemoveAllObjects;
-(void)setDidRemoveAllObjects:(BOOL)arg1 ;
@end


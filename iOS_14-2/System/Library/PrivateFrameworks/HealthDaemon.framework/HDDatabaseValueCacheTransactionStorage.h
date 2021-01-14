/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)cacheScope;
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(BOOL)didRemoveAllObjects;
-(void)setDidRemoveAllObjects:(BOOL)arg1 ;
-(void)setCacheScope:(long long)arg1 ;
@end


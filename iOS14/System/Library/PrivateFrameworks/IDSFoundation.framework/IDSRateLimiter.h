/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject {

	os_unfair_lock_s _lock;
	long long _limit;
	double _timeLimit;
	NSMutableDictionary* _cacheMap;

}

@property (assign,nonatomic) long long limit;                             //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double timeLimit;                            //@synthesize timeLimit=_timeLimit - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheMap;              //@synthesize cacheMap=_cacheMap - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                       //@synthesize lock=_lock - In the implementation block
-(void)setLimit:(long long)arg1 ;
-(long long)limit;
-(void)noteItem:(id)arg1 ;
-(double)timeLimit;
-(void)cleanupExpiredItems;
-(os_unfair_lock_s)lock;
-(id)initWithLimit:(long long)arg1 timeLimit:(double)arg2 ;
-(NSMutableDictionary *)cacheMap;
-(id)description;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)setCacheMap:(NSMutableDictionary *)arg1 ;
-(void)setTimeLimit:(double)arg1 ;
-(double)timeToUnderLimit:(id)arg1 ;
-(BOOL)underLimitForItem:(id)arg1 ;
-(void)clearItem:(id)arg1 ;
-(id)_unlockedDescription;
@end


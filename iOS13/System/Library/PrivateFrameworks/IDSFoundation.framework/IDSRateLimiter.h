/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSMutableDictionary, NSMultiReadUniWriteLock;

@interface IDSRateLimiter : NSObject {

	NSMutableDictionary* _cacheMap;
	NSMultiReadUniWriteLock* _readWriteLock;
	double _timeLimit;
	long long _limit;

}

@property (assign,nonatomic) long long limit;                                      //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double timeLimit;                                     //@synthesize timeLimit=_timeLimit - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheMap;                       //@synthesize cacheMap=_cacheMap - In the implementation block
@property (nonatomic,retain) NSMultiReadUniWriteLock * readWriteLock;              //@synthesize readWriteLock=_readWriteLock - In the implementation block
-(id)description;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(id)initWithLimit:(long long)arg1 timeLimit:(double)arg2 ;
-(void)noteItem:(id)arg1 ;
-(double)timeToUnderLimit:(id)arg1 ;
-(BOOL)underLimitForItem:(id)arg1 ;
-(void)cleanupExpiredItems;
-(NSMutableDictionary *)cacheMap;
-(id)_unlockedDescription;
-(double)timeLimit;
-(void)clearItem:(id)arg1 ;
-(void)setTimeLimit:(double)arg1 ;
-(void)setCacheMap:(NSMutableDictionary *)arg1 ;
-(NSMultiReadUniWriteLock *)readWriteLock;
-(void)setReadWriteLock:(NSMultiReadUniWriteLock *)arg1 ;
@end


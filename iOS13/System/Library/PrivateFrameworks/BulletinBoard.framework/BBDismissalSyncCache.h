/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSMutableDictionary, NSDate;

@interface BBDismissalSyncCache : NSObject {

	NSMutableDictionary* _cache;
	NSDate* _timeToCheck;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSDate * timeToCheck;                     //@synthesize timeToCheck=_timeToCheck - In the implementation block
-(id)init;
-(id)description;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(id)findBulletinMatch:(id)arg1 ;
-(void)removeBulletinMatch:(id)arg1 ;
-(void)_checkCache;
-(NSDate *)timeToCheck;
-(BOOL)_isTimeToCheck;
-(void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(unsigned long long)arg4 ;
-(void)setTimeToCheck:(NSDate *)arg1 ;
@end


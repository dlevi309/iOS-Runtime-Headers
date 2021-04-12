/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSDate, NSObject;

@interface BLTLightsAndSirensReplyInfoCache : NSObject {

	NSMutableDictionary* _localReplyInfo;
	NSDate* _timeToCheck;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * localReplyInfo;              //@synthesize localReplyInfo=_localReplyInfo - In the implementation block
@property (nonatomic,retain) NSDate * timeToCheck;                              //@synthesize timeToCheck=_timeToCheck - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
+(id)sharedReplyCache;
-(id)init;
-(void)_checkCache;
-(NSDate *)timeToCheck;
-(BOOL)_isTimeToCheck;
-(void)setTimeToCheck:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cacheReply:(/*^block*/id)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 publicationDate:(id)arg4 replyToken:(id)arg5 ;
-(id)cacheDidPlayLightsAndSirens:(unsigned long long)arg1 withReplyToken:(id)arg2 ;
-(void)purgeReplyInfo:(id)arg1 withReplyToken:(id)arg2 ;
-(void)setLocalReplyInfo:(NSMutableDictionary *)arg1 ;
-(void)_setNextTimeToCheck;
-(id)_firstReplyInfoWithNoReplyWithReplyToken:(id)arg1 ;
-(void)_addReplyInfo:(id)arg1 forReplyToken:(id)arg2 ;
-(id)_firstReplyInfoWithNoDidPlayStateWithReplyToken:(id)arg1 ;
-(NSMutableDictionary *)localReplyInfo;
@end


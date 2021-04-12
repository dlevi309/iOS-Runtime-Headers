/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject {

	NSMutableArray* _dismissalDictionariesAndFeeds;
	NSMutableDictionary* _dismissalIDToFeeds;

}

@property (nonatomic,readonly) NSMutableArray * dismissalDictionariesAndFeeds;              //@synthesize dismissalDictionariesAndFeeds=_dismissalDictionariesAndFeeds - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dismissalIDToFeeds;                    //@synthesize dismissalIDToFeeds=_dismissalIDToFeeds - In the implementation block
-(id)init;
-(id)description;
-(void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 forFeeds:(unsigned long long)arg3 ;
-(id)findBulletinMatch:(id)arg1 ;
-(void)removeBulletinMatch:(id)arg1 ;
-(id)purgeExpired;
-(NSMutableArray *)dismissalDictionariesAndFeeds;
-(NSMutableDictionary *)dismissalIDToFeeds;
@end


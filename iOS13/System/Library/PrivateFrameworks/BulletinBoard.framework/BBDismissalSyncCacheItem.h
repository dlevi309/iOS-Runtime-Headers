/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


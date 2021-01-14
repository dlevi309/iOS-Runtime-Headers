/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject {

	unsigned long long _count;
	SASBulletinCacheNode* _oldestNode;
	SASBulletinCacheNode* _newestNode;

}
-(id)init;
-(id)allBulletins;
-(id)cachedBulletinForID:(id)arg1 ;
-(void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2 ;
-(BOOL)removeBulletinForID:(id)arg1 ;
-(BOOL)_isFeedRelevant:(unsigned long long)arg1 ;
-(id)_findNodeForBulletinID:(id)arg1 ;
-(void)_deleteNode:(id)arg1 ;
-(void)_purgeOldestNodes;
@end


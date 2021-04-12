/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@interface BCSConfigController : NSObject
-(void)fetchBloomFilterWithStartIndex:(long long)arg1 shardCount:(long long)arg2 forClientBundleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchConfigItemForClientBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_shardHashForIndex:(long long)arg1 count:(long long)arg2 ;
-(void)deleteConfigItemFromPersistentStore;
@end


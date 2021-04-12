/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSCloudServerBodyProvider <NSObject>
@required
-(id)bodyForBusinessItemRequestWithBizID:(id)arg1;
-(id)bodyForBusinessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2;
-(id)bodyForConfigItemRequest;
-(id)bodyForBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2;

@end


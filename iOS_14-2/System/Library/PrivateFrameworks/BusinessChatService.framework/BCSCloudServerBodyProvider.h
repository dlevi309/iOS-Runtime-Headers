/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSCloudServerBodyProvider <NSObject>
@required
-(id)bodyForBusinessItemRequestWithBizID:(id)arg1;
-(id)bodyForItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3;
-(id)bodyForConfigItemRequestWithType:(long long)arg1;
-(id)bodyForBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 type:(long long)arg3;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSCloudServerRouteProvider, BCSCloudServerBodyProvider;
@interface BCSCloudServerRequestHelper : NSObject {

	id<BCSCloudServerRouteProvider> _cloudServerRouteProvider;
	id<BCSCloudServerBodyProvider> _cloudServerBodyProvider;

}

@property (nonatomic,retain) id<BCSCloudServerRouteProvider> cloudServerRouteProvider;              //@synthesize cloudServerRouteProvider=_cloudServerRouteProvider - In the implementation block
@property (nonatomic,retain) id<BCSCloudServerBodyProvider> cloudServerBodyProvider;                //@synthesize cloudServerBodyProvider=_cloudServerBodyProvider - In the implementation block
-(id)businessItemRequestWithBizID:(id)arg1 timeout:(double)arg2 ;
-(id)itemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 timeout:(double)arg4 ;
-(id)initWithRouteProvider:(unsigned long long)arg1 bodyProvider:(unsigned long long)arg2 ;
-(id)baseBusinessItemJSONPostRequestWithTimeout:(double)arg1 cloudServerRequestType:(long long)arg2 itemType:(long long)arg3 ;
-(id<BCSCloudServerBodyProvider>)cloudServerBodyProvider;
-(void)_addEdgeCachingToRequest:(id)arg1 requestType:(id)arg2 itemType:(long long)arg3 requestIdentifier:(id)arg4 ;
-(id)_edgeCacheItemRequestTypeForType:(long long)arg1 ;
-(id)_itemRecordTypeForType:(long long)arg1 ;
-(id)_configRecordTypeForType:(long long)arg1 ;
-(id)_edgeCacheBloomFilterRequestTypeForType:(long long)arg1 ;
-(id)_bloomFilterRecordTypeForType:(long long)arg1 ;
-(BOOL)_skipEdgeCachingWithType:(long long)arg1 ;
-(id<BCSCloudServerRouteProvider>)cloudServerRouteProvider;
-(id)configItemRequestWithType:(long long)arg1 timeout:(double)arg2 ;
-(id)shardRequestForShardIdentifier:(id)arg1 timeout:(double)arg2 ;
-(id)_edgeCacheConfigRequestTypeForType:(long long)arg1 ;
-(void)setCloudServerRouteProvider:(id<BCSCloudServerRouteProvider>)arg1 ;
-(void)setCloudServerBodyProvider:(id<BCSCloudServerBodyProvider>)arg1 ;
@end


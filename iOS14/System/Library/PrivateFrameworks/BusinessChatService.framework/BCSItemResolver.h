/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BCSItemResolving.h>

@protocol BCSItemCaching, BCSItemCacheSkipping, BCSItemRemoteFetching, BCSMetricFactoryProtocol;
@class NSString;

@interface BCSItemResolver : NSObject <BCSItemResolving> {

	id<BCSItemCaching> _itemCache;
	id<BCSItemCacheSkipping> _itemCacheSkipper;
	id<BCSItemRemoteFetching> _itemRemoteFetcher;
	id<BCSMetricFactoryProtocol> _metricFactory;

}

@property (nonatomic,retain,readonly) id<BCSItemCaching> itemCache;                             //@synthesize itemCache=_itemCache - In the implementation block
@property (nonatomic,retain,readonly) id<BCSItemCacheSkipping> itemCacheSkipper;                //@synthesize itemCacheSkipper=_itemCacheSkipper - In the implementation block
@property (nonatomic,retain,readonly) id<BCSItemRemoteFetching> itemRemoteFetcher;              //@synthesize itemRemoteFetcher=_itemRemoteFetcher - In the implementation block
@property (nonatomic,retain) id<BCSMetricFactoryProtocol> metricFactory;                        //@synthesize metricFactory=_metricFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BCSMetricFactoryProtocol>)metricFactory;
-(void)setMetricFactory:(id<BCSMetricFactoryProtocol>)arg1 ;
-(id<BCSItemCacheSkipping>)itemCacheSkipper;
-(id<BCSItemCaching>)itemCache;
-(SCD_Struct_BC2)_bucketRangeForItemIdentifier:(id)arg1 bucketCount:(long long)arg2 ;
-(id<BCSItemRemoteFetching>)itemRemoteFetcher;
-(id)_firstItemInBucket:(id)arg1 matching:(id)arg2 ;
-(id)cachedItemMatching:(id)arg1 ;
-(void)itemMatching:(id)arg1 config:(id)arg2 clientBundleID:(id)arg3 metric:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithItemCache:(id)arg1 cacheSkipper:(id)arg2 remoteFetcher:(id)arg3 metricFactory:(id)arg4 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BCSConfigRemoteFetching.h>
#import <libobjc.A.dylib/BCSShardRemoteFetching.h>
#import <libobjc.A.dylib/BCSBloomFilterAndConfigRemoteFetching.h>
#import <libobjc.A.dylib/BCSItemRemoteFetching.h>
#import <libobjc.A.dylib/BCSShardItemInstantiating.h>

@protocol BCSICloudServerEnvironmentProtocol, BCSCloudKitDatabaseProtocol, BCSQueryOperationProtocol, BCSCloudKitQueryProviding, BCSQueryOperationFactoryProtocol, BCSCoalesceHelperProtocol, BCSBloomFilterExtractorProtocol, BCSOperationGroupFactoryProtocol, BCSMetricFactoryProtocol;
@class CKContainer, NSString;

@interface BCSRemoteFetchCloudKit : NSObject <BSDescriptionProviding, BCSConfigRemoteFetching, BCSShardRemoteFetching, BCSBloomFilterAndConfigRemoteFetching, BCSItemRemoteFetching, BCSShardItemInstantiating> {

	id<BCSICloudServerEnvironmentProtocol> _environment;
	id<BCSCloudKitDatabaseProtocol> _database;
	id<BCSQueryOperationProtocol> _queryOperation;
	id<BCSCloudKitQueryProviding> _queryProvider;
	id<BCSQueryOperationFactoryProtocol> _queryOperationFactory;
	CKContainer* _databaseContainer;
	id<BCSCoalesceHelperProtocol> _coalesceHelper;
	id<BCSBloomFilterExtractorProtocol> _bloomFilterExtractor;
	id<BCSOperationGroupFactoryProtocol> _operationGroupFactory;
	id<BCSMetricFactoryProtocol> _metricFactory;

}

@property (nonatomic,retain,readonly) id<BCSCloudKitDatabaseProtocol> database;                                //@synthesize database=_database - In the implementation block
@property (nonatomic,retain,readonly) id<BCSCloudKitQueryProviding> queryProvider;                             //@synthesize queryProvider=_queryProvider - In the implementation block
@property (nonatomic,retain,readonly) id<BCSQueryOperationFactoryProtocol> queryOperationFactory;              //@synthesize queryOperationFactory=_queryOperationFactory - In the implementation block
@property (nonatomic,retain,readonly) CKContainer * databaseContainer;                                         //@synthesize databaseContainer=_databaseContainer - In the implementation block
@property (nonatomic,retain,readonly) id<BCSICloudServerEnvironmentProtocol> environment;                      //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain,readonly) id<BCSCoalesceHelperProtocol> coalesceHelper;                            //@synthesize coalesceHelper=_coalesceHelper - In the implementation block
@property (nonatomic,retain,readonly) id<BCSBloomFilterExtractorProtocol> bloomFilterExtractor;                //@synthesize bloomFilterExtractor=_bloomFilterExtractor - In the implementation block
@property (nonatomic,retain,readonly) id<BCSOperationGroupFactoryProtocol> operationGroupFactory;              //@synthesize operationGroupFactory=_operationGroupFactory - In the implementation block
@property (nonatomic,retain,readonly) id<BCSMetricFactoryProtocol> metricFactory;                              //@synthesize metricFactory=_metricFactory - In the implementation block
@property (nonatomic,readonly) long long supportedType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id<BCSICloudServerEnvironmentProtocol>)environment;
-(id<BCSCloudKitDatabaseProtocol>)database;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)fetchConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<BCSMetricFactoryProtocol>)metricFactory;
-(id)shardItemFromURL:(id)arg1 ;
-(void)fetchBloomFilterAndConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchItemsWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 forClientBundleID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchShardMatching:(id)arg1 clientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithEnvironment:(id)arg1 database:(id)arg2 databaseContainer:(id)arg3 queryProvider:(id)arg4 queryOperationFactory:(id)arg5 coalesceHelper:(id)arg6 bloomFilterExtractor:(id)arg7 operationGroupFactory:(id)arg8 metricFactory:(id)arg9 ;
-(id<BCSCoalesceHelperProtocol>)coalesceHelper;
-(id<BCSCloudKitQueryProviding>)queryProvider;
-(id)_additionalHTTPHeadersForConfigFetchWithType:(long long)arg1 ;
-(id)_queryOperationForQuery:(id)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 requestSpecificAdditionalHTTPHeaders:(id)arg4 type:(long long)arg5 singleFetchCompletion:(/*^block*/id)arg6 ;
-(id)_additionalHTTPHeadersForShardFetchWithType:(long long)arg1 ;
-(void)fetchBloomFilterAndConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_additionalHTTPHeadersForConfigAndShardFetchWithType:(long long)arg1 ;
-(id<BCSBloomFilterExtractorProtocol>)bloomFilterExtractor;
-(id)_additionalHTTPHeadersForItemFetchWithType:(long long)arg1 ;
-(id)_itemsFromCloudKitResults:(id)arg1 forType:(long long)arg2 ;
-(id)_queryOperationForQuery:(id)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 requestSpecificAdditionalHTTPHeaders:(id)arg4 type:(long long)arg5 multipleFetchCompletion:(/*^block*/id)arg6 ;
-(void)_configureOperationForQuery:(id)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 requestSpecificAdditionalHTTPHeaders:(id)arg4 type:(long long)arg5 ;
-(id)_queryOperationForQuery:(id)arg1 configurationBlock:(/*^block*/id)arg2 singleFetchCompletion:(/*^block*/id)arg3 ;
-(id)_queryOperationForQuery:(id)arg1 configurationBlock:(/*^block*/id)arg2 multipleFetchCompletion:(/*^block*/id)arg3 ;
-(id<BCSQueryOperationFactoryProtocol>)queryOperationFactory;
-(id<BCSOperationGroupFactoryProtocol>)operationGroupFactory;
-(id)initWithEnvironment:(id)arg1 database:(id)arg2 databaseContainer:(id)arg3 queryOperationFactory:(id)arg4 coalesceHelper:(id)arg5 bloomFilterExtractor:(id)arg6 operationGroupFactory:(id)arg7 metricFactory:(id)arg8 ;
-(long long)supportedType;
-(CKContainer *)databaseContainer;
@end


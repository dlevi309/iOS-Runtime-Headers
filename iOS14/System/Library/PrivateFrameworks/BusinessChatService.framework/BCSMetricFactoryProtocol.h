/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSMetricFactoryProtocol <NSObject>
@property (nonatomic,readonly) id<BCSMeasurementFactoryProtocol> measurementFactory; 
@required
-(id<BCSMeasurementFactoryProtocol>)measurementFactory;
-(id)megashardPrefetchMetricForType:(long long)arg1;
-(id)configResolutionMetricForConfigType:(long long)arg1;
-(id)shardResolutionMetricForShardIdentifier:(id)arg1;
-(id)itemResolutionMetricForItemIdentifier:(id)arg1;
-(id)businessLinkRegisteredMetricForItemIdentifier:(id)arg1;
-(id)businessLinkFetchMetricForItemIdentifier:(id)arg1;
-(id)businessLinkHashFetchMetricForItemIdentifier:(id)arg1;
-(id)chatSuggestRegisteredMetricForItemIdentifier:(id)arg1;
-(id)chatSuggestFetchMetricForItemIdentifier:(id)arg1;
-(id)configPrefetchMetricForConfigType:(long long)arg1;

@end


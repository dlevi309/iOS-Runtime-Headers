/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSMeasurementFactoryProtocol <NSObject>
@required
-(id)configCacheHitMeasurementForConfigType:(long long)arg1;
-(id)itemCacheHitMeasurementForItemIdentifier:(id)arg1;
-(id)itemIsRegisteredTimingMeasurementForItemIdentifier:(id)arg1;
-(id)itemFetchTimingMeasurementForItemIdentifier:(id)arg1;
-(id)businessLinkFetchByHashTimingMeasurementForItemIdentifier:(id)arg1;
-(id)configResolutionTimingMeasurementForConfigType:(long long)arg1;
-(id)shardResolutionTimingMeasurementForShardIdentifier:(id)arg1;
-(id)itemResolutionTimingMeasurementForItemIdentifier:(id)arg1;
-(id)businessLinkChoppedFetchTimingMeasurementForItemIdentifier:(id)arg1;
-(id)shardCacheHitMeasurementForShardIdentifier:(id)arg1;
-(id)configCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
-(id)shardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
-(id)itemCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
-(id)megashardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
-(id)configCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
-(id)shardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
-(id)itemCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
-(id)megashardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;

@end


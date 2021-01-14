/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSMetricFactoryProtocol.h>

@protocol BCSMeasurementFactoryProtocol;
@class NSArray, NSString;

@interface BCSMetricFactory : NSObject <BCSMetricFactoryProtocol> {

	id<BCSMeasurementFactoryProtocol> _measurementFactory;
	NSArray* _postProcessingMetricHandlers;

}

@property (nonatomic,readonly) NSArray * postProcessingMetricHandlers;                            //@synthesize postProcessingMetricHandlers=_postProcessingMetricHandlers - In the implementation block
@property (nonatomic,readonly) id<BCSMeasurementFactoryProtocol> measurementFactory;              //@synthesize measurementFactory=_measurementFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BCSMeasurementFactoryProtocol>)measurementFactory;
-(id)megashardPrefetchMetricForType:(long long)arg1 ;
-(NSArray *)postProcessingMetricHandlers;
-(id)configResolutionMetricForConfigType:(long long)arg1 ;
-(id)shardResolutionMetricForShardIdentifier:(id)arg1 ;
-(id)itemResolutionMetricForItemIdentifier:(id)arg1 ;
-(id)businessLinkRegisteredMetricForItemIdentifier:(id)arg1 ;
-(id)businessLinkFetchMetricForItemIdentifier:(id)arg1 ;
-(id)businessLinkHashFetchMetricForItemIdentifier:(id)arg1 ;
-(id)chatSuggestRegisteredMetricForItemIdentifier:(id)arg1 ;
-(id)chatSuggestFetchMetricForItemIdentifier:(id)arg1 ;
-(id)configPrefetchMetricForConfigType:(long long)arg1 ;
-(id)initWithMeasurementFactory:(id)arg1 ;
@end


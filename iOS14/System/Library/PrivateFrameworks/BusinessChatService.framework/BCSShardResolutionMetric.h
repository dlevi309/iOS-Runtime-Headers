/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSMetric.h>
#import <libobjc.A.dylib/BCSCoreAnalyticsEventDescribing.h>
#import <libobjc.A.dylib/BCSShardItemIdentifierProviding.h>
#import <libobjc.A.dylib/BCSResolutionMetricProtocol.h>

@class BCSFlagMeasurement, BCSTimingMeasurement, NSString, NSDictionary;

@interface BCSShardResolutionMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSShardItemIdentifierProviding, BCSResolutionMetricProtocol> {

	BOOL errorEncountered;
	BCSFlagMeasurement* cacheHitMeasurement;
	BCSTimingMeasurement* timingMeasurement;

}

@property (nonatomic,readonly) NSString * coreAnalyticsEventName; 
@property (nonatomic,readonly) NSDictionary * coreAnalyticsPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BCSShardItemIdentifying> shardItemIdentifier; 
@property (assign,nonatomic) BOOL errorEncountered; 
@property (nonatomic,retain) BCSTimingMeasurement * timingMeasurement; 
@property (nonatomic,retain) BCSFlagMeasurement * cacheHitMeasurement; 
+(id)metricForShardIdentifier:(id)arg1 postProcessingMetricHandlers:(id)arg2 ;
-(void)setCacheHitMeasurement:(BCSFlagMeasurement *)arg1 ;
-(BCSFlagMeasurement *)cacheHitMeasurement;
-(NSString *)coreAnalyticsEventName;
-(NSDictionary *)coreAnalyticsPayload;
-(void)setTimingMeasurement:(BCSTimingMeasurement *)arg1 ;
-(BCSTimingMeasurement *)timingMeasurement;
-(void)setErrorEncountered:(BOOL)arg1 ;
-(BOOL)errorEncountered;
-(id<BCSShardItemIdentifying>)shardItemIdentifier;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSMetric.h>
#import <libobjc.A.dylib/BCSCoreAnalyticsEventDescribing.h>
#import <libobjc.A.dylib/BCSPrefetchMetricProtocol.h>

@class NSString, NSDictionary;

@interface BCSMegashardPrefetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSPrefetchMetricProtocol> {

	BOOL successful;
	long long hoursSinceLastSuccessfulPrefetch;

}

@property (nonatomic,readonly) NSString * coreAnalyticsEventName; 
@property (nonatomic,readonly) NSDictionary * coreAnalyticsPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (assign,nonatomic) BOOL successful; 
@property (assign,nonatomic) long long hoursSinceLastSuccessfulPrefetch; 
+(id)metricForMegashardType:(long long)arg1 postProcessingMetricHandlers:(id)arg2 ;
-(BOOL)successful;
-(void)setSuccessful:(BOOL)arg1 ;
-(long long)type;
-(void)setHoursSinceLastSuccessfulPrefetch:(long long)arg1 ;
-(NSString *)coreAnalyticsEventName;
-(NSDictionary *)coreAnalyticsPayload;
-(long long)hoursSinceLastSuccessfulPrefetch;
@end


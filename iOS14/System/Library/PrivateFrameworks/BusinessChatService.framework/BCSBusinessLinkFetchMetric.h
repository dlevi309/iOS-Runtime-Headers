/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSMetric.h>
#import <libobjc.A.dylib/BCSCoreAnalyticsEventDescribing.h>
#import <libobjc.A.dylib/BCSItemFetchMetricProtocol.h>
#import <libobjc.A.dylib/BCSBusinessLinkChoppingMetric.h>

@class BCSTimingMeasurement, NSString, NSDictionary;

@interface BCSBusinessLinkFetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol, BCSBusinessLinkChoppingMetric> {

	BOOL choppingEnabled;
	BOOL errorEncountered;
	long long successfulChop;
	BCSTimingMeasurement* timingMeasurement;

}

@property (nonatomic,readonly) NSString * coreAnalyticsEventName; 
@property (nonatomic,readonly) NSDictionary * coreAnalyticsPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL errorEncountered; 
@property (nonatomic,retain) BCSTimingMeasurement * timingMeasurement; 
@property (assign,getter=isChoppingEnabled,nonatomic) BOOL choppingEnabled; 
@property (assign,nonatomic) long long successfulChop; 
+(id)metricWithPostProcessingMetricHandlers:(id)arg1 ;
-(NSString *)coreAnalyticsEventName;
-(NSDictionary *)coreAnalyticsPayload;
-(void)setTimingMeasurement:(BCSTimingMeasurement *)arg1 ;
-(BCSTimingMeasurement *)timingMeasurement;
-(void)setErrorEncountered:(BOOL)arg1 ;
-(void)setChoppingEnabled:(BOOL)arg1 ;
-(void)setSuccessfulChop:(long long)arg1 ;
-(BOOL)errorEncountered;
-(BOOL)isChoppingEnabled;
-(long long)successfulChop;
@end


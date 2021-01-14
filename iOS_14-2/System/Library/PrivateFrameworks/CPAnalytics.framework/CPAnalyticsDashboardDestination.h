/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@class CPAnalytics, NSArray, NSString;

@interface CPAnalyticsDashboardDestination : NSObject <CPAnalyticsDestination> {

	CPAnalytics* _cpAnalyticsInstance;

}

@property (nonatomic,__weak,readonly) CPAnalytics * cpAnalyticsInstance;              //@synthesize cpAnalyticsInstance=_cpAnalyticsInstance - In the implementation block
@property (nonatomic,readonly) NSArray * allStandardProperties; 
@property (nonatomic,readonly) NSArray * allMediaProperties; 
@property (nonatomic,readonly) NSArray * allErrorProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(CPAnalytics *)cpAnalyticsInstance;
-(id)init;
-(NSArray *)allStandardProperties;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(NSArray *)allMediaProperties;
-(NSArray *)allErrorProperties;
-(BOOL)isMediaEvent:(id)arg1 ;
-(void)sendCoreAnalyticsEventWithStandardPropertiesForEventWithName:(id)arg1 fromSourceEvent:(id)arg2 payload:(id)arg3 ;
-(id)buildCoreAnalyticsEventPayloadWithProperties:(id)arg1 fromSourceEvent:(id)arg2 intoTargetEventPayload:(id)arg3 ;
-(void)reportMalformedEvent:(id)arg1 malformationDescriptionWithFormat:(id)arg2 ;
@end


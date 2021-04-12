/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@class CPAnalytics, NSDictionary, CPAnalyticsScreenManager, NSSet, NSMutableArray;

@interface CPAnalyticsAppStateDestination : NSObject <CPAnalyticsDestination> {

	CPAnalytics* _cpAnalyticsInstance;
	NSDictionary* _config;
	CPAnalyticsScreenManager* _screenManager;
	NSSet* _appEventNames;
	NSMutableArray* _counters;

}

@property (nonatomic,__weak,readonly) CPAnalytics * cpAnalyticsInstance;              //@synthesize cpAnalyticsInstance=_cpAnalyticsInstance - In the implementation block
@property (nonatomic,readonly) NSDictionary * config;                                 //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) CPAnalyticsScreenManager * screenManager;              //@synthesize screenManager=_screenManager - In the implementation block
@property (nonatomic,readonly) NSSet * appEventNames;                                 //@synthesize appEventNames=_appEventNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * counters;                               //@synthesize counters=_counters - In the implementation block
+(BOOL)_isValidSessionEndEvent:(id)arg1 ;
-(NSDictionary *)config;
-(void)processEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(CPAnalytics *)cpAnalyticsInstance;
-(void)_initializeCounters:(id)arg1 ;
-(id)_validateAndParseAppEvents:(id)arg1 ;
-(void)_updateDependenciesBeforeProcessingEvent:(id)arg1 ;
-(id)_computeSessionData:(id)arg1 ;
-(void)_sendAppSessionEvent:(id)arg1 ;
-(void)_initNewSession:(id)arg1 ;
-(void)_sendDashboardScreenViewEventForEvent:(id)arg1 ;
-(void)_sendDashboardAppEventForEvent:(id)arg1 ;
-(void)_sendDashboardMediaEventIfNeeded:(id)arg1 ;
-(void)_sendDashboardMediaEventForEvent:(id)arg1 ;
-(id)_allMediaProperties;
-(id)_allStandardProperties;
-(id)_buildCoreAnalyticsEventPayloadWithProperties:(id)arg1 forEvent:(id)arg2 withRawPayload:(id)arg3 intoTargetEventPayload:(id)arg4 ;
-(void)_sendCoreAnalyticsEventWithStandardPropertiesForEvent:(id)arg1 withPayload:(id)arg2 ;
-(CPAnalyticsScreenManager *)screenManager;
-(NSSet *)appEventNames;
-(NSMutableArray *)counters;
-(void)setCounters:(NSMutableArray *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDashboardDestination.h>
#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider.h>

@class CPAnalyticsScreenManager, NSSet, NSArray, NSString;

@interface CPAnalyticsAppStateDestination : CPAnalyticsDashboardDestination <CPAnalyticsDynamicPropertyProvider> {

	CPAnalyticsScreenManager* _screenManager;
	NSSet* _appEventNames;
	NSArray* _sessionCounters;
	NSArray* _featureCounters;

}

@property (nonatomic,readonly) CPAnalyticsScreenManager * screenManager;              //@synthesize screenManager=_screenManager - In the implementation block
@property (nonatomic,readonly) NSSet * appEventNames;                                 //@synthesize appEventNames=_appEventNames - In the implementation block
@property (nonatomic,retain) NSArray * sessionCounters;                               //@synthesize sessionCounters=_sessionCounters - In the implementation block
@property (nonatomic,retain) NSArray * featureCounters;                               //@synthesize featureCounters=_featureCounters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isValidSessionEndEvent:(id)arg1 ;
-(void)_resetCounters;
-(void)_sendDashboardScreenViewEventForEvent:(id)arg1 ;
-(void)_sendFeatureCounts;
-(void)processEvent:(id)arg1 ;
-(NSArray *)sessionCounters;
-(void)updateWithConfig:(id)arg1 ;
-(NSSet *)appEventNames;
-(void)_sendDashboardMediaEventIfNeededForEvent:(id)arg1 ;
-(id)_computeSessionData:(id)arg1 ;
-(id)allStandardProperties;
-(BOOL)_shouldSendSampleWithRate:(unsigned long long)arg1 ;
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)setFeatureCounters:(NSArray *)arg1 ;
-(id)_createCountersFromAppEvents:(id)arg1 ;
-(id)_validateAndParseAppEvents:(id)arg1 ;
-(CPAnalyticsScreenManager *)screenManager;
-(void)_sendDashboardErrorEventIfNeededForEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)_sendDashboardAppEventForEvent:(id)arg1 ;
-(void)registerSystemProperties:(id)arg1 ;
-(void)_updateDependenciesBeforeProcessingEvent:(id)arg1 ;
-(void)_sendAppSessionEventFromSourceEvent:(id)arg1 payload:(id)arg2 ;
-(void)setSessionCounters:(NSArray *)arg1 ;
-(id)_createCountersFromConfig:(id)arg1 withKey:(id)arg2 ;
-(NSArray *)featureCounters;
-(void)_sendDashboardMediaEventForEvent:(id)arg1 ;
-(void)_sendDashboardErrorEventForEvent:(id)arg1 ;
-(id)_createCountersFromScreenNames:(id)arg1 ;
@end


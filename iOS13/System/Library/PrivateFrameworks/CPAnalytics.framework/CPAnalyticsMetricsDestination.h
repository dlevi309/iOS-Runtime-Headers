/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@class NSDictionary, CPAnalyticsEventMatcherSet;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination> {

	NSDictionary* _eventRoutes;
	CPAnalyticsEventMatcherSet* _matcherSet;

}

@property (nonatomic,retain) NSDictionary * eventRoutes;                           //@synthesize eventRoutes=_eventRoutes - In the implementation block
@property (nonatomic,retain) CPAnalyticsEventMatcherSet * matcherSet;              //@synthesize matcherSet=_matcherSet - In the implementation block
-(void)processEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(BOOL)_hasCustomConfigForEvent:(id)arg1 ;
-(void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg1 ;
-(id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2 ;
-(void)_sendCoreAnalyticsEvent:(id)arg1 eventPayload:(id)arg2 ;
-(NSDictionary *)eventRoutes;
-(void)setEventRoutes:(NSDictionary *)arg1 ;
-(CPAnalyticsEventMatcherSet *)matcherSet;
-(void)setMatcherSet:(CPAnalyticsEventMatcherSet *)arg1 ;
@end


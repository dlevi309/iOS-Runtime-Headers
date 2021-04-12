/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@class NSMapTable, NSString;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination> {

	NSMapTable* _eventRoutes;

}

@property (nonatomic,readonly) NSMapTable * eventRoutes;              //@synthesize eventRoutes=_eventRoutes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg1 eventRoute:(id)arg2 ;
-(id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2 ;
-(void)_sendCoreAnalyticsEvent:(id)arg1 eventPayload:(id)arg2 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(NSMapTable *)eventRoutes;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDashboardDestination.h>

@class NSSet;

@interface CPAnalyticsIntervalDestination : CPAnalyticsDashboardDestination {

	NSSet* _trackedIntervalNames;
	NSSet* _ignoredIntervalNames;

}

@property (nonatomic,readonly) NSSet * trackedIntervalNames;              //@synthesize trackedIntervalNames=_trackedIntervalNames - In the implementation block
@property (nonatomic,readonly) NSSet * ignoredIntervalNames;              //@synthesize ignoredIntervalNames=_ignoredIntervalNames - In the implementation block
-(void)processEvent:(id)arg1 ;
-(void)updateWithConfig:(id)arg1 ;
-(NSSet *)ignoredIntervalNames;
-(void)sendDashboardIntervalEventForEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(NSSet *)trackedIntervalNames;
-(void)_handleEvent:(id)arg1 withUnknownIntervalName:(id)arg2 ;
-(id)_intervalNamesForKey:(id)arg1 inConfiguration:(id)arg2 ;
@end


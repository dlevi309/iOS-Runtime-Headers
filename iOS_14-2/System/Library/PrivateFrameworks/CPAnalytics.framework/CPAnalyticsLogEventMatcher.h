/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class CPAnalyticsEventMatcher, NSString, NSArray;

@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher {

	CPAnalyticsEventMatcher* _eventMatcher;
	BOOL _shouldLogEventName;
	NSString* _eventTypeLabel;
	NSArray* _eventPropertiesToLog;
	NSArray* _eventPublicPropertiesToLog;

}

@property (nonatomic,readonly) NSString * eventTypeLabel;                         //@synthesize eventTypeLabel=_eventTypeLabel - In the implementation block
@property (nonatomic,readonly) BOOL shouldLogEventName;                           //@synthesize shouldLogEventName=_shouldLogEventName - In the implementation block
@property (nonatomic,readonly) NSArray * eventPropertiesToLog;                    //@synthesize eventPropertiesToLog=_eventPropertiesToLog - In the implementation block
@property (nonatomic,readonly) NSArray * eventPublicPropertiesToLog;              //@synthesize eventPublicPropertiesToLog=_eventPublicPropertiesToLog - In the implementation block
-(BOOL)doesMatch:(id)arg1 ;
-(NSString *)eventTypeLabel;
-(id)init;
-(NSArray *)eventPublicPropertiesToLog;
-(id)initWithConfig:(id)arg1 ;
-(NSArray *)eventPropertiesToLog;
-(BOOL)shouldLogEventName;
@end


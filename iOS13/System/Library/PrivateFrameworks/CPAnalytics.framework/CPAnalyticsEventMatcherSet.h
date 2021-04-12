/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSMutableDictionary;

@interface CPAnalyticsEventMatcherSet : NSObject {

	NSMutableDictionary* _matchers;

}

@property (nonatomic,readonly) NSMutableDictionary * matchers;              //@synthesize matchers=_matchers - In the implementation block
-(id)init;
-(NSMutableDictionary *)matchers;
-(BOOL)registerMatcher:(id)arg1 ;
-(BOOL)hasMatchForEvent:(id)arg1 ;
@end


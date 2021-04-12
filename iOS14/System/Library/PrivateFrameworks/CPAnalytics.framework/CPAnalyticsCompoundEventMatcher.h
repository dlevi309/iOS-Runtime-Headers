/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class NSArray;

@interface CPAnalyticsCompoundEventMatcher : CPAnalyticsEventMatcher {

	unsigned long long _type;
	NSArray* _subEventMatchers;

}

@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subEventMatchers;              //@synthesize subEventMatchers=_subEventMatchers - In the implementation block
+(id)andEventMatcherWithSubEventMatchers:(id)arg1 ;
+(id)orEventMatcherWithSubEventMatchers:(id)arg1 ;
+(id)notEventMatcherWithSubEventMatcher:(id)arg1 ;
-(NSArray *)subEventMatchers;
-(BOOL)doesMatch:(id)arg1 ;
-(id)init;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 subEventMatchers:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, CPAnalyticsEventMatcher;

@interface CPAnalyticsEventCounter : NSObject {

	unsigned long long _count;
	NSString* _name;
	CPAnalyticsEventMatcher* _matcher;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CPAnalyticsEventMatcher * matcher;              //@synthesize matcher=_matcher - In the implementation block
@property (assign,nonatomic) unsigned long long count;                         //@synthesize count=_count - In the implementation block
+(id)_validateAndParseEventName:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(id)getName;
-(CPAnalyticsEventMatcher *)matcher;
-(void)countEvent:(id)arg1 ;
@end


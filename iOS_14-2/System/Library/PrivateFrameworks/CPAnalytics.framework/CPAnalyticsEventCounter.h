/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, CPAnalyticsEventMatcher;

@interface CPAnalyticsEventCounter : NSObject {

	NSString* _name;
	unsigned long long _count;
	CPAnalyticsEventMatcher* _matcher;
	NSString* _countKey;

}

@property (nonatomic,readonly) CPAnalyticsEventMatcher * matcher;              //@synthesize matcher=_matcher - In the implementation block
@property (nonatomic,readonly) NSString * countKey;                            //@synthesize countKey=_countKey - In the implementation block
@property (assign,nonatomic) unsigned long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)_validateAndParseEventName:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)countEvent:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithEventName:(id)arg1 ;
-(CPAnalyticsEventMatcher *)matcher;
-(NSString *)name;
-(id)initWithConfig:(id)arg1 ;
-(void)resetCount;
-(id)initWithName:(id)arg1 matcher:(id)arg2 ;
-(NSString *)countKey;
@end


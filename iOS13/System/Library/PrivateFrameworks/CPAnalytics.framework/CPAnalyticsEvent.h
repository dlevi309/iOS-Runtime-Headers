/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, NSDate, NSDictionary, CPAnalyticsSystemProperties;

@interface CPAnalyticsEvent : NSObject {

	NSString* _name;
	NSDate* _timestamp;
	NSDictionary* _payload;
	CPAnalyticsSystemProperties* _systemProperties;

}

@property (nonatomic,readonly) NSDictionary * payload;                                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) CPAnalyticsSystemProperties * systemProperties;              //@synthesize systemProperties=_systemProperties - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)name;
-(id)propertyForKey:(id)arg1 ;
-(NSDate *)timestamp;
-(NSDictionary *)payload;
-(id)initWithName:(id)arg1 payload:(id)arg2 systemProperties:(id)arg3 ;
-(id)copyRawPayload;
-(CPAnalyticsSystemProperties *)systemProperties;
@end


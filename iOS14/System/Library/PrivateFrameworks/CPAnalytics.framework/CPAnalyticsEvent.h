/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsEventProtocol.h>

@class NSString, NSDate, NSDictionary, CPAnalyticsSystemProperties, NSCalendar;

@interface CPAnalyticsEvent : NSObject <CPAnalyticsEventProtocol> {

	NSString* _name;
	NSDate* _timestamp;
	NSDictionary* _payload;
	CPAnalyticsSystemProperties* _systemProperties;
	NSCalendar* _gregorianCalendar;

}

@property (nonatomic,readonly) NSDictionary * payload;                                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) CPAnalyticsSystemProperties * systemProperties;              //@synthesize systemProperties=_systemProperties - In the implementation block
@property (nonatomic,readonly) NSCalendar * gregorianCalendar;                              //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_hourOfDayFromDate:(id)arg1 ;
+(id)_dayOfWeekFromDate:(id)arg1 ;
-(id)initWithName:(id)arg1 payload:(id)arg2 systemProperties:(id)arg3 ;
-(NSDate *)timestamp;
-(id)propertyForKey:(id)arg1 ;
-(NSDictionary *)payload;
-(NSString *)name;
-(id)copyRawPayload;
-(CPAnalyticsSystemProperties *)systemProperties;
-(NSCalendar *)gregorianCalendar;
@end


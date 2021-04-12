/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@class NSDictionary, NSString, NSNumber;

@interface HKMCLoggedDataMetric : NSObject {

	NSDictionary* _eventPayload;
	NSString* _method;
	NSNumber* _dayIndexLoggingOffset;

}

@property (nonatomic,copy) NSDictionary * eventPayload;                     //@synthesize eventPayload=_eventPayload - In the implementation block
@property (nonatomic,readonly) NSString * method;                           //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSNumber * dayIndexLoggingOffset;              //@synthesize dayIndexLoggingOffset=_dayIndexLoggingOffset - In the implementation block
+(id)eventName;
-(NSString *)method;
-(id)description;
-(id)initWithMethod:(id)arg1 ;
-(void)setEventPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)eventPayload;
-(NSNumber *)dayIndexLoggingOffset;
-(void)setDayIndexLoggingOffset:(NSNumber *)arg1 ;
@end


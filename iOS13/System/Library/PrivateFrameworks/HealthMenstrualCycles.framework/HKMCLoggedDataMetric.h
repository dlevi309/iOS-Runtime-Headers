/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)method;
-(id)initWithMethod:(id)arg1 ;
-(NSDictionary *)eventPayload;
-(void)setEventPayload:(NSDictionary *)arg1 ;
-(NSNumber *)dayIndexLoggingOffset;
-(void)setDayIndexLoggingOffset:(NSNumber *)arg1 ;
@end


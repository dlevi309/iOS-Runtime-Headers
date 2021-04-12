/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@class NSDictionary, NSString;

@interface HKMCNotificationSentMetric : NSObject {

	NSDictionary* _eventPayload;
	NSString* _category;

}

@property (nonatomic,copy) NSDictionary * eventPayload;              //@synthesize eventPayload=_eventPayload - In the implementation block
@property (nonatomic,retain) NSString * category;                    //@synthesize category=_category - In the implementation block
+(id)eventName;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)description;
-(void)setEventPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)eventPayload;
-(id)initWithCategory:(id)arg1 ;
@end


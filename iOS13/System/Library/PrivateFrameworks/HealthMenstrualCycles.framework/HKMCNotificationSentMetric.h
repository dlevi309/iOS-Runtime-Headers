/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(NSDictionary *)eventPayload;
-(void)setEventPayload:(NSDictionary *)arg1 ;
@end


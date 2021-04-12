/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSDate, NSString, NSDictionary;

@interface HFAnalyticsEvent : NSObject {

	unsigned long long _type;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * payload; 
-(id)description;
-(NSString *)name;
-(unsigned long long)type;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSDictionary *)payload;
-(id)initWithEventType:(unsigned long long)arg1 ;
@end


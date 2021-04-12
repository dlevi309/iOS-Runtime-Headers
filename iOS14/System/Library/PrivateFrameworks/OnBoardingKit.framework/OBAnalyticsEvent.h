/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@class NSString, NSDictionary;

@interface OBAnalyticsEvent : NSObject {

	NSString* _name;
	NSDictionary* _payload;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(id)eventWithName:(id)arg1 withPayload:(id)arg2 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString, NSDictionary;

@interface BYAnalyticsEvent : NSObject {

	NSString* _name;
	NSDictionary* _payload;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(id)eventWithName:(id)arg1 withPayload:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
@end


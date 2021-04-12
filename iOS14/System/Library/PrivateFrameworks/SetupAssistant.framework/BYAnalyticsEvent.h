/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString, NSDictionary;

@interface BYAnalyticsEvent : NSObject {

	BOOL _persist;
	NSString* _name;
	NSDictionary* _payload;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL persist;                        //@synthesize persist=_persist - In the implementation block
+(id)eventWithName:(id)arg1 withPayload:(id)arg2 persist:(BOOL)arg3 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
-(NSString *)name;
-(void)setPersist:(BOOL)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(BOOL)persist;
@end


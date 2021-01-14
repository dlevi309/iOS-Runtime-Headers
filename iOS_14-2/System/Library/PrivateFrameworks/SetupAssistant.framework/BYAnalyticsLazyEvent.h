/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString;

@interface BYAnalyticsLazyEvent : NSObject {

	BOOL _persist;
	NSString* _name;
	/*^block*/id _payloadBlock;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id payloadBlock;                //@synthesize payloadBlock=_payloadBlock - In the implementation block
@property (assign,nonatomic) BOOL persist;                 //@synthesize persist=_persist - In the implementation block
+(id)eventWithName:(id)arg1 withPayloadBlock:(/*^block*/id)arg2 persist:(BOOL)arg3 ;
-(NSString *)name;
-(void)setPayloadBlock:(id)arg1 ;
-(void)setPersist:(BOOL)arg1 ;
-(id)payloadBlock;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(BOOL)persist;
@end


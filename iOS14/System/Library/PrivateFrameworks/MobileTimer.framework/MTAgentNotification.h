/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSString, MTPowerAssertion;

@interface MTAgentNotification : NSObject {

	long long _type;
	NSString* _name;
	MTPowerAssertion* _powerAssertion;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) MTPowerAssertion * powerAssertion;              //@synthesize powerAssertion=_powerAssertion - In the implementation block
+(id)notificationWithType:(long long)arg1 name:(id)arg2 ;
+(id)notificationWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3 ;
-(void)releaseAssertion;
-(MTPowerAssertion *)powerAssertion;
-(void)setType:(long long)arg1 ;
-(void)setPowerAssertion:(MTPowerAssertion *)arg1 ;
-(NSString *)name;
-(id)initWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3 ;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end


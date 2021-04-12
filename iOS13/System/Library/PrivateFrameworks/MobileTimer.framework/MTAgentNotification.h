/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)notificationWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3 ;
+(id)notificationWithType:(long long)arg1 name:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)releaseAssertion;
-(id)initWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3 ;
-(MTPowerAssertion *)powerAssertion;
-(void)setPowerAssertion:(MTPowerAssertion *)arg1 ;
@end


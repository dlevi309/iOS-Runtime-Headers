/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <Intents/INIntentResponse.h>

@class MTIntentAlarm;

@interface MTToggleAlarmIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;                   //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) long long state; 
@property (nonatomic,copy) MTIntentAlarm * alarm; 
+(id)unspecifiedIntentResponseWithState:(long long)arg1 ;
+(id)readyIntentResponseWithState:(long long)arg1 ;
+(id)continueInAppIntentResponseWithState:(long long)arg1 ;
+(id)inProgressIntentResponseWithState:(long long)arg1 ;
+(id)successIntentResponseWithState:(long long)arg1 alarm:(id)arg2 ;
+(id)failureRequiringAppLaunchIntentResponseWithState:(long long)arg1 ;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(long long)code;
@end


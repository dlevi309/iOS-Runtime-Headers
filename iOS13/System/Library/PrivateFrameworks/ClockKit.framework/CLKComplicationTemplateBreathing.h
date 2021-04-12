/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate {

	long long _family;
	long long _sessionCount;

}

@property (assign,nonatomic) long long sessionCount;              //@synthesize sessionCount=_sessionCount - In the implementation block
+(id)breathingTemplateWithFamily:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(long long)sessionCount;
-(void)setSessionCount:(long long)arg1 ;
@end


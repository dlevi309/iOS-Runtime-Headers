/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
-(id)initWithFamily:(long long)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)sessionCount;
-(void)setSessionCount:(long long)arg1 ;
@end


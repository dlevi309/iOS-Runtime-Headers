/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <HealthMenstrualCyclesDaemon/HealthMenstrualCyclesDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDMCNotification : NSObject <NSCopying> {

	long long _dayIndex;
	NSString* _category;

}

@property (nonatomic,readonly) long long dayIndex;                    //@synthesize dayIndex=_dayIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
-(NSString *)category;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)dayIndex;
-(id)initWithDayIndex:(long long)arg1 category:(id)arg2 ;
@end


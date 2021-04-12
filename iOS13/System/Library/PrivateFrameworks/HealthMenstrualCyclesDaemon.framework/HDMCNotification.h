/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(long long)dayIndex;
-(id)initWithDayIndex:(long long)arg1 category:(id)arg2 ;
@end


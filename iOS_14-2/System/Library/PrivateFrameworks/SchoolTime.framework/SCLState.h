/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCLState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _scheduleEnabled;
	BOOL _inSchedule;
	unsigned long long _activeState;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isScheduleEnabled,nonatomic,readonly) BOOL scheduleEnabled;              //@synthesize scheduleEnabled=_scheduleEnabled - In the implementation block
@property (getter=isInSchedule,nonatomic,readonly) BOOL inSchedule;                        //@synthesize inSchedule=_inSchedule - In the implementation block
@property (nonatomic,readonly) unsigned long long activeState;                             //@synthesize activeState=_activeState - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithActiveState:(unsigned long long)arg1 scheduleEnabled:(BOOL)arg2 inSchedule:(BOOL)arg3 ;
-(unsigned long long)activeState;
-(BOOL)isScheduleEnabled;
-(BOOL)isInSchedule;
-(id)initWithActive:(BOOL)arg1 scheduleEnabled:(BOOL)arg2 inSchedule:(BOOL)arg3 ;
@end


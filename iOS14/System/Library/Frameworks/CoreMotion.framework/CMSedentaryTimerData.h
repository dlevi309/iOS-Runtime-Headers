/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying> {

	double fStartDate;
	double fFiredDate;
	long long fAlarmType;
	BOOL fDidWake;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * firedDate; 
@property (nonatomic,readonly) long long alarmType; 
@property (nonatomic,readonly) BOOL didWake; 
+(BOOL)supportsSecureCoding;
-(NSDate *)firedDate;
-(NSDate *)startDate;
-(BOOL)didWake;
-(id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(long long)arg3 didWake:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)alarmType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


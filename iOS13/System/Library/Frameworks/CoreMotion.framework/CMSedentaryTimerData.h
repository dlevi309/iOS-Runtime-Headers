/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(BOOL)didWake;
-(id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(long long)arg3 didWake:(BOOL)arg4 ;
-(NSDate *)firedDate;
-(long long)alarmType;
@end


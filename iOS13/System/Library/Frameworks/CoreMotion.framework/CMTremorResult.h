/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CMTremorResult : NSObject <NSCopying, NSSecureCoding> {

	float _percentUnknown;
	float _percentNone;
	float _percentSlight;
	float _percentMild;
	float _percentModerate;
	float _percentStrong;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) float percentUnknown;                 //@synthesize percentUnknown=_percentUnknown - In the implementation block
@property (nonatomic,readonly) float percentNone;                    //@synthesize percentNone=_percentNone - In the implementation block
@property (nonatomic,readonly) float percentSlight;                  //@synthesize percentSlight=_percentSlight - In the implementation block
@property (nonatomic,readonly) float percentMild;                    //@synthesize percentMild=_percentMild - In the implementation block
@property (nonatomic,readonly) float percentModerate;                //@synthesize percentModerate=_percentModerate - In the implementation block
@property (nonatomic,readonly) float percentStrong;                  //@synthesize percentStrong=_percentStrong - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithParkinsonsResult:(const ParkinsonsResult*)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentUnknown:(float)arg3 percentNone:(float)arg4 percentSlight:(float)arg5 percentMild:(float)arg6 percentModerate:(float)arg7 percentStrong:(float)arg8 ;
-(float)percentUnknown;
-(float)percentNone;
-(float)percentSlight;
-(float)percentMild;
-(float)percentModerate;
-(float)percentStrong;
@end


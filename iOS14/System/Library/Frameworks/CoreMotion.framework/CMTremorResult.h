/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(float)percentNone;
-(float)percentUnknown;
-(float)percentSlight;
-(float)percentMild;
-(float)percentModerate;
-(id)initWithParkinsonsResult:(const ParkinsonsResult*)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentUnknown:(float)arg3 percentNone:(float)arg4 percentSlight:(float)arg5 percentMild:(float)arg6 percentModerate:(float)arg7 percentStrong:(float)arg8 ;
-(float)percentStrong;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end


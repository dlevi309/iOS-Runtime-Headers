/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _HKActivityStatisticsStandHourInfo : NSObject <NSSecureCoding> {

	double _timeStamp;
	long long _state;

}

@property (assign,nonatomic) double timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) long long state;               //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTimeStamp:(double)arg1 state:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeStamp;
-(id)description;
-(void)setTimeStamp:(double)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(BOOL)isEqual:(id)arg1 ;
@end


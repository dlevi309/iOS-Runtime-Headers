/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(id)initWithTimeStamp:(double)arg1 state:(long long)arg2 ;
@end


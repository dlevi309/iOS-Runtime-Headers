/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMStrideCalibrationData : NSObject <NSSecureCoding, NSCopying> {

	long long _state;
	double _kValue;
	double _begin;
	double _end;

}

@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double kValue;                //@synthesize kValue=_kValue - In the implementation block
@property (assign,nonatomic) double begin;                 //@synthesize begin=_begin - In the implementation block
@property (assign,nonatomic) double end;                   //@synthesize end=_end - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(double)end;
-(double)begin;
-(void)setEnd:(double)arg1 ;
-(double)kValue;
-(id)initWithBegin:(double)arg1 end:(double)arg2 state:(long long)arg3 kValue:(double)arg4 ;
-(void)setKValue:(double)arg1 ;
-(void)setBegin:(double)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMPedometerBin : NSObject <NSSecureCoding> {

	double _valueOut;
	double _begin;
	double _end;
	long long _state;

}

@property (nonatomic,readonly) double valueOut;                   //@synthesize valueOut=_valueOut - In the implementation block
@property (nonatomic,readonly) double begin;                      //@synthesize begin=_begin - In the implementation block
@property (nonatomic,readonly) double lowerQuartile; 
@property (nonatomic,readonly) double center; 
@property (nonatomic,readonly) double upperQuartile; 
@property (nonatomic,readonly) double end;                        //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long state;                   //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)upperQuartile;
-(double)end;
-(double)begin;
-(double)center;
-(void)encodeWithCoder:(id)arg1 ;
-(double)valueOut;
-(double)lowerQuartile;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)initWithValueOut:(double)arg1 begin:(double)arg2 end:(double)arg3 state:(long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(double)end;
-(double)begin;
-(double)center;
-(double)valueOut;
-(id)initWithValueOut:(double)arg1 begin:(double)arg2 end:(double)arg3 state:(long long)arg4 ;
-(double)lowerQuartile;
-(double)upperQuartile;
@end


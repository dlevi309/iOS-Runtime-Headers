/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurement;

@interface CPTravelEstimates : NSObject <NSSecureCoding> {

	NSMeasurement* _distanceRemaining;
	double _timeRemaining;
	unsigned long long _timeRemainingColor;

}

@property (assign,nonatomic) unsigned long long timeRemainingColor;                 //@synthesize timeRemainingColor=_timeRemainingColor - In the implementation block
@property (nonatomic,copy,readonly) NSMeasurement * distanceRemaining;              //@synthesize distanceRemaining=_distanceRemaining - In the implementation block
@property (nonatomic,readonly) double timeRemaining;                                //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_greenColor;
+(id)_orangeColor;
+(id)_redColor;
+(id)timeRemainingColorForColor:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeRemaining;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSMeasurement *)distanceRemaining;
-(id)initWithDistanceRemaining:(id)arg1 timeRemaining:(double)arg2 ;
-(unsigned long long)timeRemainingColor;
-(void)setTimeRemainingColor:(unsigned long long)arg1 ;
@end


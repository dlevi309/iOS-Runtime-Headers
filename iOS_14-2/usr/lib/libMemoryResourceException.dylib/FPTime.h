/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


@class NSDate;

@interface FPTime : NSObject {

	unsigned long long _machAbsoluteTime;
	unsigned long long _machContinuousTime;
	double _wallTime;

}

@property (nonatomic,readonly) unsigned long long machAbsoluteTime;                    //@synthesize machAbsoluteTime=_machAbsoluteTime - In the implementation block
@property (nonatomic,readonly) unsigned long long machContinuousTime;                  //@synthesize machContinuousTime=_machContinuousTime - In the implementation block
@property (nonatomic,readonly) unsigned long long machAbsoluteTimeNsec; 
@property (nonatomic,readonly) unsigned long long machContinuousTimeNsec; 
@property (nonatomic,readonly) double wallTime;                                        //@synthesize wallTime=_wallTime - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
+(id)now;
-(id)init;
-(NSDate *)date;
-(unsigned long long)machAbsoluteTime;
-(double)wallTime;
-(unsigned long long)machAbsoluteTimeNsec;
-(unsigned long long)machContinuousTimeNsec;
-(unsigned long long)machContinuousTime;
@end


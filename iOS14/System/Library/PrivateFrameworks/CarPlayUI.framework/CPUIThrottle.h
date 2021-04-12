/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/


@class NSDate;

@interface CPUIThrottle : NSObject {

	NSDate* _unthrottleDate;
	NSDate* _throttleDate;
	unsigned long long _attempts;
	double _base;
	double _factor;
	double _max;

}

@property (getter=isThrottled,nonatomic,readonly) BOOL throttled; 
@property (nonatomic,readonly) NSDate * unthrottleDate;                        //@synthesize unthrottleDate=_unthrottleDate - In the implementation block
@property (nonatomic,readonly) NSDate * throttleDate;                          //@synthesize throttleDate=_throttleDate - In the implementation block
@property (nonatomic,readonly) unsigned long long attempts;                    //@synthesize attempts=_attempts - In the implementation block
@property (nonatomic,readonly) double base;                                    //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) double factor;                                  //@synthesize factor=_factor - In the implementation block
@property (nonatomic,readonly) double max;                                     //@synthesize max=_max - In the implementation block
-(void)unthrottle;
-(double)base;
-(double)factor;
-(NSDate *)throttleDate;
-(double)max;
-(unsigned long long)attempts;
-(id)initWithBase:(double)arg1 factor:(double)arg2 max:(double)arg3 ;
-(NSDate *)unthrottleDate;
-(BOOL)isThrottled;
-(id)initWithBase:(double)arg1 ;
-(BOOL)incrementAttempts;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEODataConditionalConnectionProperties : NSObject <NSSecureCoding> {

	unsigned long long _workLoad;
	double _timeWindowStartTime;
	double _timeWindowDuration;

}

@property (nonatomic,readonly) unsigned long long workLoad;              //@synthesize workLoad=_workLoad - In the implementation block
@property (nonatomic,readonly) double timeWindowStartTime;               //@synthesize timeWindowStartTime=_timeWindowStartTime - In the implementation block
@property (nonatomic,readonly) double timeWindowDuration;                //@synthesize timeWindowDuration=_timeWindowDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)workLoad;
-(id)initWithWorkload:(unsigned long long)arg1 timeWindowDuration:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeWindowStartTime;
-(double)timeWindowDuration;
-(id)initWithWorkload:(unsigned long long)arg1 timeWindowStartTime:(double)arg2 timeWindowDuration:(double)arg3 ;
@end


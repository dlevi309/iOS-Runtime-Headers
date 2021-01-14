/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSDateInterval;

@interface ATXContext : NSObject <NSSecureCoding> {

	CLLocation* _location;
	unsigned long long _contextType;
	NSDateInterval* _timeWindow;

}

@property (nonatomic,readonly) CLLocation * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long contextType;              //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,readonly) NSDateInterval * timeWindow;                 //@synthesize timeWindow=_timeWindow - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultTimeWindowForContextType:(unsigned long long)arg1 ;
-(unsigned long long)contextType;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDateInterval *)timeWindow;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContextType:(unsigned long long)arg1 location:(id)arg2 timeWindow:(id)arg3 ;
@end

